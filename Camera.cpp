/*
 * Camera.cpp
 *
 *  Created on: Aug 17, 2017
 *      Author: TSI0115
 */

#include "Camera.h"
#include "Common_Types.h"
#include <iostream>
#include <ctime>
#include <string>
#include <sstream>

using namespace std;

Camera::Camera() {
	// TODO Auto-generated constructor stub
	cout <<"**************************************"<<endl;

}

Camera::~Camera() {
	// TODO Auto-generated destructor stub
	cout <<"**************************************"<<endl;
}

T_Camera Camera::Picture_Received(ifstream *Picture,T_Camera_ID Cam){

	T_Camera L_Camera;

	L_Camera.Camera_ID = Cam;
	L_Camera.Picture = Picture;
	L_Camera.Date = Get_Current_Date();
	L_Camera.Time = Get_Current_Time();
	L_Camera.Postion= Get_Current_Cam_Position();


	return L_Camera;

}

string Camera::Get_Current_Time() {

	struct tm  L_tstruct = Get_Current_TimeDate();

	return Int_To_String(L_tstruct.tm_hour) + ":"+ Int_To_String(L_tstruct.tm_min);

}

string Camera::Get_Current_Date() {

	struct tm  L_tstruct = Get_Current_TimeDate();
	return Int_To_String(L_tstruct.tm_mday) + ":" + Int_To_String(L_tstruct.tm_mon) + ":" + Int_To_String(L_tstruct.tm_year);
}

struct tm Camera::Get_Current_TimeDate() {

	time_t L_now = time(0);
	struct tm  L_tstruct;
	L_tstruct = *localtime(&L_now);

	 return L_tstruct;

}

T_Position Camera::Get_Current_Cam_Position() {

	T_Position L_Position;
	L_Position.X_Axis = 10;
	L_Position.Y_Axis = 40;
	return L_Position;
}


