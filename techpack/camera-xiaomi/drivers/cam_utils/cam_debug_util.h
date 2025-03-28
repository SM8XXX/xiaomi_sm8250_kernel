/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2017-2019, The Linux Foundation. All rights reserved.
 */

 #ifndef _CAM_DEBUG_UTIL_H_
 #define _CAM_DEBUG_UTIL_H_
 
 #define CAM_CDM        (1 << 0)
 #define CAM_CORE       (1 << 1)
 #define CAM_CPAS       (1 << 2)
 #define CAM_ISP        (1 << 3)
 #define CAM_CRM        (1 << 4)
 #define CAM_SENSOR     (1 << 5)
 #define CAM_SMMU       (1 << 6)
 #define CAM_SYNC       (1 << 7)
 #define CAM_ICP        (1 << 8)
 #define CAM_JPEG       (1 << 9)
 #define CAM_FD         (1 << 10)
 #define CAM_LRME       (1 << 11)
 #define CAM_FLASH      (1 << 12)
 #define CAM_ACTUATOR   (1 << 13)
 #define CAM_CCI        (1 << 14)
 #define CAM_CSIPHY     (1 << 15)
 #define CAM_EEPROM     (1 << 16)
 #define CAM_UTIL       (1 << 17)
 #define CAM_HFI        (1 << 18)
 #define CAM_CTXT       (1 << 19)
 #define CAM_OIS        (1 << 20)
 #define CAM_RES        (1 << 21)
 #define CAM_MEM        (1 << 22)
 
 /* CAM_IRQ_CTRL: For events in irq controller */
 #define CAM_IRQ_CTRL   (1 << 23)
 
 /* CAM_REQ: Tracks a request submitted to KMD */
 #define CAM_REQ        (1 << 24)
 
 /* CAM_PERF: Used for performance (clock, BW etc) logs */
 #define CAM_PERF       (1 << 25)
 #define CAM_CUSTOM     (1 << 26)
 
 #define STR_BUFFER_MAX_LENGTH  1024
 
 /*
  *  cam_debug_log()
  *
  * @brief     :  Get the Module name from module ID and print
  *               respective debug logs
  *
  * @module_id :  Respective Module ID which is calling this function
  * @func      :  Function which is calling to print logs
  * @line      :  Line number associated with the function which is calling
  *               to print log
  * @fmt       :  Formatted string which needs to be print in the log
  *
  */
 static inline void cam_debug_log(unsigned int module_id, const char *func,
				  const int line, const char *fmt, ...)
 {
 }
 
 /*
  * cam_get_module_name()
  *
  * @brief     :  Get the module name from module ID
  *
  * @module_id :  Module ID which is using this function
  */
 static inline const char *cam_get_module_name(unsigned int module_id)
 {
	 return NULL;
 }
 
 /*
  * CAM_ERR
  * @brief    :  This Macro will print error logs
  *
  * @__module :  Respective module id which is been calling this Macro
  * @fmt      :  Formatted string which needs to be print in log
  * @args     :  Arguments which needs to be print in log
  */
 #define CAM_ERR(__module, fmt, args...) \
	 cam_debug_log(__module, __func__, __LINE__, fmt, ##args)
 /*
  * CAM_WARN
  * @brief    :  This Macro will print warning logs
  *
  * @__module :  Respective module id which is been calling this Macro
  * @fmt      :  Formatted string which needs to be print in log
  * @args     :  Arguments which needs to be print in log
  */
 #define CAM_WARN(__module, fmt, args...) \
	 cam_debug_log(__module, __func__, __LINE__, fmt, ##args)
 /*
  * CAM_INFO
  * @brief    :  This Macro will print Information logs
  *
  * @__module :  Respective module id which is been calling this Macro
  * @fmt      :  Formatted string which needs to be print in log
  * @args     :  Arguments which needs to be print in log
  */
 #define CAM_INFO(__module, fmt, args...) \
	 cam_debug_log(__module, __func__, __LINE__, fmt, ##args)
 /*
  * CAM_INFO_RATE_LIMIT
  * @brief    :  This Macro will print info logs with ratelimit
  *
  * @__module :  Respective module id which is been calling this Macro
  * @fmt      :  Formatted string which needs to be print in log
  * @args     :  Arguments which needs to be print in log
  */
 #define CAM_INFO_RATE_LIMIT(__module, fmt, args...) \
	 cam_debug_log(__module, __func__, __LINE__, fmt, ##args)
 /*
  * CAM_DBG
  * @brief    :  This Macro will print debug logs when enabled using GROUP
  *
  * @__module :  Respective module id which is been calling this Macro
  * @fmt      :  Formatted string which needs to be print in log
  * @args     :  Arguments which needs to be print in log
  */
 #define CAM_DBG(__module, fmt, args...) \
	 cam_debug_log(__module, __func__, __LINE__, fmt, ##args)
 
 /*
  * CAM_ERR_RATE_LIMIT
  * @brief    :  This Macro will print error print logs with ratelimit
  */
 #define CAM_ERR_RATE_LIMIT(__module, fmt, args...) \
	 cam_debug_log(__module, __func__, __LINE__, fmt, ##args)
 /*
  * CAM_WARN_RATE_LIMIT
  * @brief    :  This Macro will print warning logs with ratelimit
  *
  * @__module :  Respective module id which is been calling this Macro
  * @fmt      :  Formatted string which needs to be print in log
  * @args     :  Arguments which needs to be print in log
  */
 #define CAM_WARN_RATE_LIMIT(__module, fmt, args...) \
	 cam_debug_log(__module, __func__, __LINE__, fmt, ##args)
 
 /*
  * CAM_WARN_RATE_LIMIT_CUSTOM
  * @brief    :  This Macro will print warn logs with custom ratelimit
  *
  * @__module :  Respective module id which is been calling this Macro
  * @interval :  Time interval in seconds
  * @burst    :  No of logs to print in interval time
  * @fmt      :  Formatted string which needs to be print in log
  * @args     :  Arguments which needs to be print in log
  */
 #define CAM_WARN_RATE_LIMIT_CUSTOM(__module, interval, burst, fmt, args...)
 /*
  * CAM_INFO_RATE_LIMIT_CUSTOM
  * @brief    :  This Macro will print info logs with custom ratelimit
  *
  * @__module :  Respective module id which is been calling this Macro
  * @interval :  Time interval in seconds
  * @burst    :  No of logs to print in interval time
  * @fmt      :  Formatted string which needs to be print in log
  * @args     :  Arguments which needs to be print in log
  */
 #define CAM_INFO_RATE_LIMIT_CUSTOM(__module, interval, burst, fmt, args...)
 /*
  * CAM_ERR_RATE_LIMIT_CUSTOM
  * @brief    :  This Macro will print error logs with custom ratelimit
  *
  * @__module :  Respective module id which is been calling this Macro
  * @interval :  Time interval in seconds
  * @burst    :  No of logs to print in interval time
  * @fmt      :  Formatted string which needs to be print in log
  * @args     :  Arguments which needs to be print in log
  */
 #define CAM_ERR_RATE_LIMIT_CUSTOM(__module, interval, burst, fmt, args...)
 
 #endif /* _CAM_DEBUG_UTIL_H_ */
 