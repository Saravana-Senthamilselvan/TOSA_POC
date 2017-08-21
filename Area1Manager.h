/*
 * Area1Manager.h
 *
 *  Created on: Aug 18, 2017
 *      Author: TSI0115
 */

#ifndef SRC_AREA1MANAGER_H_
#define SRC_AREA1MANAGER_H_

#include "AreaManager.h"

class Area1_Manager: public Area_Manager {

public:
	Area1_Manager(T_Camera P_Msg_Dump[]);

	void Receive_Msg(T_Camera Msg);
	T_Camera  *getMsgDump();



};

#endif /* SRC_AREA1MANAGER_H_ */
