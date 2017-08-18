/*
 * AreaManager.cpp
 *
 *  Created on: Aug 18, 2017
 *      Author: TSI0115
 */

#include "AreaManager.h"
#include "Common_Types.h"

Area_Manager::Area_Manager(T_Camera P_Msg_Dump[]) {

	Area_Manager::Msg_Dump = P_Msg_Dump;

}

T_Camera *Area_Manager::getMsgDump(){
	return Area_Manager::Msg_Dump;
}

void Area_Manager::setMsgDump(T_Camera Msg) {

	int L_SizeOfArray = sizeof(Area_Manager::Msg_Dump)/ sizeof(Area_Manager::Msg_Dump[0]);
	Area_Manager::Msg_Dump[L_SizeOfArray] = Msg;
}
