PORTNAME=	xcalc
PORTVERSION=	1.1.2
PORTREVISION=	1
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Scientific calculator for X
WWW=		https://gitlab.freedesktop.org/xorg/app/xcalc

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	font-adobe-100dpi>=1.0.3:x11-fonts/font-adobe-100dpi \
		font-alias>=1.0.3:x11-fonts/font-alias \
		font-misc-misc>=1.1.2:x11-fonts/font-misc-misc \
		xbitmaps>=1.1.0:x11/xbitmaps

USES=		tar:xz xorg xorg-cat:app
USE_XORG=	x11 xaw xt

GNU_CONFIGURE_MANPREFIX=	${PREFIX}/share

.include <bsd.port.mk>
