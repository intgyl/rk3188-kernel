/* arch/arm/mach-rk2818/devices.c
 *
 * Copyright (C) 2010 ROCKCHIP, Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#include <linux/kernel.h>
#include <linux/platform_device.h>

#include <mach/irqs.h>
#include <mach/rk2818_iomap.h>
#include "devices.h"

#include <asm/mach/flash.h>
#include <linux/mtd/nand.h>
#include <linux/mtd/partitions.h>



static struct resource resources_uart0[] = {
	{
		.start	= IRQ_NR_UART0,
		.end	= IRQ_NR_UART0,
		.flags	= IORESOURCE_IRQ,
	},
	{
		.start	= RK2818_UART0_PHYS,
		.end	= RK2818_UART0_PHYS + SZ_1K - 1,
		.flags	= IORESOURCE_MEM,
	},
};
static struct resource resources_uart1[] = {
	{
		.start	= IRQ_NR_UART1,
		.end	= IRQ_NR_UART1,
		.flags	= IORESOURCE_IRQ,
	},
	{
		.start	= RK2818_UART1_PHYS,
		.end	= RK2818_UART1_PHYS + SZ_1K - 1,
		.flags	= IORESOURCE_MEM,
	},
};
static struct resource resources_uart2[] = {
	{
		.start	= IRQ_NR_UART2,
		.end	= IRQ_NR_UART2,
		.flags	= IORESOURCE_IRQ,
	},
	{
		.start	= RK2818_UART2_PHYS,
		.end	= RK2818_UART2_PHYS + SZ_1K - 1,
		.flags	= IORESOURCE_MEM,
	},
};
static struct resource resources_uart3[] = {
	{
		.start	= IRQ_NR_UART3,
		.end	= IRQ_NR_UART3,
		.flags	= IORESOURCE_IRQ,
	},
	{
		.start	= RK2818_UART3_PHYS,
		.end	= RK2818_UART3_PHYS + SZ_1K - 1,
		.flags	= IORESOURCE_MEM,
	},
};

struct platform_device rk2818_device_uart0 = {
	.name	= "rk2818_serial",
	.id	= 0,
	.num_resources	= ARRAY_SIZE(resources_uart0),
	.resource	= resources_uart0,
};
struct platform_device rk2818_device_uart1 = {
	.name	= "rk2818_serial",
	.id	= 1,
	.num_resources	= ARRAY_SIZE(resources_uart1),
	.resource	= resources_uart1,
};
struct platform_device rk2818_device_uart2 = {
	.name	= "rk2818_serial",
	.id	= 2,
	.num_resources	= ARRAY_SIZE(resources_uart2),
	.resource	= resources_uart2,
};
struct platform_device rk2818_device_uart3 = {
	.name	= "rk2818_serial",
	.id	= 3,
	.num_resources	= ARRAY_SIZE(resources_uart3),
	.resource	= resources_uart3,
};
