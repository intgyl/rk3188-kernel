obj-y                                   += common.o
obj-y                                   += devices.o
obj-y                                   += io.o
obj-y                                   += irq.o
obj-y                                   += clock.o
obj-y                                   += timer.o
obj-y                                   += gpio.o
obj-y                                   += pinmux.o
obj-y                                   += powergate.o
obj-y					+= fuse.o
obj-$(CONFIG_ARCH_TEGRA_2x_SOC)         += clock.o
obj-$(CONFIG_ARCH_TEGRA_2x_SOC)         += tegra2_clocks.o
obj-$(CONFIG_ARCH_TEGRA_2x_SOC)		+= tegra2_emc.o
obj-$(CONFIG_ARCH_TEGRA_2x_SOC)		+= pinmux-t2-tables.o
obj-$(CONFIG_SMP)                       += platsmp.o localtimer.o headsmp.o
obj-$(CONFIG_HOTPLUG_CPU)               += hotplug.o
obj-$(CONFIG_TEGRA_SYSTEM_DMA)		+= dma.o
obj-$(CONFIG_CPU_FREQ)                  += cpu-tegra.o
obj-$(CONFIG_TEGRA_PCI)			+= pcie.o
obj-$(CONFIG_USB_SUPPORT)		+= usb_phy.o

obj-${CONFIG_MACH_HARMONY}              += board-harmony.o
obj-${CONFIG_MACH_HARMONY}              += board-harmony-pinmux.o
obj-${CONFIG_MACH_HARMONY}              += board-harmony-pcie.o
obj-${CONFIG_MACH_HARMONY}              += board-harmony-power.o

obj-${CONFIG_MACH_PAZ00}		+= board-paz00.o
obj-${CONFIG_MACH_PAZ00}		+= board-paz00-pinmux.o

obj-${CONFIG_MACH_SEABOARD}             += board-seaboard.o
obj-${CONFIG_MACH_SEABOARD}             += board-seaboard-pinmux.o

obj-${CONFIG_MACH_TRIMSLICE}            += board-trimslice.o
obj-${CONFIG_MACH_TRIMSLICE}            += board-trimslice-pinmux.o
