//IGFeedPhotoView IGImageProgressView
%hook IGFeedItemPhotoCell
- (id)initWithFrame:(struct CGRect)arg1{
self = %orig;
UILongPressGestureRecognizer *longPressGestureRecognizer = [[UILongPressGestureRecognizer alloc] initWithTarget:self action:@selector(longPressGesture)];
[self addGestureRecognizer:longPressGestureRecognizer];
return self;

}
- (void)feedPhotoViewDidLoadImage:(id)arg1{
    %orig;


    NSURL *imageUrl = [arg1 valueForKey:@"imageURL"];
 
 //   IGFeedPhotoView *feedPhotoView = (IGFeedPhotoView *)arg1;
    id photoImageView = [arg1 valueForKey:@"_photoImageView"];
    

    UIImage *image = [photoImageView valueForKey:@"preloadedImage"];
    objc_setAssociatedObject(self, @"imageKey", image, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(self, @"imageURL", imageUrl, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

}
%new
- (void)longPressGesture{
NSURL *url = objc_getAssociatedObject(self, @"imageURL");
UIAlertController *alertController = [UIAlertController alertControllerWithTitle:@"是否下载图片" message:nil preferredStyle:UIAlertControllerStyleAlert];
 [alertController addTextFieldWithConfigurationHandler:^(UITextField * _Nonnull textField) {
        [textField setText:[NSString stringWithFormat:@"%@",url]];
    }];
UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:^(UIAlertAction * _Nonnull action) {
[alertController dismissViewControllerAnimated:YES completion:nil];
}];
UIAlertAction *okAction = [UIAlertAction actionWithTitle:@"是的" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
[alertController dismissViewControllerAnimated:YES completion:nil];

	UIImage *image = objc_getAssociatedObject(self, @"imageKey");
        
       // UILabel *label = [[UILabel alloc] initWithFrame:CGRectMake(20, 20, 200, 40)];
       // [label setTextColor:[UIColor redColor]];
       // [label setText:[NSString stringWithFormat:@"image == %@",[image class]]];
       // [self addSubview:label];
        
//        UIImage *image = imageView.image;
        UIImageWriteToSavedPhotosAlbum(image, nil, nil, nil);
        [alertController dismissViewControllerAnimated:YES completion:nil];
}];
[alertController addAction:cancelAction];
[alertController addAction:okAction];

UIViewController *viewController = [self performSelector:@selector(getCurrentViewController) withObject:nil];
    [viewController presentViewController:alertController animated:YES completion:nil];

}
%new
- (UIViewController *)getCurrentViewController {
    
    for (UIView *next = [self superview]; next; next =
         next.superview) {
        UIResponder* nextResponder = [next nextResponder];
        if ([nextResponder isKindOfClass:[UIViewController class]]) {
            return (UIViewController*)nextResponder;
        }
    }
    return nil;
}
%end






