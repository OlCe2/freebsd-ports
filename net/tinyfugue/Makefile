PORTNAME=	tf
PORTVERSION=	5.0b8
PORTREVISION=	5
CATEGORIES=	net games
MASTER_SITES=	SF/tinyfugue/tinyfugue/5.0%20beta%208
DISTNAME=	${PORTNAME}-${PORTVERSION:S/.//}

MAINTAINER=	dinoex@FreeBSD.org
COMMENT=	Popular programmable MUD client, with macro support and more
WWW=		https://tinyfugue.sourceforge.net/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libpcre.so:devel/pcre

USES=		ssl
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-manpage --enable-version --enable-symlink \
		--datadir=${PREFIX}/lib --with-inclibpfx=${LOCALBASE}
LDFLAGS+=	-L${LOCALBASE}

PLIST_SUB=	DISTNAME=${DISTNAME}

post-patch:
	${REINPLACE_CMD} 's:@.*dir@:$${DESTDIR}&:' ${WRKSRC}/unix/vars.mak.in
	${REINPLACE_CMD} '/ln -s/s@(TF)@(TF:T)@' ${WRKSRC}/unix/unix.mak

post-build:
	${STRIP_CMD} ${WRKSRC}/src/tf

post-install:
	${INSTALL_MAN} ${WRKSRC}/src/tf.1.nroffman \
		${STAGEDIR}${PREFIX}/share/man/man1/tf.1

.include <bsd.port.mk>
