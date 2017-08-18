/*
 * Common_Types.cpp
 *
 *  Created on: Aug 17, 2017
 *      Author: TSI0115
 */
#include <string>
#include <sstream>

using namespace std;

 string Int_To_String(int A) {

	stringstream ss;
	ss << A;
	return ss.str();

}


