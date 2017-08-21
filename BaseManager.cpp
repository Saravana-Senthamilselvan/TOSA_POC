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
#include "Area1Manager.h"
#include "Area2Manager.h"
#include "Area3Manager.h"

using namespace std;


void Base_Manager::Start_Monitoring() {

	ifstream L_Picture;
	int opt=4;
	Camera * Obj_Cam;

	Obj_Area1_Manager = new Area1_Manager(Camera_Array);
	Obj_Area2_Manager = new Area2_Manager(Camera_Array);

	while (opt > 0)
	{
		cout<<"1.Camera"<<endl;
		cout<<"2.Camera"<<endl;
		cout<<"3.Camera"<<endl;
		cout<<"0.Quit"<<endl;
		cout<<"Select the Camera(1/2/3) to Take picture :"<<endl;
		cin>>opt;

		if (opt ==1)
		{
			Obj_Cam = new Camera1();
			L_Camera = Obj_Cam->Capture_Image();
			Obj_Area1_Manager->Receive_Msg(L_Camera);
			delete Obj_Cam;
		}
		else if (opt ==2)
		{
			Obj_Cam = new Camera1();
			L_Camera = Obj_Cam->Capture_Image();
			Obj_Area2_Manager->Receive_Msg(L_Camera);
			delete Obj_Cam;
		}

	}
	cout<<"+++++++++++Area1 Camera data+++++++++++++"<< endl;
	Print_Msg(Obj_Area1_Manager->getMsgDump(),Obj_Area1_Manager->getArraySize() );
	cout<<"+++++++++++END++++++++++++++++++++++"<< endl;


	cout<<"+++++++++++Area2 Camera data+++++++++++++"<< endl;
	Print_Msg(Obj_Area2_Manager->getMsgDump(),Obj_Area2_Manager->getArraySize() );
	cout<<"+++++++++++END++++++++++++++++++++++"<< endl;

}

void Base_Manager::Print_Msg(T_Camera *Msg, int Msg_Length ) {

	int i;

	for (i=0;i< Msg_Length; i++)
	{
		cout <<"**********************************"<< endl;
		cout << "Camera ID : " << Msg[i].Camera_ID << endl;
		cout << "Time  : " << Msg[i].Time << endl;
		cout << "Date  : " << Msg[i].Date << endl;
		cout <<"**********************************"<< endl;

	}


}
