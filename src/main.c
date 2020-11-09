#include <libopencm3/stm32/rcc.h>

#include <trace.h>

int main(void)
{
    rcc_clock_setup_in_hse_8mhz_out_72mhz();

    traceInit();

    while (true) {
    }
}
