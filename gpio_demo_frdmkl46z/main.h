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
#ifndef MAIN_H
#define MAIN_H

#if defined (__cplusplus)
extern "C" {
#endif

/**
 * \brief  LED1 Toggle with a delay
 * \param  void
 * \return void
 */
int main(void);

/**
 * \brief  Silly delay
 * \param  void
 * \return void
 */
void delay(void);

/**
 * \brief  Button and LED initialization
 * \param  void
 * \return void
 */
void gpio_init(void);

#if defined (__cplusplus)
}
#endif

#endif
