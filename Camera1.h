/*
 * Camera1.h
 *
 *  Created on: Aug 17, 2017
 *      Author: TSI0115
 */

#ifndef SRC_CAMERA1_H_
#define SRC_CAMERA1_H_

#include "Camera.h"

class Camera1: public Camera {

public:
	virtual T_Camera Capture_Image();
};

#endif /* SRC_CAMERA1_H_ */
