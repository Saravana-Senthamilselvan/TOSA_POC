/*
 * BaseManager.cpp
 *
 *  Created on: Aug 18, 2017
 *      Author: TSI0115
 */

#include "BaseManager.h"
#include <iostream>
#include "Camera1.h"
#include "Common_Types.h"

using namespace std;
void Base_Manager::Start_Monitoring() {

	//ifstream L_Picture;
	int opt=4;
	//Camera * Obj_Cam;

	while (opt > 0)
	{
		cout<<"1.Camera"<<endl;
		cout<<"2.Camera"<<endl;
		cout<<"3.Camera"<<endl;
		cout<<"0.Quit"<<endl;
		cout<<"Select the Camera(1/2/3) to Take picture :"<<endl;
		cin>>opt;


/*

	Obj_Cam = new Camera1();
	T_Camera L_Camera = Obj_Cam->Capture_Image();

MODIFIED!!!
	cout << "Camera ID : " << L_Camera.Camera_ID << endl;
	cout << "Time  : " << L_Camera.Time << endl;
	cout << "Date  : " << L_Camera.Date << endl;

	delete Obj_Cam;
	*/

	}
}
