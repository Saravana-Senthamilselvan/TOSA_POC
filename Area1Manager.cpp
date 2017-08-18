/*
 * Area1Manager.cpp
 *
 *  Created on: Aug 18, 2017
 *      Author: TSI0115
 */

#include "Area1Manager.h"

Area1_Manager::Area1_Manager(T_Camera P_Msg_Dump[]):Area_Manager(P_Msg_Dump){}

void Area1_Manager::Receive_Msg(T_Camera Msg) {

	setMsgDump(Msg);


}
