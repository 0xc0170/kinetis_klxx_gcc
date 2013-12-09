/*
 * Copyright (c) 12.2013, Martin Kojtal (0xc0170)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "main.h"
#include "MKL25Z4.h"

static void delay(void);

/**
 * \brief  LED1 Toggle with a delay
 * \param  void
 * \return void
 */
int main(void)
{
    gpio_init();

    PTB->PSOR = (1 << 18);

    while (1) {
        PTB->PTOR = (1 << 18);
        delay();
    }
}

/**
 * \brief  Button and LED initialization
 * \param  void
 * \return void
 */
void gpio_init(void)
{
    SIM->SCGC5 = SIM_SCGC5_PORTB_MASK;
    PORTB->PCR[18] = PORT_PCR_MUX(1);
    PTB->PDDR = (1 << 18);
}

/**
 * \brief  Silly delay
 * \param  void
 * \return void
 */
void delay(void)
{
    volatile unsigned int i,j;

    for(i=0; i<50000; i++) {
        for(j=0; j<100; j++)
            __asm__("nop");
    }
}

