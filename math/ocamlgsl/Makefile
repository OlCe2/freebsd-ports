PORTNAME=	ocaml-gsl
DISTVERSIONPREFIX=v
DISTVERSION=	1.19.1
PORTREVISION=	8
CATEGORIES=	math

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Interface to GSL for the Objective Caml language
WWW=		http://oandrieu.nerim.net/ocaml/gsl/

LICENSE=	GPLv3

LIB_DEPENDS=	libgsl.so:math/gsl
BUILD_DEPENDS=	gawk:lang/gawk \
		ocamlbuild:devel/ocaml-ocamlbuild \
		${OCAMLC_DEPEND}
RUN_DEPENDS=	ocamlfind:devel/ocaml-findlib

USE_GITHUB=	yes
GH_ACCOUNT=	mmottl
GH_PROJECT=	gsl-ocaml

USES=			gmake
USE_OCAML=		YES
USE_OCAML_FINDLIB=	YES
USE_OCAML_CAMLP4=	YES
USE_OCAML_LDCONFIG=	YES
OCAML_PKGDIRS=		gsl
HAS_CONFIGURE=		YES
MAKE_JOBS_UNSAFE=	yes

NOT_FOR_ARCHS=		armv6
NOT_FOR_ARCHS_REASON=	architectures with double-word alignment for doubles are not supported

DOCSDIR=	${LOCALBASE}/share/doc

OPTIONS_DEFINE=	DOCS

post-configure:
	@${ECHO_CMD} 'stagedir="${STAGEDIR}"' >> ${WRKSRC}/setup.data
	@${ECHO_CMD} 'docdir="$$datarootdir/doc/ocaml/$$pkg_name"' >> ${WRKSRC}/setup.data

.include <bsd.port.mk>
