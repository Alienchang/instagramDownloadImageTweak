include theos/makefiles/common.mk
iOSRE_FRAMEWORKS = UIKit Foundation 
TWEAK_NAME = instagramdownload
instagramdownload_FILES = Tweak.xm
THEOS_DEVICE_IP = 192.168.15.193
ARCHS = armv7 arm64
TARGET = iphone:latest:9.0
include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 Instagram"
