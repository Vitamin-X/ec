// SPDX-License-Identifier: GPL-3.0-only

#include <board/interrupts.h>
#include <board/power.h>
#include <common/debug.h>
#include <common/macro.h>
#include <ec/intc.h>
#include <ec/wuc.h>

void interrupts_init(void) {
    // INT17: BUF_PLT_RST#
    WUESR2 = BIT(4);
    interrupt_enable(17);

    // INT85: LAN_WAKEUP#
    WUEMR9 = BIT(0);
    WUESR9 = BIT(0);
    interrupt_enable(85);
}

void external_1(void) __interrupt(2) {
    uint8_t intr = IVCT - 0x10;

    switch (intr) {
    case 17:
        // INT17: BUF_PLT_RST#
        power_handle_buf_plt_rst();
        WUESR2 = BIT(4);
        break;

    case 85:
        // INT85: LAN_WAKEUP#
        power_handle_lan_wakeup();
        WUESR8 = BIT(4);
        break;

    default:
        WARN("Unhandled interrupt: INT%d\n", intr);
        break;
    }

    // XXX: Must be acknowledged or cause an interrupt storm
    interrupt_clear(intr);
}
