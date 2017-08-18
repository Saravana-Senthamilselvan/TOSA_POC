/*
 * Common_Types.h
 *
 *  Created on: Aug 17, 2017
 *      Author: TSI0115
 */

#ifndef COMMON_TYPES_H_
#define COMMON_TYPES_H_


#include <fstream>
using namespace std;

typedef struct Position{
	int X_Axis;
	int Y_Axis;

}T_Position;

typedef enum Camera_ID{
	Cam1=1,
	Cam2,
	Cam3
}T_Camera_ID;

 typedef struct Camera_Struct{
	 ifstream *Picture;
	 string Time;
	 string Date;
	 T_Position Postion;
	 T_Camera_ID Camera_ID;

 }T_Camera;


 string Int_To_String(int A);

#endif /* COMMON_TYPES_H_ */



