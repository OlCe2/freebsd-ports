PORTNAME=	rebot3
PORTVERSION=	1.0.2
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	http://www.headmqa.com/${PORTNAME}/ \
		http://www.bayofrum.net/dist/${PORTNAME}/

MAINTAINER=	crees@FreeBSD.org
COMMENT=	Renames mp3 files using freedb or local CDDB
WWW=		http://www.headmqa.com/rebot3/

LICENSE=	GPLv2

DEPRECATED=	Depends on legacy service/protocol that's requires registration
EXPIRATION_DATE=2024-05-31

RUN_DEPENDS=	p5-CDDB>=0:audio/p5-CDDB \
		p5-MP3-ID3v1Tag>=0:audio/p5-MP3-ID3v1Tag

USES=		perl5
NO_BUILD=	yes

PLIST_FILES=	bin/${PORTNAME} share/man/man1/${PORTNAME}.1.gz

post-patch:
# Yes, we know it's perl, but we don't want to type '.pl' the whole time.
	@${REINPLACE_CMD} -e 's#\(${PORTNAME}\).pl#\1#' \
		-e '1s#/usr/bin/perl#${PERL}#' \
		-e 's#defined (\(@.*\))#\1#' \
		${WRKSRC}/${PORTNAME}.pl ${WRKSRC}/${PORTNAME}.pl.1

do-install:
	@${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME}.pl \
		${STAGEDIR}${PREFIX}/bin/${PORTNAME}
	@${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.pl.1 \
		${STAGEDIR}${PREFIX}/share/man/man1/${PORTNAME}.1

.include <bsd.port.mk>
