PORTNAME=	GD
PORTVERSION=	2.81
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 interface to Gd Graphics Library version2
WWW=		https://metacpan.org/release/GD

LICENSE=	ART20 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-ExtUtils-PkgConfig>=0:devel/p5-ExtUtils-PkgConfig
LIB_DEPENDS=	libgd.so:graphics/gd
TEST_DEPENDS=	p5-Test-NoWarnings>=1.00:devel/p5-Test-NoWarnings

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/GD/GD.so

.include <bsd.port.mk>
