--- src/3rdparty/chromium/base/base_switches.cc.orig	2023-10-11 18:22:24 UTC
+++ src/3rdparty/chromium/base/base_switches.cc
@@ -180,7 +180,7 @@ const char kPackageVersionName[] = "package-version-na
 const char kPackageVersionCode[] = "package-version-code";
 #endif
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 // TODO(crbug.com/1176772): Remove kEnableCrashpad and IsCrashpadEnabled() when
 // Crashpad is fully enabled on Linux. Indicates that Crashpad should be
 // enabled.
