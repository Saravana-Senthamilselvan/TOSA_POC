/*
 * Area2Manager.h
 *
 *  Created on: Aug 18, 2017
 *      Author: TSI0115
 */

#ifndef SRC_AREA2MANAGER_H_
#define SRC_AREA2MANAGER_H_

#include "AreaManager.h"

class Area2_Manager: public Area_Manager {
public:
	Area2_Manager(T_Camera P_Msg_Dump[]);

	void Receive_Msg(T_Camera Msg);
};

#endif /* SRC_AREA2MANAGER_H_ */
