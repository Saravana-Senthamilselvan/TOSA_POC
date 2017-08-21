/*
 * AreaManager.cpp
 *
 *  Created on: Aug 18, 2017
 *      Author: TSI0115
 */

#include "AreaManager.h"
#include "Common_Types.h"
#include <iostream>
using namespace std;

Area_Manager::Area_Manager(T_Camera P_Msg_Dump[]) {

	Area_Manager::Msg_Dump = P_Msg_Dump;
	Array_Size = 0;

}

T_Camera* Area_Manager::getMsgDump() {

	return Area_Manager::Msg_Dump;
}

void Area_Manager::setMsgDump(T_Camera Msg) {


	Area_Manager::Msg_Dump[Array_Size] = Msg;
	Array_Size++;

}


