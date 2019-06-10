/*
 * com_stack.h
 *
 *  Created on: 10-Jun-2019
 *      Author: Admin
 */

#ifndef COM_STACK_H_
#define COM_STACK_H_

#include "ComStack_Cfg.h"
#include "Std_Types.h"

#define uint8 unsigned char
#define uint16 unsigned short
#define PduIdType { if (PduIdmax<=0XFF) uint8;\
						else unit16;}

#define Pdu_LengthType uint8
#define PNCHandleType uint8
#define IcomConfigIdType uint8

enum TPParameterType{ TP_STMIN=0X00,TP_BS=0X01,Tp_BC=0X02};
enum TP_STMIN{ BUFREQ_OK=0x00,BUFREQ_E_NOT_OK=0x01 ,BUFREQ_E_BUSY=0x02,BUFREQ_E_OVFL=0x03};
enum TpDataStateType{TP_DATACONF=0x00,TP_DATARETRY=0x01,TP_CONFPENDING=0x02};
enum IcomSwitch_ErrorType {ICOM_SWITCH_E_OK=0x00,ICOM_SWITCH_E_FAILED=0x01};

struct RetryInfoType
{
	enum TpDataStateType;
	uint8 PduLengthType;

}RetryInfoType_var;

struct PduInfoType
{

	uint8 *SduDataPtr;
	uint8 *MetaDataPtr;

}PduInfoType_var;

#endif /* COM_STACK_H_ */
