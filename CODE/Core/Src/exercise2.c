/*
 * exercise2.c
 *
 *  Created on: Sep 19, 2024
 *      Author: VO HOANG HUY
 */

#include "exercise2.h"

int led_status2 = LED_GREEN;

int led_yellow_count = 2;
int led_red_count    = 5;
int led_green_count  = 4;

void init_exercise2(){
	  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
}
void led_green_off(){
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
}
void led_green_on(){
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
}
void led_yellow_off(){
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
}
void led_yellow_on(){
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
}
void led_red_off(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
}
void led_red_on(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
}

void exercise2_run(){
	switch(led_status2){
		case LED_GREEN:
			led_green_count--;
			led_green_on();
			if(led_green_count==0){
				led_status2=LED_YELLOW;
				led_green_count=3;
				led_green_off();
				led_yellow_on();
			}
			break;

		case LED_YELLOW:
			led_yellow_count--;
			led_yellow_on();
			if(led_yellow_count==0){
				led_status2=LED_RED;
				led_yellow_count=2;
				led_yellow_off();
				led_red_on();
			}
			break;
		case LED_RED:
			led_red_count--;
			led_red_on();
			if(led_red_count==0){
				led_status2=LED_GREEN;
				led_red_count=5;
				led_red_off();
				led_green_on();
			}
			break;
		default:
			break;
	}
}
