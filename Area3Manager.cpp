/*
 * Area3Manager.cpp
 *
 *  Created on: Aug 18, 2017
 *      Author: TSI0115
 */

#include "Area3Manager.h"

Area3_Manager::Area3_Manager(T_Camera P_Msg_Dump[]):Area_Manager(P_Msg_Dump) {}

void Area3_Manager::Receive_Msg(T_Camera Msg) {

	setMsgDump(Msg);


}

