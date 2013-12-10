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
#include "MKL46Z4.h"

int main(void)
{
    gpio_init();

    PTE->PSOR = (1U << 29U);

    while (1) {
        PTE->PTOR = (1U << 29U);
        delay();
    }
}

void gpio_init(void)
{
    SIM->SCGC5 = SIM_SCGC5_PORTE_MASK;
    PORTE->PCR[29] = PORT_PCR_MUX(1U);
    PTE->PDDR = (1U << 29U);
}

void delay(void)
{
    volatile unsigned int i,j;

    for (i = 0U; i < 50000U; i++) {
        for (j = 0U; j < 100U; j++) {
            __asm__("nop");
        }
    }
}

