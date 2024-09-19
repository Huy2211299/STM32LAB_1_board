/*
 * exercise3.c
 *
 *  Created on: Sep 19, 2024
 *      Author: VO HOANG HUY
 */

#include "exercise3.h"

int led_status_1 = LED_GREEN;

int led_yellow_count_1 = 2;
int led_red_count_1	   = 5;
int led_green_count_1  = 4;


int led_status_2 = LED_RED;

int led_yellow_count_2 = 2;
int led_red_count_2	   = 6;
int led_green_count_2  = 3;

void init_exercise3(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);

	HAL_GPIO_WritePin(REDB_GPIO_Port, REDB_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(YELLOWB_GPIO_Port, YELLOWB_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, GPIO_PIN_SET);

}
void led_green_1_off(){
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
}
void led_green_1_on(){
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
}
void led_yellow_1_off(){
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
}
void led_yellow_1_on(){
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
}
void led_red_1_off(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
}
void led_red_1_on(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
}

void led_green_2_off(){
	HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, GPIO_PIN_SET);
}
void led_green_2_on(){
	HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, GPIO_PIN_RESET);
}
void led_yellow_2_off(){
	HAL_GPIO_WritePin(YELLOWB_GPIO_Port, YELLOWB_Pin, GPIO_PIN_SET);
}
void led_yellow_2_on(){
	HAL_GPIO_WritePin(YELLOWB_GPIO_Port, YELLOWB_Pin, GPIO_PIN_RESET);
}
void led_red_2_off(){
	HAL_GPIO_WritePin(REDB_GPIO_Port, REDB_Pin, GPIO_PIN_SET);
}
void led_red_2_on(){
	HAL_GPIO_WritePin(REDB_GPIO_Port, REDB_Pin, GPIO_PIN_RESET);
}

void exercise3_run(){
	switch(led_status_1){
			case LED_GREEN:
				led_green_count_1--;
				led_green_1_on();
				if(led_green_count_1==0){
					led_status_1=LED_YELLOW;
					led_green_count_1=3;
					led_green_1_off();
					led_yellow_1_on();
				}
				break;
			case LED_YELLOW:
				led_yellow_count_1--;
				led_yellow_1_on();
				if(led_yellow_count_1==0){
					led_status_1=LED_RED;
					led_yellow_count_1=2;
					led_yellow_1_off();
					led_red_1_on();
				}
				break;
			case LED_RED:
				led_red_count_1--;
				led_red_1_on();
				if(led_red_count_1==0){
					led_status_1=LED_GREEN;
					led_red_count_1=5;
					led_red_1_off();
					led_green_1_on();
				}
				break;
			default:
				break;
		}
	switch(led_status_2){
			case LED_GREEN:
				led_green_count_2--;
				led_green_2_on();
				if(led_green_count_2==0){
					led_status_2=LED_YELLOW;
					led_green_count_2=3;
					led_green_2_off();
					led_yellow_2_on();
				}
				break;
			case LED_YELLOW:
				led_yellow_count_2--;
				led_yellow_2_on();
				if(led_yellow_count_2==0){
					led_status_2=LED_RED;
					led_yellow_count_2=2;
					led_yellow_2_off();
					led_red_2_on();
				}
				break;
			case LED_RED:
				led_red_count_2--;
				led_red_2_on();
				if(led_red_count_2==0){
					led_status_2=LED_GREEN;
					led_red_count_2=5;
					led_red_2_off();
					led_green_2_on();
				}
				break;
			default:
				break;
		}
}
