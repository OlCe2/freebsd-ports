PORTNAME=	freebsd-snapshot
DISTVERSION=	20091208.1
PORTREVISION=	4
CATEGORIES=	sysutils
MASTER_SITES=	https://people.freebsd.org/~rse/dist/

MAINTAINER=	gtodd@bellanet.org
COMMENT=	Convenience frontend tools for the management of UFS2/ZFS snapshots
WWW=		https://people.freebsd.org/~rse/snapshot/

LICENSE=	BSD2CLAUSE

NO_BUILD=	yes
NO_ARCH=	yes

SUB_FILES=	pkg-message

PLIST_FILES=	etc/amd.map.snap share/man/man8/periodic-snapshot.8.gz \
		share/man/man8/snapshot.8.gz sbin/periodic-snapshot sbin/snapshot

post-patch:
	@${REINPLACE_CMD} -e "s|%%PREFIX%%|${PREFIX}|g" \
		${WRKSRC}/amd.map.snap ${WRKSRC}/snapshot \
		${WRKSRC}/periodic-snapshot ${WRKSRC}/snapshot.8

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/snapshot ${STAGEDIR}${PREFIX}/sbin
	${INSTALL_SCRIPT} ${WRKSRC}/periodic-snapshot ${STAGEDIR}${PREFIX}/sbin
	${INSTALL_MAN} ${WRKSRC}/snapshot.8 ${STAGEDIR}${PREFIX}/share/man/man8
	${INSTALL_MAN} ${WRKSRC}/periodic-snapshot.8 \
		${STAGEDIR}${PREFIX}/share/man/man8
	${INSTALL_DATA} ${WRKSRC}/amd.map.snap ${STAGEDIR}${PREFIX}/etc

.include <bsd.port.mk>
