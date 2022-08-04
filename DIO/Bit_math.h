/*
 * Bit_math.h
 *
 *  Created on: 18 Jul 2022
 *      Author: Amr Ezzat
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(Var,BitNo)       Var |= (1 << (BitNo))
#define CLR_BIT(Var,BitNo)       Var &= ~(1 << (BitNo))
#define TOGGLE_BIT(Var,BitNo)    Var ^= (1 << (BitNo))
#define GET_BIT(Var,BitNo)    (((Var) >> (BitNo)) & 0x01)


#endif /* BIT_MATH_H_ */
