#ifndef __AP_CFG_H__
#define __AP_CFG_H__

#include "rt_config.h"

INT Set_CountryString_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_CountryCode_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

#ifdef EXT_BUILD_CHANNEL_LIST
INT Set_ChGeography_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
#endif /* EXT_BUILD_CHANNEL_LIST */

#ifdef SPECIFIC_TX_POWER_SUPPORT
INT Set_AP_PKT_PWR(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);
#endif /* SPECIFIC_TX_POWER_SUPPORT */

INT Set_AP_PROBE_RSP_TIMES(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_AP_SSID_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

#ifdef DELAYED_TCP_ACK
INT Set_ACKQ_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_CACKQ_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_ACKWait_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_ACKLen_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_ShowACKQParm_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);
#endif /* DELAYED_TCP_ACK */

INT Set_TxRate_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);


#ifdef DOT11_VHT_AC
INT Set_2G_256QAM_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);
#endif /* DOT11_VHT_AC */

INT Set_OLBCDetection_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_AP_MaxStaNum_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_AP_IdleTimeout_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

#ifdef IAPP_SUPPORT
INT Set_IappPID_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
#endif /* IAPP_SUPPORT */

INT Set_AP_AuthMode_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_AP_EncrypType_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_AP_WpaMixPairCipher_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_AP_RekeyInterval_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_AP_RekeyMethod_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_AP_PMKCachePeriod_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_AP_PACKET_FILTER_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_AP_PROBE_RSSI_THRESHOLD(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_AP_AUTH_FAIL_RSSI_THRESHOLD(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_AP_AUTH_NO_RSP_RSSI_THRESHOLD(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_AP_ASSOC_REQ_FAIL_RSSI_THRESHOLD(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_AP_ASSOC_REQ_NO_RSP_RSSI_THRESHOLD(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_AP_KickStaRssiLow_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_AP_DefaultKeyID_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_AP_Key1_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_AP_Key2_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_AP_Key3_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_AP_Key4_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_AP_WPAPSK_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_BasicRate_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_BeaconPeriod_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_DtimPeriod_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_NoForwarding_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_NoForwardingBTNSSID_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_NoForwardingMBCast_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_AP_WmmCapable_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_HideSSID_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_VLANID_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_VLANPriority_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_VLAN_TAG_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_AccessPolicy_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);


INT Set_ACLAddEntry_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_ACLDelEntry_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_ACLShowAll_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_ACLClearAll_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_RadioOn_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_SiteSurvey_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_AutoChannelSel_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

#ifdef AP_PARTIAL_SCAN_SUPPORT
INT Set_PartialScan_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
#endif /* AP_PARTIAL_SCAN_SUPPORT */

#ifdef AP_SCAN_SUPPORT
INT Set_AutoChannelSelCheckTime_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
#endif /* AP_SCAN_SUPPORT */

INT Set_BADecline_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Show_StaCount_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Show_StaSecurityInfo_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Show_DriverInfo_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Show_BaTable_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Show_Sat_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Show_RAInfo_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

#ifdef DBG_DIAGNOSE
INT Set_DiagOpt_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_BDInfo_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
#endif /* DBG_DAIGNOSE */

INT Show_Sat_Reset_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

#ifdef DOT1X_SUPPORT
VOID RTMPIoctlQueryRadiusConf(IN PRTMP_ADAPTER pAd, IN RTMP_IOCTL_INPUT_STRUCT * wrq);

INT Set_IEEE8021X_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_PreAuth_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_RADIUS_Server_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_RADIUS_Port_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_RADIUS_Key_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
#endif /* DOT1X_SUPPORT */

INT Set_DisConnectSta_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_DisConnectAllSta_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);


#ifdef APCLI_SUPPORT
INT Set_ApCli_Enable_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
INT Set_ApCli_Ssid_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
INT Set_ApCli_Bssid_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
INT Set_ApCli_DefaultKeyID_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
INT Set_ApCli_WPAPSK_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
INT Set_ApCli_Key1_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
INT Set_ApCli_Key2_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
INT Set_ApCli_Key3_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
INT Set_ApCli_Key4_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
INT Set_ApCli_TxMode_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
INT Set_ApCli_TxMcs_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
#ifdef APCLI_AUTO_CONNECT_SUPPORT
INT Set_ApCli_AutoConnect_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
#endif /* APCLI_AUTO_CONNECT_SUPPORT */

#ifdef APCLI_CONNECTION_TRIAL
INT Set_ApCli_Trial_Ch_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
#endif /* APCLI_CONNECTION_TRIAL */

#ifdef APCLI_WPA_SUPPLICANT_SUPPORT
INT Set_ApCli_Wpa_Support(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
INT Set_ApCli_IEEE8021X_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
#endif /*APCLI_WPA_SUPPLICANT_SUPPORT */

#ifdef MAC_REPEATER_SUPPORT
INT Set_ReptMode_Enable_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
#endif /* MAC_REPEATER_SUPPORT */

#ifdef WSC_AP_SUPPORT
INT Set_AP_WscSsid_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
#endif /* WSC_AP_SUPPORT */
#ifdef APCLI_CERT_SUPPORT
INT Set_ApCli_Cert_Enable_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
INT Set_ApCli_WMM_Enable_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
#endif /* APCLI_CERT_SUPPORT */
#endif /* APCLI_SUPPORT */
#ifdef UAPSD_SUPPORT
INT Set_UAPSD_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
#endif /* UAPSD_SUPPORT */

#ifdef WSC_AP_SUPPORT
INT Set_WscStatus_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

#ifdef BB_SOC
INT Set_WscOOB_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
#endif /* endif */

INT Set_WscStop_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

VOID RTMPIoctlWscProfile(IN PRTMP_ADAPTER pAdapter, IN RTMP_IOCTL_INPUT_STRUCT * wrq);

VOID RTMPIoctlWscPINCode(IN PRTMP_ADAPTER pAdapter, IN RTMP_IOCTL_INPUT_STRUCT * wrq);

VOID RTMPIoctlWscStatus(IN PRTMP_ADAPTER pAdapter, IN RTMP_IOCTL_INPUT_STRUCT * wrq);

VOID RTMPIoctlGetWscDynInfo(IN PRTMP_ADAPTER pAdapter, IN RTMP_IOCTL_INPUT_STRUCT * wrq);

VOID RTMPIoctlGetWscRegsDynInfo(IN PRTMP_ADAPTER pAdapter, IN RTMP_IOCTL_INPUT_STRUCT * wrq);

BOOLEAN WscCheckEnrolleeNonceFromUpnp(IN PRTMP_ADAPTER pAdapter,
				      IN PSTRING pData, IN USHORT Length, IN PWSC_CTRL pWscControl);

UCHAR WscRxMsgTypeFromUpnp(IN PRTMP_ADAPTER pAdapter, IN PSTRING pData, IN USHORT Length);

INT WscGetConfForUpnp(IN PRTMP_ADAPTER pAd, IN PWSC_CTRL pWscControl);

INT Set_AP_WscConfMode_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_AP_WscConfStatus_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_AP_WscMode_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_AP_WscGetConf_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_AP_WscPinCode_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_AP_WscSecurityMode_Proc(IN PRTMP_ADAPTER pAdapter, IN PSTRING arg);

INT Set_AP_WscMultiByteCheck_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_WscVersion_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_WscUUID_STR_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_WscUUID_HEX_E_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

#ifdef WSC_V2_SUPPORT
INT Set_WscV2Support_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_WscVersion2_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_WscExtraTlvTag_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_WscExtraTlvType_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_WscExtraTlvData_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_WscSetupLock_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_WscFragment_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_WscFragmentSize_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_WscMaxPinAttack_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

INT Set_WscSetupLockTime_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
#endif /* WSC_V2_SUPPORT */

#endif /* WSC_AP_SUPPORT */


#ifdef CONFIG_AP_SUPPORT
#ifdef MCAST_RATE_SPECIFIC
INT Set_McastPhyMode(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
INT Set_McastMcs(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
INT Show_McastRate(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
#endif /* MCAST_RATE_SPECIFIC */

INT Set_OBSSScanParam_Proc(RTMP_ADAPTER *pAd, PSTRING arg);
INT Set_AP2040ReScan_Proc(RTMP_ADAPTER *pAd, PSTRING arg);

INT Set_EntryLifeCheck_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);


#ifdef AP_QLOAD_SUPPORT
INT Set_QloadClr_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

/* QLOAD ALARM */
INT Set_QloadAlarmTimeThreshold_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING Arg);

INT Set_QloadAlarmNumThreshold_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING Arg);
#endif /* AP_QLOAD_SUPPORT */
#endif /* CONFIG_AP_SUPPORT */


INT Set_MemDebug_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

#ifdef CONFIG_AP_SUPPORT
INT Set_PowerSaveLifeTime_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);
#endif /* CONFIG_AP_SUPPORT */


#ifdef DYNAMIC_VGA_SUPPORT
INT Set_AP_DyncVgaEnable_Proc(IN RTMP_ADAPTER *pAd, IN PSTRING arg);

INT set_dynamic_lna_trigger_timer_proc(IN RTMP_ADAPTER *pAd, IN PSTRING arg);

INT set_false_cca_hi_th(RTMP_ADAPTER *pAd, PSTRING arg);
INT set_false_cca_low_th(RTMP_ADAPTER *pAd, PSTRING arg);
#endif /* DYNAMIC_VGA_SUPPORT */

#ifdef THERMAL_PROTECT_SUPPORT
INT set_thermal_protection_criteria_proc(IN RTMP_ADAPTER *pAd, IN PSTRING arg);
#endif /* THERMAL_PROTECT_SUPPORT */

INT RTMPAPPrivIoctlSet(IN RTMP_ADAPTER *pAd, IN RTMP_IOCTL_INPUT_STRUCT *pIoctlCmdStr);

INT RTMPAPPrivIoctlShow(IN RTMP_ADAPTER *pAd, IN RTMP_IOCTL_INPUT_STRUCT *pIoctlCmdStr);

VOID RTMPAPGetAssoMacTable(IN RTMP_ADAPTER *pAd, IN RTMP_IOCTL_INPUT_STRUCT *pIoctlCmdStr);

#if defined(INF_AR9) || defined(BB_SOC)
#if defined(AR9_MAPI_SUPPORT) || defined(BB_SOC)
INT RTMPAPPrivIoctlAR9Show(IN RTMP_ADAPTER *pAd, IN RTMP_IOCTL_INPUT_STRUCT *pIoctlCmdStr);

VOID RTMPAR9IoctlGetMacTable(IN PRTMP_ADAPTER pAd, IN RTMP_IOCTL_INPUT_STRUCT *wrq);

VOID RTMPIoctlGetSTAT2(IN PRTMP_ADAPTER pAd, IN RTMP_IOCTL_INPUT_STRUCT *wrq);

VOID RTMPIoctlGetRadioDynInfo(IN PRTMP_ADAPTER pAd, IN RTMP_IOCTL_INPUT_STRUCT *wrq);
#endif /*AR9_MAPI_SUPPORT */
#endif /* INF_AR9 */

INT RTMPAPSetInformation(IN PRTMP_ADAPTER pAd, IN OUT RTMP_IOCTL_INPUT_STRUCT *rq, IN INT cmd);

INT RTMPAPQueryInformation(IN PRTMP_ADAPTER pAd, IN OUT RTMP_IOCTL_INPUT_STRUCT *rq, IN INT cmd);

VOID RTMPIoctlStatistics(IN PRTMP_ADAPTER pAd, IN RTMP_IOCTL_INPUT_STRUCT *wrq);

VOID RTMPIoctlGetMacTableStaInfo(IN PRTMP_ADAPTER pAd, IN RTMP_IOCTL_INPUT_STRUCT *wrq);

VOID RTMPIoctlGetMacTable(IN PRTMP_ADAPTER pAd, IN RTMP_IOCTL_INPUT_STRUCT *wrq);

VOID RTMPAPIoctlE2PROM(IN PRTMP_ADAPTER pAdapter, IN RTMP_IOCTL_INPUT_STRUCT *wrq);

#if defined(DBG) || (defined(BB_SOC) && defined(RALINK_ATE))
VOID RTMPAPIoctlBBP(IN PRTMP_ADAPTER pAdapter, IN RTMP_IOCTL_INPUT_STRUCT *wrq);

VOID RTMPAPIoctlMAC(IN PRTMP_ADAPTER pAdapter, IN RTMP_IOCTL_INPUT_STRUCT *wrq);

#ifdef RTMP_RF_RW_SUPPORT
VOID RTMPAPIoctlRF(IN PRTMP_ADAPTER pAdapter, IN RTMP_IOCTL_INPUT_STRUCT *wrq);
#endif /* RTMP_RF_RW_SUPPORT */

#endif /* DBG */

VOID RtmpDrvRateGet(IN VOID *pReserved,
/*	IN	PHTTRANSMIT_SETTING		pHtPhyMode, */
		    IN UINT8 MODE,
		    IN UINT8 ShortGI,
		    IN UINT8 BW, IN UINT8 MCS, IN UINT8 Antena, OUT UINT32 *pRate);

#ifdef WSC_AP_SUPPORT
VOID RTMPIoctlWscProfile(IN PRTMP_ADAPTER pAdapter, IN RTMP_IOCTL_INPUT_STRUCT *wrq);

VOID RTMPIoctlWscProfile(IN PRTMP_ADAPTER pAdapter, IN RTMP_IOCTL_INPUT_STRUCT *wrq);
/*add by woody */
#if defined(INF_AR9) || defined(BB_SOC)
#if defined(AR9_MAPI_SUPPORT) || defined(BB_SOC)
VOID RTMPAR9IoctlWscProfile(IN PRTMP_ADAPTER pAdapter, IN RTMP_IOCTL_INPUT_STRUCT *wrq);

VOID RTMPIoctlWscPINCode(IN PRTMP_ADAPTER pAdapter, IN RTMP_IOCTL_INPUT_STRUCT *wrq);

VOID RTMPIoctlWscStatus(IN PRTMP_ADAPTER pAdapter, IN RTMP_IOCTL_INPUT_STRUCT *wrq);

VOID RTMPIoctlGetWscDynInfo(IN PRTMP_ADAPTER pAdapter, IN RTMP_IOCTL_INPUT_STRUCT *wrq);

VOID RTMPIoctlGetWscRegsDynInfo(IN PRTMP_ADAPTER pAdapter, IN RTMP_IOCTL_INPUT_STRUCT *wrq);
#endif /*AR9_MAPI_SUPPORT */
#endif /* INF_AR9 */
#endif /* WSC_AP_SUPPORT */

VOID RTMPIoctlQueryBaTable(IN PRTMP_ADAPTER pAd, IN RTMP_IOCTL_INPUT_STRUCT *wrq);

#ifdef DOT1X_SUPPORT
VOID RTMPIoctlStaticWepCopy(IN PRTMP_ADAPTER pAd, IN RTMP_IOCTL_INPUT_STRUCT *wrq);

VOID RTMPIoctlRadiusData(IN PRTMP_ADAPTER pAd, IN RTMP_IOCTL_INPUT_STRUCT *wrq);

VOID RTMPIoctlAddWPAKey(IN PRTMP_ADAPTER pAd, IN RTMP_IOCTL_INPUT_STRUCT *wrq);

VOID RTMPIoctlAddPMKIDCache(IN PRTMP_ADAPTER pAd, IN RTMP_IOCTL_INPUT_STRUCT *wrq);

VOID RTMPIoctlSetIdleTimeout(IN PRTMP_ADAPTER pAd, IN RTMP_IOCTL_INPUT_STRUCT *wrq);

VOID RTMPIoctlQueryStaAid(IN PRTMP_ADAPTER pAd, IN RTMP_IOCTL_INPUT_STRUCT *wrq);
#endif /* DOT1X_SUPPORT */

INT Set_AP_Daemon_Status(IN PRTMP_ADAPTER pAd, IN UINT8 WorkSpaceID, IN BOOLEAN Status);

INT Set_AP_IE(IN PRTMP_ADAPTER pAd, IN PSTRING IE, IN UINT32 IELen);

#ifdef CONFIG_HOTSPOT
INT Send_ANQP_Rsp(IN PRTMP_ADAPTER pAd,
		  IN PSTRING PeerMACAddr, IN PSTRING ANQPReq, IN UINT32 ANQPReqLen);
#endif /* endif */

INT ApCfg_Set_AuthMode_Proc(IN PRTMP_ADAPTER pAd, IN INT apidx, IN PSTRING arg);

INT ApCfg_Set_MaxStaNum_Proc(IN PRTMP_ADAPTER pAd, IN INT apidx, IN PSTRING arg);

INT ApCfg_Set_IdleTimeout_Proc(IN PRTMP_ADAPTER pAd, IN PSTRING arg);

#ifdef APCLI_SUPPORT
#ifdef APCLI_WPA_SUPPLICANT_SUPPORT
VOID RTMPApCliAddKey(IN PRTMP_ADAPTER pAd, IN INT apidx, IN PNDIS_APCLI_802_11_KEY pApcliKey);
#endif /* APCLI_WPA_SUPPLICANT_SUPPORT */
#endif /* APCLI_SUPPORT */
#endif /* __AP_CFG_H__ */