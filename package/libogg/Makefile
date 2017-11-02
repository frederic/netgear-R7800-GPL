# 
# Copyright (C) 2006 OpenWrt.org
#
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#
# $Id: Makefile 12228 2008-08-06 22:43:15Z nbd $

include $(TOPDIR)/rules.mk

PKG_NAME:=libogg
PKG_VERSION:=1.1.3
PKG_RELEASE:=1

PKG_SOURCE:=$(PKG_NAME)-$(PKG_VERSION).tar.gz
PKG_SOURCE_URL:=http://downloads.xiph.org/releases/ogg/
PKG_MD5SUM:=eaf7dc6ebbff30975de7527a80831585

include $(INCLUDE_DIR)/package.mk

define Package/libogg
  SECTION:=libs
  CATEGORY:=Libraries
  TITLE:=libogg
  URL:=http://www.xiph.org
endef

define Build/Configure
	(cd $(PKG_BUILD_DIR); \
		$(TARGET_CONFIGURE_OPTS) \
		CFLAGS="$(TARGET_CFLAGS) $(EXTRA_CFLAGS)" \
		CXXFLAGS="$(TARGET_CFLAGS) $(EXTRA_CFLAGS)" \
		CPPFLAGS="$(TARGET_CPPFLAGS) $(EXTRA_CPPFLAGS)" \
		LDFLAGS="$(TARGET_LDFLAGS)" \
		PKG_CONFIG_PATH="$(STAGING_DIR)/usr/lib/pkgconfig" \
		PKG_CONFIG_LIBDIR="$(STAGING_DIR)/usr/lib/pkgconfig" \
		./configure \
		--host=$(GNU_TARGET_NAME) \
		--build=$(GNU_HOST_NAME) \
		--prefix=$(PKG_INSTALL_DIR))
endef

define Build/Compile
	$(MAKE) -C $(PKG_BUILD_DIR) \
		all install
endef

define Build/InstallDev
	mkdir -p $(1)/usr/include
	$(CP) $(PKG_INSTALL_DIR)/include/ogg $(1)/usr/include/
	mkdir -p $(1)/usr/lib
	$(CP) $(PKG_INSTALL_DIR)/lib/libogg*.{a,la,so*} $(1)/usr/lib/
	mkdir -p $(1)/usr/lib/pkgconfig
	$(CP) $(PKG_INSTALL_DIR)/lib/pkgconfig/ogg.pc $(1)/usr/lib/pkgconfig/
endef

define Package/libogg/install
	$(INSTALL_DIR) $(1)/usr/lib
	$(CP) $(PKG_INSTALL_DIR)/lib/libogg*.so $(1)/usr/lib/
	$(CP) $(PKG_INSTALL_DIR)/lib/libogg*.so.* $(1)/usr/lib/
endef

$(eval $(call BuildPackage,libogg))
