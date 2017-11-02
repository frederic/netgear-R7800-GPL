# 
# Copyright (C) 2006 OpenWrt.org
#
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#
# $Id: Makefile 12228 2008-08-06 22:43:15Z nbd $

include $(TOPDIR)/rules.mk

PKG_NAME:=jpegsrc
PKG_VERSION:=v6b
PKG_RELEASE:=1

PKG_SOURCE:=$(PKG_NAME).$(PKG_VERSION).tar.gz
PKG_SOURCE_URL:=http://www.ijg.org/files/
PKG_MD5SUM:=dbd5f3b47ed13132f04c685d608a7547

PKG_BUILD_DIR:=$(BUILD_DIR)/jpeg-6b

include $(INCLUDE_DIR)/package.mk

define Package/libjpeg
  SECTION:=libs
  CATEGORY:=Libraries
  TITLE:=JPEG image compression
  URL:=http://www.ijg.org/files/
endef

define Build/Configure
	$(call Build/Configure/Default, \
		--prefix=$(PKG_INSTALL_DIR) \
		--enable-shared \
	)
endef

define Build/Compile
	$(MAKE) -C $(PKG_BUILD_DIR) \
		DESTDIR="$(PKG_INSTALL_DIR)" \
		all install
endef

define Build/InstallDev
	mkdir -p $(1)/usr/include
	$(CP) $(PKG_INSTALL_DIR)/include/*.h $(1)/usr/include/
	mkdir -p $(1)/usr/lib
	$(CP) $(PKG_INSTALL_DIR)/lib/libjpeg*.{la,so*} $(1)/usr/lib/
endef

define Package/libjpeg/install
	$(INSTALL_DIR) $(1)/usr/lib
	$(CP) $(PKG_INSTALL_DIR)/lib/libjpeg*.so $(1)/usr/lib/
	$(CP) $(PKG_INSTALL_DIR)/lib/libjpeg*.so.* $(1)/usr/lib/
endef

$(eval $(call BuildPackage,libjpeg))
