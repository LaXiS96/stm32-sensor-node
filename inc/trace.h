#ifndef _TRACE_H
#define _TRACE_H

#include <libopencm3/cm3/itm.h>
#include <libopencm3/cm3/scs.h>
#include <libopencm3/cm3/tpiu.h>
#include <libopencm3/stm32/dbgmcu.h>

#define TRACE_CLOCK        2000000
#define TRACE_CONSOLE_STIM 0

void traceInit(void);
void traceWriteChar(const char chr);
void traceWriteString(const char *str, uint32_t len);
void tracePrint(const char *str);
void tracePrintLine(const char *str);

#endif
