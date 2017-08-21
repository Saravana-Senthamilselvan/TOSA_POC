/*
 * Area2Manager.cpp
 *
 *  Created on: Aug 18, 2017
 *      Author: TSI0115
 */

#include "Area2Manager.h"

Area2_Manager::Area2_Manager(T_Camera P_Msg_Dump[]):Area_Manager(P_Msg_Dump) {}

void Area2_Manager::Receive_Msg(T_Camera Msg) {

	setMsgDump(Msg);


}

T_Camera* Area2_Manager::getMsgDump() {

	return Area_Manager::getMsgDump();
}


