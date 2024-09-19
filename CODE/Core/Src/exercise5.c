/*
 * exercise5.c
 *
 *  Created on: Sep 19, 2024
 *      Author: VO HOANG HUY
 */
#include "exercise5.h"

int led_status_15 = LED_GREEN;

int led_yellow_count_15 = 2;
int led_red_count_15	   = 5;
int led_green_count_15  = 4;


int led_status_25 = LED_RED;

int led_yellow_count_25 = 2;
int led_red_count_25	   = 6;
int led_green_count_25  = 3;

void init_exercise5(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);

	HAL_GPIO_WritePin(REDB_GPIO_Port, REDB_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(YELLOWB_GPIO_Port, YELLOWB_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, GPIO_PIN_SET);

}
void led_green_15_off(){
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
}
void led_green_15_on(){
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
}
void led_yellow_15_off(){
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
}
void led_yellow_15_on(){
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
}
void led_red_15_off(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
}
void led_red_15_on(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
}

void led_green_25_off(){
	HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, GPIO_PIN_SET);
}
void led_green_25_on(){
	HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, GPIO_PIN_RESET);
}
void led_yellow_25_off(){
	HAL_GPIO_WritePin(YELLOWB_GPIO_Port, YELLOWB_Pin, GPIO_PIN_SET);
}
void led_yellow_25_on(){
	HAL_GPIO_WritePin(YELLOWB_GPIO_Port, YELLOWB_Pin, GPIO_PIN_RESET);
}
void led_red_25_off(){
	HAL_GPIO_WritePin(REDB_GPIO_Port, REDB_Pin, GPIO_PIN_SET);
}
void led_red_25_on(){
	HAL_GPIO_WritePin(REDB_GPIO_Port, REDB_Pin, GPIO_PIN_RESET);
}
void LEDA(int num)
{
	switch(num){
		case 0:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_SET);
			break;
		case 1:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_SET);
			break;
		case 2:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
			break;
		default:
			break;
	}
}
void LEDB(int num)
{
	switch(num){
		case 0:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_SET);
			break;
		case 1:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_SET);
			break;
		case 2:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_RESET);
			break;
		default:
			break;
	}
}
void exercise5_run(){
	switch(led_status_15){
			case LED_GREEN:
				led_green_count_15--;
				LEDA(led_green_count_15);
				led_green_15_on();
				if(led_green_count_15==0){
					led_status_15=LED_YELLOW;
					led_green_count_15=3;
					led_green_15_off();
					led_yellow_15_on();
					LEDA(2);
				}
				break;
			case LED_YELLOW:
				led_yellow_count_15--;
				LEDA(led_yellow_count_15);
				led_yellow_15_on();
				if(led_yellow_count_15==0){
					led_status_15=LED_RED;
					led_yellow_count_15=2;
					led_yellow_15_off();
					led_red_15_on();
					LEDA(5);
				}
				break;
			case LED_RED:
				led_red_count_15--;
				LEDA(led_red_count_15);
				led_red_15_on();
				if(led_red_count_15==0){
					led_status_15=LED_GREEN;
					led_red_count_15=5;
					led_red_15_off();
					led_green_15_on();
					LEDA(3);
				}
				break;
			default:
				break;
		}
	switch(led_status_25){
			case LED_GREEN:
				led_green_count_25--;
				LEDB(led_green_count_25);
				led_green_25_on();
				if(led_green_count_25==0){
					led_status_25=LED_YELLOW;
					led_green_count_25=3;
					led_green_25_off();
					led_yellow_25_on();
					LEDB(2);
				}
				break;
			case LED_YELLOW:
				led_yellow_count_25--;
				LEDB(led_yellow_count_25);
				led_yellow_25_on();
				if(led_yellow_count_25==0){
					led_status_25=LED_RED;
					led_yellow_count_25=2;
					led_yellow_25_off();
					led_red_25_on();
					LEDB(5);
				}
				break;
			case LED_RED:
				led_red_count_25--;
				LEDB(led_red_count_25);
				led_red_25_on();
				if(led_red_count_25==0){
					led_status_25=LED_GREEN;
					led_red_count_25=5;
					led_red_25_off();
					led_green_25_on();
					LEDB(3);
				}
				break;
			default:
				break;
		}
}

