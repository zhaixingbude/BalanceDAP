/* RT-Thread config file */

#ifndef __RTTHREAD_CFG_H__
#define __RTTHREAD_CFG_H__

#include "RTE_Components.h"

#define RT_THREAD_PRIORITY_MAX  8
#define RT_TICK_PER_SECOND  1000

#define RT_ALIGN_SIZE   4
#define RT_NAME_MAX    8
#define RT_USING_COMPONENTS_INIT

#define RT_USING_USER_MAIN

#define RT_MAIN_THREAD_STACK_SIZE     256

#define RT_DEBUG_INIT 0

#define RT_USING_TIMER_SOFT         0
//#if RT_USING_TIMER_SOFT == 0
//    #undef RT_USING_TIMER_SOFT
//#endif

#define RT_TIMER_THREAD_PRIO        4
#define RT_TIMER_THREAD_STACK_SIZE  512

#define RT_USING_SEMAPHORE
#define RT_USING_MUTEX
#define RT_USING_EVENT
#define RT_USING_MAILBOX

#define RT_USING_HEAP
#define RT_USING_SMALL_MEM

/* Kernel Device Object */

//#define RT_USING_DEVICE
#define RT_USING_CONSOLE
#define RT_CONSOLEBUF_SIZE 128
#define RT_USING_CPU_FFS

#define RT_USING_FINSH
#define FINSH_USING_MSH
#define FINSH_USING_MSH_ONLY

#define __FINSH_THREAD_PRIORITY     1
#define FINSH_THREAD_PRIORITY       (RT_THREAD_PRIORITY_MAX / 8 * __FINSH_THREAD_PRIORITY + 1)
#define FINSH_THREAD_STACK_SIZE     512
#define FINSH_HISTORY_LINES         1

#define FINSH_USING_SYMTAB

#endif
