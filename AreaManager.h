/*
 * AreaManager.h
 *
 *  Created on: Aug 18, 2017
 *      Author: TSI0115
 */

#ifndef SRC_AREAMANAGER_H_
#define SRC_AREAMANAGER_H_

#include "Common_Types.h"

class Area_Manager {
public:

	virtual void Receive_Msg(T_Camera Msg) = 0;
	Area_Manager(T_Camera P_Msg_Dump[]);

	virtual T_Camera* getMsgDump();

	int getArraySize() const {
				return Array_Size;
			}

protected:
	void setMsgDump(T_Camera Msg);

private:

	T_Camera *Msg_Dump;
	int Array_Size;
};

#endif /* SRC_AREAMANAGER_H_ */
