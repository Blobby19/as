#if !defined(RT_CONFIG_H__)
#define RT_CONFIG_H__

/* Automatically generated file; DO NOT EDIT. */
/* RootMenu */

/* RT-Thread Kernel */

#define RT_NAME_MAX 16
#define RT_ALIGN_SIZE 4
/* RT_THREAD_PRIORITY_8 is not set */
/* RT_THREAD_PRIORITY_32 is not set */
#define RT_THREAD_PRIORITY_256
#define RT_THREAD_PRIORITY_MAX 256
#define RT_TICK_PER_SECOND 100
#define RT_DEBUG
#define RT_USING_OVERFLOW_CHECK
#define RT_DEBUG_INIT 0
#define RT_DEBUG_THREAD 0
#define RT_USING_HOOK
#define IDLE_THREAD_STACK_SIZE 4096
/* RT_USING_TIMER_SOFT is not set */

/* Inter-Thread communication */

#define RT_USING_SEMAPHORE
#define RT_USING_MUTEX
#define RT_USING_EVENT
#define RT_USING_MAILBOX
#define RT_USING_MESSAGEQUEUE
/* RT_USING_SIGNALS is not set */

/* Memory Management */

#define RT_USING_MEMPOOL
/* RT_USING_MEMHEAP is not set */
/* RT_USING_NOHEAP is not set */
#define RT_USING_SMALL_MEM
/* RT_USING_SLAB is not set */
/* RT_USING_MEMTRACE is not set */
#define RT_USING_HEAP

/* Kernel Device Object */

#define RT_USING_DEVICE
/* RT_USING_INTERRUPT_INFO is not set */
#define RT_USING_CONSOLE
#define RT_CONSOLEBUF_SIZE 128
#define RT_CONSOLE_DEVICE_NAME "console"
/* RT_USING_MODULE is not set */

/* RT-Thread Components */

/* RT_USING_COMPONENTS_INIT is not set */

/* C++ features */

/* RT_USING_CPLUSPLUS is not set */

/* Command shell */

#define RT_USING_FINSH
#define FINSH_THREAD_NAME "tshell"
#define FINSH_USING_HISTORY
#define FINSH_HISTORY_LINES 5
#define FINSH_USING_SYMTAB
#define FINSH_USING_DESCRIPTION
#define FINSH_ECHO_DISABLE_DEFAULT
#define FINSH_THREAD_PRIORITY 20
#define FINSH_THREAD_STACK_SIZE 4096
#define FINSH_CMD_SIZE 80
/* FINSH_USING_AUTH is not set */
#define FINSH_USING_MSH
#define FINSH_USING_MSH_DEFAULT
/* FINSH_USING_MSH_ONLY is not set */
#define FINSH_ARG_MAX 10

/* Device virtual file system */

#define RT_USING_DFS
#define DFS_USING_WORKDIR
#define DFS_FILESYSTEMS_MAX 4
#define DFS_FILESYSTEM_TYPES_MAX 4
#define DFS_FD_MAX 32
#define RT_USING_DFS_ELMFAT

/* elm-chan's FatFs, Generic FAT Filesystem Module */

#define RT_DFS_ELM_CODE_PAGE 437
#define RT_DFS_ELM_WORD_ACCESS
#define RT_DFS_ELM_USE_LFN_0
/* RT_DFS_ELM_USE_LFN_1 is not set */
/* RT_DFS_ELM_USE_LFN_2 is not set */
/* RT_DFS_ELM_USE_LFN_3 is not set */
#define RT_DFS_ELM_USE_LFN 0
#define RT_DFS_ELM_MAX_LFN 255
#define RT_DFS_ELM_DRIVES 2
#define RT_DFS_ELM_MAX_SECTOR_SIZE 512
/* RT_DFS_ELM_USE_ERASE is not set */
#define RT_DFS_ELM_REENTRANT
#define RT_USING_DFS_DEVFS
/* RT_USING_DFS_NET is not set */
/* RT_USING_DFS_ROMFS is not set */
/* RT_USING_DFS_RAMFS is not set */
/* RT_USING_DFS_UFFS is not set */
/* RT_USING_DFS_JFFS2 is not set */
/* RT_USING_DFS_NFS is not set */

