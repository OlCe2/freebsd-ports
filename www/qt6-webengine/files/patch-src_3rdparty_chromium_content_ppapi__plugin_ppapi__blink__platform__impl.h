--- src/3rdparty/chromium/content/ppapi_plugin/ppapi_blink_platform_impl.h.orig	2023-05-31 08:12:17 UTC
+++ src/3rdparty/chromium/content/ppapi_plugin/ppapi_blink_platform_impl.h
@@ -33,7 +33,7 @@ class PpapiBlinkPlatformImpl : public BlinkPlatformImp
   blink::WebString DefaultLocale() override;
 
  private:
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_MAC)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD)
   std::unique_ptr<blink::WebSandboxSupport> sandbox_support_;
 #endif
 };
