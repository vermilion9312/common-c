/*
 * output.c
 *
 *  Created on: Jan 17, 2026
 *      Author: LeeJooHo
 */


#include <output.h>

void Output_turnOn(const Output* this)
{
	HAL_GPIO_WritePin(this->port, this->pin,
	(this->type == OUTPUT_ACTIVE_HIGH) ? GPIO_PIN_SET : GPIO_PIN_RESET);
}

void Output_turnOff(const Output* this)
{
	HAL_GPIO_WritePin(this->port, this->pin,
	(this->type == OUTPUT_ACTIVE_HIGH) ? GPIO_PIN_RESET : GPIO_PIN_SET);
}

void Output_toggle(const Output* this)
{
	HAL_GPIO_TogglePin(this->port, this->pin);
}
