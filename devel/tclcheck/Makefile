PORTNAME=	tclcheck
DISTVERSION=	1.1.14
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	tcltk@FreeBSD.org
COMMENT=	Program to check the nesting of parenthesis in tcl scripts
WWW=		https://gitlab.com/ports1/tclcheck

LICENSE=			NEWCASTLE BSD2CLAUSE
LICENSE_COMB=			dual
LICENSE_NAME_NEWCASTLE=		University of Newcastle upon Tyne
LICENSE_FILE_NEWCASTLE=		${WRKSRC}/COPYRIGHT
LICENSE_FILE_BSD2CLAUSE=	${WRKSRC}/LICENSE
LICENSE_PERMS_NEWCASTLE=	dist-mirror pkg-mirror auto-accept

USES=		alias

USE_GITLAB=	yes
GL_ACCOUNT=	ports1
GL_TAGNAME=	9de3e5b12c5f453137305377344cb1d1c848e75e

OPTIONS_DEFINE=	DOCS

PLIST_FILES=	bin/tclCheck \
		share/man/man1/tclCheck.1.gz \

PORTDOCS=	README README.md

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/tclCheck ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/tclCheck.1 ${STAGEDIR}${PREFIX}/share/man/man1

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.md ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
