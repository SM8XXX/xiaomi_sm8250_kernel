# SPDX-License-Identifier: GPL-2.0-only

ccflags-y += -I$(srctree)/techpack/camera-cas/include/uapi
ccflags-y += -I$(srctree)/techpack/camera-cas/drivers/cam_utils
ccflags-y += -I$(srctree)/techpack/camera-cas/drivers/cam_req_mgr
ccflags-y += -I$(srctree)/techpack/camera-cas/drivers/cam_core
ccflags-y += -I$(srctree)/techpack/camera-cas/drivers/cam_icp
ccflags-y += -I$(srctree)/techpack/camera-cas/drivers/cam_icp/icp_hw/include
ccflags-y += -I$(srctree)/techpack/camera-cas/drivers/cam_icp/icp_hw/icp_hw_mgr/include
ccflags-y += -I$(srctree)/techpack/camera-cas/drivers/cam_icp/icp_hw/bps_hw
ccflags-y += -I$(srctree)/techpack/camera-cas/drivers/cam_icp/fw_inc
ccflags-y += -I$(srctree)/techpack/camera-cas/drivers/cam_cpas/include

obj-$(CONFIG_SPECTRA_CAMERA) += bps_dev.o bps_core.o bps_soc.o
