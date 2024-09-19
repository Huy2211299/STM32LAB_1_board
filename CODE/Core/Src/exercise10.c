/*
 * exercise10.c
 *
 *  Created on: Sep 19, 2024
 *      Author: VO HOANG HUY
 */
#include "exercise10.h"

int second_count = 0;
int minute_count = 0;
int hour_count = 0;


void clearNumberOnClock(int num){
	switch(num){
		case 0:
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
			break;
		case 1:
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
			break;
		case 2:
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
			break;
		case 3:
			HAL_GPIO_WritePin(REDB_GPIO_Port, REDB_Pin, GPIO_PIN_SET);
			break;
		case 4:
			HAL_GPIO_WritePin(YELLOWB_GPIO_Port, YELLOWB_Pin, GPIO_PIN_SET);
			break;
		case 5:
			HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, GPIO_PIN_SET);
			break;
		case 6:
			HAL_GPIO_WritePin(led6_GPIO_Port, led6_Pin, GPIO_PIN_SET);
			break;
		case 7:
			HAL_GPIO_WritePin(led7_GPIO_Port, led7_Pin, GPIO_PIN_SET);
			break;
		case 8:
			HAL_GPIO_WritePin(led8_GPIO_Port, led8_Pin, GPIO_PIN_SET);
			break;
		case 9:
			HAL_GPIO_WritePin(led9_GPIO_Port, led9_Pin, GPIO_PIN_SET);
			break;
		case 10:
			HAL_GPIO_WritePin(led10_GPIO_Port, led10_Pin, GPIO_PIN_SET);
			break;
		case 11:
			HAL_GPIO_WritePin(led11_GPIO_Port, led11_Pin, GPIO_PIN_SET);
			break;
		default:
			break;
	}
}

void setNumberOnClock(int num){
	switch(num){
		case 0:
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(REDB_GPIO_Port, REDB_Pin, GPIO_PIN_RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(YELLOWB_GPIO_Port, YELLOWB_Pin, GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, GPIO_PIN_RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(led6_GPIO_Port, led6_Pin, GPIO_PIN_RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(led7_GPIO_Port, led7_Pin, GPIO_PIN_RESET);
			break;
		case 8:
			HAL_GPIO_WritePin(led8_GPIO_Port, led8_Pin, GPIO_PIN_RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(led9_GPIO_Port, led9_Pin, GPIO_PIN_RESET);
			break;
		case 10:
			HAL_GPIO_WritePin(led10_GPIO_Port, led10_Pin, GPIO_PIN_RESET);
			break;
		case 11:
			HAL_GPIO_WritePin(led11_GPIO_Port, led11_Pin, GPIO_PIN_RESET);
			break;
		default:
			break;
	}
}
void clearAllClock(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(REDB_GPIO_Port, REDB_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(YELLOWB_GPIO_Port, YELLOWB_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GREENB_GPIO_Port, GREENB_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(led6_GPIO_Port, led6_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(led7_GPIO_Port, led7_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(led8_GPIO_Port, led8_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(led9_GPIO_Port, led9_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(led10_GPIO_Port, led10_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(led11_GPIO_Port, led11_Pin, GPIO_PIN_SET);
}
void init_exercise10(){
	clearAllClock();
}
void exercise10_run(){
		//kim giay chay du 5 vong
		if(second_count >= 60){
			//kiem tra xem lieu kim giay truoc do co trung voi kim phut hay kim gio khong
			if((second_count/5 - 1) != (minute_count/5) && (second_count/5 - 1) != hour_count){
				//tat kim giay truoc do
				clearNumberOnClock(second_count/5 - 1);
			}
			//cap nhat kim phut va reset kim giay
			minute_count++;
			second_count = 0;
		}
		//kiem tra xem lieu kim giay truoc do co trung voi kim phut hay kim gio khong
		if((second_count/5 - 1) != (minute_count/5) && (second_count/5 - 1) != hour_count){
			//tat kim giay truoc do
			clearNumberOnClock(second_count/5 - 1);
		}
		//bat kim giay hien tai
		setNumberOnClock(second_count/5);
		//cap nhat kim giay
		second_count++;
/////////////////////////////////////////////////////////////////////////////////////////////////////
		//kim phut chay du 5 vong
		if(minute_count >= 60){
			//kiem tra xem lieu kim phut truoc do co trung voi kim giay hay kim gio khong
			if((minute_count/5 - 1) != (second_count/5) && (minute_count/5 - 1) != hour_count){
				//tat kim phut truoc do
				clearNumberOnClock(minute_count/5 - 1);
			}
			//cap nhat kim gio va reset kim phut
			hour_count++;
			minute_count = 0;
		}
		//kiem tra xem lieu kim phut truoc do co trung voi kim giay hay kim gio khong
		if((minute_count/5 - 1) != (second_count/5) && (minute_count/5 - 1) != hour_count){
			//tat kim phut truoc do
			clearNumberOnClock(minute_count/5 - 1);
		}
		//bat kim phut hien tai
		setNumberOnClock(minute_count/5);
//////////////////////////////////////////////////////////////////////////////////////////////////////
		//kim gio chay du 1 vong
		if(hour_count >= 12){
			//kiem tra xem lieu kim gio truoc do co trung voi kim giay hay kim phut khong
			if((hour_count - 1) != (second_count/5) && (hour_count - 1) != (minute_count/5)){
				//tat kim gio truoc do
				clearNumberOnClock(hour_count - 1);
			}
			//reset kim gio
			hour_count = 0;
		}
		//kiem tra xem lieu kim gio truoc do co trung voi kim giay hay kim phut khong
		if((hour_count - 1) != (second_count/5) && (hour_count - 1) != (minute_count/5)){
			//tat kim gio truoc do
			clearNumberOnClock(hour_count - 1);
		}
		//bat kim gio hien tai
		setNumberOnClock(hour_count);
}

