/*
  Copyright (c) 2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * \brief STM32L0 products have only one reference for ADC
 */
typedef enum _eAnalogReference
{
  AR_DEFAULT,
} eAnalogReference ;


/*
 * \brief Configures the reference voltage used for analog input (i.e. the value used as the top of the input range).
 * This function is kept only for compatibility with existing AVR based API.
 *
 * \param ulMmode Should be set to AR_DEFAULT.
 */
extern void analogReference( eAnalogReference ulMode ) ;

/*
 * \brief Writes an analog value (PWM wave) to a pin.
 *
 * \param ulPin
 * \param ulValue
 */
extern void analogWrite( uint32_t ulPin, uint32_t ulValue ) ;

/*
 * \brief Reads the value from the specified analog pin.
 *
 * \param ulPin
 *
 * \return Read value from selected pin, if no error.
 */
extern uint32_t analogRead( uint32_t ulPin ) ;


/*
 * \brief Set the resolution of analogRead return values. Default is 10 bits (range from 1 to 12).
 *
 * \param res
 */
extern void analogReadResolution(int resolution);

/*
 * \brief Set the sampling period of analogRead in microseconds. Default is 2 microsceonds (range from 0 to 50).
 *
 * \param res
 */
extern void analogReadPeriod(int period);

/*
 * \brief Set the resolution of analogWrite parameters. Default is 8 bits (range from 1 to 12).
 *
 * \param res
 */
extern void analogWriteResolution(int resolution);

/*
 * \brief Set the frequency of analogWrite PWM. A 0 switches back to the default.
 *
 * \param res
 */
extern void analogWriteFrequency( unsigned long frequency );
  
#ifdef __cplusplus
}
#endif
