/*
 * platform_type.h
 *
 *  Created on: 10-Jun-2019
 *      Author: Admin
 */

#ifndef PLATFORM_TYPE_H_
#define PLATFORM_TYPE_H_

#define FALSE  			0
#define TRUE  		    1
#define uint8 			unsigned char
#define uint16			unsigned short
#define sint8 			signed char
#define sint16 			signed short
#define uint8_least     unsigned char
#define uint16_least 	unsigned short
#define sint8_least 	signed char
#define sint16_least 	signed short
#define float32   		float

enum CPU_TYPE {CPU_TYPE=0x08,CPU_TYPE_16=0x16,CPU_TYPE_32=0x32,CPU_TYPE_64=0x64};
enum CPU_BIT_ORDER {MSB_FIRST=0x00,LSB_FIRST=0x01};
enum CPU_BYTE_ORDER { HIGH_BYTE_FIRST=0x00,LOW_BYTE_FIRST=0x01};

#endif /* PLATFORM_TYPE_H_ */
