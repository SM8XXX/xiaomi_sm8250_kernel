# SPDX-License-Identifier: GPL-2.0-only

ccflags-y += -I$(srctree)/techpack/camera-cas/drivers/cam_utils
ccflags-y += -I$(srctree)/techpack/camera-cas/drivers/cam_req_mgr
ccflags-y += -I$(srctree)/techpack/camera-cas/drivers/cam_core
ccflags-y += -I$(srctree)/techpack/camera-cas/drivers/cam_cpas/include
ccflags-y += -I$(srctree)/techpack/camera-cas/drivers/cam_jpeg
ccflags-y += -I$(srctree)/techpack/camera-cas/drivers/cam_jpeg/jpeg_hw/include
ccflags-y += -I$(srctree)/techpack/camera-cas/drivers/cam_jpeg/jpeg_hw/
ccflags-y += -I$(srctree)/techpack/camera-cas/drivers/cam_jpeg/jpeg_hw/jpeg_hw_mgr/include
ccflags-y += -I$(srctree)/techpack/camera-cas/drivers/cam_jpeg/jpeg_hw/jpeg_dma_hw

obj-$(CONFIG_SPECTRA_CAMERA) += jpeg_dma_dev.o jpeg_dma_core.o jpeg_dma_soc.o
