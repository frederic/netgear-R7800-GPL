# 
#  Copyright (C) 2007 Delta Networks Inc.
#

include $(TOPDIR)/rules.mk

PKG_NAME:=wget
PKG_RELEASE:=1
PKG_VERSION:=1.13.4

PKG_SOURCE:=$(PKG_NAME)-$(PKG_VERSION).tar.bz2
PKG_SOURCE_URL:=downloads.openwrt.org/sources/$(PKG_SOURCE)
PKG_MD5SUM:=12115c3750a4d92f9c6ac62bac372e85

include $(INCLUDE_DIR)/package.mk

define Package/wget
	SECTION:=utils
	CATEGORY:=Network
	TITLE:=Green Download ftp http Client
endef

#define Build/Configure
#	(cd $(PKG_BUILD_DIR) ; \
#		./configure \
#			--host=$(GNU_TARGET_NAME) \
#			--with-ssl=no ; \
#	);
#endef
CONFIGURE_ARGS+= \
                  --host=$(GNU_TARGET_NAME) \
                  --with-ssl=no \

define Package/wget/install
	install -d -m0755 $(1)/usr/sbin
	install -m0755 $(PKG_BUILD_DIR)/src/wget $(1)/usr/sbin/
endef

$(eval $(call BuildPackage,wget))
