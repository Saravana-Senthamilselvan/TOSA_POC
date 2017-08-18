/*
 * Area3Manager.h
 *
 *  Created on: Aug 18, 2017
 *      Author: TSI0115
 */

#ifndef SRC_AREA3MANAGER_H_
#define SRC_AREA3MANAGER_H_

#include "AreaManager.h"

class Area3_Manager: public Area_Manager {
public:
	Area3_Manager(T_Camera P_Msg_Dump[]);

	void Receive_Msg(T_Camera Msg);
};

#endif /* SRC_AREA3MANAGER_H_ */
