PORTNAME=	idnkit
PORTVERSION=	2.3
PORTREVISION=	3
CATEGORIES=	dns
MASTER_SITES=	https://jprs.co.jp/idn/
PKGNAMESUFFIX=	2

MAINTAINER=	fbsd@grid.einherjar.de
COMMENT=	Internationalized Domain Name toolkit 2
WWW=		https://jprs.co.jp/idn/index-e.html

LICENSE=	OSCL
LICENSE_NAME=	Open Source Code License
LICENSE_FILE=	${WRKSRC}/LICENSE.txt
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

CONFLICTS_INSTALL=	idnkit-1.*

USES=		iconv libtool tar:bzip2
GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share
CONFIGURE_ARGS=	${ICONV_CONFIGURE_BASE}

USE_LDCONFIG=	yes

INSTALL_TARGET=	install-strip

post-patch:
	@${REINPLACE_CMD} -e 's|-liconv|${ICONV_LIB}|' \
		${WRKSRC}/configure

.include <bsd.port.mk>
