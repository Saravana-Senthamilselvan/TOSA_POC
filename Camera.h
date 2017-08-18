/*
 * Camera.h
 *
 *  Created on: Aug 17, 2017
 *      Author: TSI0115
 */

#ifndef SRC_CAMERA_H_
#define SRC_CAMERA_H_

#include <fstream>
#include "Common_Types.h"
using namespace std;

class Camera {

public:
	Camera();
	virtual ~Camera();
	virtual T_Camera Capture_Image()= 0;
protected:
	T_Camera Picture_Received(ifstream *Picture,T_Camera_ID Cam);

private:

	string Get_Current_Time();
	string Get_Current_Date();
	struct tm Get_Current_TimeDate();
	T_Position Get_Current_Cam_Position();
	

};
#endif /* SRC_CAMERA_H_ */
