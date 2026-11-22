#ifndef CHANNEL_MGMT_H
#define CHANNEL_MGMT_H

#include <stdbool.h>
#include <stdint.h>
#include "stm32l4xx_hal.h"

#define BTN_EVENT_FLAG_BTN1 (1U << 0)
#define BTN_EVENT_FLAG_BTN2 (1U << 1)
#define BTN_EVENT_FLAG_REC  (1U << 2)

typedef enum {
	CHANNEL_STATE_OFF = 0,
	CHANNEL_STATE_ON = 1
} channel_state_e;

typedef struct {
	channel_state_e state;
	GPIO_TypeDef *led_port;
	uint16_t led_pin;
	GPIO_TypeDef *btn_port;
	uint16_t btn_pin;
} channel_s;

extern channel_s ch1;
extern channel_s ch2;

extern volatile bool is_recording;
extern volatile uint32_t btn_event_flags;

void rec_button_callback(void);
void ch_mgmt_button1_callback(void);
void ch_mgmt_button2_callback(void);

void ch_handle_event(channel_s *target, channel_s *other);

#endif