/* Device Drivers */

#define RT_USING_DEVICE_IPC
#define RT_USING_SERIAL
/* RT_USING_CAN is not set */
/* RT_USING_HWTIMER is not set */
/* RT_USING_CPUTIME is not set */
/* RT_USING_I2C is not set */
#define RT_USING_PIN
/* RT_USING_PWM is not set */
/* RT_USING_MTD_NOR is not set */
/* RT_USING_MTD_NAND is not set */
/* RT_USING_RTC is not set */
/* RT_USING_SDIO is not set */
/* RT_USING_SPI is not set */
/* RT_USING_WDT is not set */
/* RT_USING_WIFI is not set */
/* RT_USING_AUDIO is not set */

/* Using USB */

/* RT_USING_USB_HOST is not set */
/* RT_USING_USB_DEVICE is not set */

/* POSIX layer and C standard library */

#define RT_USING_LIBC
#define RT_USING_PTHREADS
/* RT_USING_POSIX is not set */

/* Network stack */

/* light weight TCP/IP stack */

#define RT_USING_LWIP
#define RT_USING_LWIP141
/* RT_USING_LWIP202 is not set */
#define RT_LWIP_IGMP
#define RT_LWIP_ICMP
/* RT_LWIP_SNMP is not set */
#define RT_LWIP_DNS
/* RT_LWIP_DHCP is not set */

/* Static IPv4 Address */

#define RT_LWIP_IPADDR "172.18.0.200"
#define RT_LWIP_GWADDR "172.18.0.1"
#define RT_LWIP_MSKADDR "255.255.255.0"
#define RT_LWIP_UDP
#define RT_LWIP_TCP
/* RT_LWIP_RAW is not set */
/* RT_LWIP_PPP is not set */
#define RT_MEMP_NUM_NETCONN 8
#define RT_LWIP_PBUF_NUM 16
#define RT_LWIP_RAW_PCB_NUM 4
#define RT_LWIP_UDP_PCB_NUM 4
#define RT_LWIP_TCP_PCB_NUM 4
#define RT_LWIP_TCP_SEG_NUM 40
#define RT_LWIP_TCP_SND_BUF 8196
#define RT_LWIP_TCP_WND 8196
#define RT_LWIP_TCPTHREAD_PRIORITY 10
#define RT_LWIP_TCPTHREAD_MBOX_SIZE 8
#define RT_LWIP_TCPTHREAD_STACKSIZE 4096
/* LWIP_NO_RX_THREAD is not set */
/* LWIP_NO_TX_THREAD is not set */
#define RT_LWIP_ETHTHREAD_PRIORITY 12
#define RT_LWIP_ETHTHREAD_STACKSIZE 4096
#define RT_LWIP_ETHTHREAD_MBOX_SIZE 8
/* RT_LWIP_REASSEMBLY_FRAG is not set */
#define LWIP_NETIF_STATUS_CALLBACK 1
#define SO_REUSE 1
#define LWIP_SO_RCVTIMEO 1
#define LWIP_SO_SNDTIMEO 1
#define LWIP_SO_RCVBUF 1
/* RT_LWIP_NETIF_LOOPBACK is not set */
#define LWIP_NETIF_LOOPBACK 0

/* Modbus master and slave stack */

/* RT_USING_MODBUS is not set */
/* LWIP_USING_DHCPD is not set */

/* VBUS(Virtual Software BUS) */

/* RT_USING_VBUS is not set */

/* Utilities */

/* RT_USING_LOGTRACE is not set */
/* RT_USING_RYM is not set */

/* as packages config */

#define RT_USING_LWEXT4
#define HAVE_SYS_SELECT_H

#endif
