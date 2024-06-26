--- src/in_sysctl.c.orig	2024-05-14 12:03:29 UTC
+++ src/in_sysctl.c
@@ -232,7 +232,7 @@ sysctl_read(void)
 		snprintf(info_buf, sizeof(info_buf), "%ju", (uintmax_t)ifm->ifm_data.ifi_metric);
 		element_update_info(e, "Metric", info_buf);
 
-#ifndef __NetBSD__
+#if !(defined(__NetBSD__) || defined(__FreeBSD__))
 		snprintf(info_buf, sizeof(info_buf), "%u", ifm->ifm_data.ifi_recvquota);
 		element_update_info(e, "RX-Quota", info_buf);
 
