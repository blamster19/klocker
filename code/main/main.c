// SPDX-License-Identifier: Apache-2.0
// Copyright 2019 Ricardo Quesada
// http://retro.moe/unijoysticle2

#include "sdkconfig.h"

#include <stddef.h>

// BTstack related
#include <btstack_port_esp32.h>
#include <btstack_run_loop.h>
#include <btstack_stdio_esp32.h>

// Bluepad32 related
#include <arduino_platform.h>
#include <uni.h>

// Custom
#include "bp32_task.h"
#include <Arduino.h>

//
// Autostart
//
#if CONFIG_AUTOSTART_ARDUINO
void initBluepad32() {
#else
int app_main(void) {
#endif  // !CONFIG_AUTOSTART_ARDUINO
    // hci_dump_open(NULL, HCI_DUMP_STDOUT);

// Don't use BTstack buffered UART. It conflicts with the console.
#ifndef CONFIG_ESP_CONSOLE_UART_NONE
#ifndef CONFIG_BLUEPAD32_USB_CONSOLE_ENABLE
    btstack_stdio_init();
#endif  // CONFIG_BLUEPAD32_USB_CONSOLE_ENABLE
#endif  // CONFIG_ESP_CONSOLE_UART_NONE

	// BP32 task
	xTaskCreatePinnedToCore(
		bp32_task,
		"BP32",
		10000,
		NULL,
		0,
		NULL,
		0
	);

#if !CONFIG_AUTOSTART_ARDUINO
    return 0;
#endif  // !CONFIG_AUTOSTART_ARDUINO
}
