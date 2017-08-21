/*
 * BaseManager.h
 *
 *  Created on: Aug 18, 2017
 *      Author: TSI0115
 */

#ifndef SRC_BASEMANAGER_H_
#define SRC_BASEMANAGER_H_
#include "Common_Types.h"
#include "AreaManager.h"

class Base_Manager {

public:
	void Start_Monitoring();

private:
	void Print_Msg(T_Camera *Msg, int Msg_Length);
	Area_Manager *Get_Area_Manager_Access();
	T_Camera L_Camera;
	T_Camera Camera_Array[255];
	Area_Manager  *Obj_Area1_Manager;
	Area_Manager  *Obj_Area2_Manager;
};

#endif /* SRC_BASEMANAGER_H_ */
