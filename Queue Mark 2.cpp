#include <iostream>
#include <queue>
#include <string>
#include <sstream>
#include <ctime>
//#include "CounterA.h"
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS

using namespace std;

void welcome(); // ask if public or staff
void staffMenu();
void publicMenu1();
void publicMenu2();
void publicMenu3();
void checkCombo();
void queueNo();
void reg();
void login();
void adminMenu();
void counterA(); // counterA menu
void counterB(); // counterB menu
void counterC(); // counterC menu
void ServingList();



int countPG = 0, countSG = 0, countPA = 0, countPB = 0, countPC = 0, countSA = 0, countSB = 0, countSC = 0, w = 0;
queue<string> qPG, qPA, qPB, qPC, qSG, qSA, qSB, qSC ; // these are the q containers
char sCheck, pCheck, school;
string Aserve, Bserve, Cserve, str, str1, str2;
time_t now;
//CounterA a;




int main() {
	
	welcome();

	system("pause");
}




//Welcome menu

void welcome() {
	char userInput;
	bool check = true;

	do {
		//current date/time based on current system
		now = time(0);

		//convert now to string form
		//char * dt = ctime(&now);
		//cout << "The local date and time is: " << dt << endl;

		tm * ltm = localtime(&now);
	//print various components of tm structure
		cout << "Current time: " << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << endl;
		cout << "Date: " << ltm->tm_mday << "/" << 1 + ltm->tm_mon << "/" <<  1900 + ltm->tm_year << endl;

	cout << "--------------------------------" << endl;
	cout << "   Queue Numbering System       " << endl;
	cout << "--------------------------------" << endl;
	
	cout << "-----------Welcome--------------" << endl;

	if (check == false) cout << "------------Incorrect Input. Please try again------------" << endl;
	cout << "For Staff Members, Press S. (To Counter Menu) " << endl;
	cout << "For Public Users, press P. (To Queuing Menu) " << endl;
	cout << endl << "Your Input: " << endl;
	cin >> userInput;

	if (userInput == 's' || userInput == 'S' || userInput == 'P' || userInput == 'p')
		check = true;
	else
		check = false;
	} while (check == false);

	if (userInput == 'S' || userInput == 's')
		staffMenu();
	else
		publicMenu1();

}

// To Counter Menu

void staffMenu() {
	char userInput;
	bool check = true;
	do {

		if (check == false) cout << endl << "-----Incorrect Input. Please try again-----" << endl << endl;
		cout << endl << "To Register, please press R. " << endl;
		cout << "To Login, please press L. " << endl;
		cout << "To go back, please press B." << endl;

		cout << endl << "Your Input: " << endl;
		cin >> userInput;

		if (userInput == 'R' || userInput == 'r' || userInput == 'L' || userInput == 'l' || userInput == 'B' || userInput == 'b')
			check = true;
		else
			check = false;
	} while (check == false);

	if (userInput == 'R' || userInput == 'r')
		reg();
	else if (userInput == 'L' || userInput == 'l')
		login();
	else
		welcome();

	
}

void reg() {
	cout << "fffe";
	// Create class to store
	//t12 101a
}

void login() {
	string Ldetails;
	cout << "Enter login Details" << endl;
	cin >> Ldetails; 
	cout << endl;
	
	if (Ldetails == "valid")
	{
		adminMenu();
	}
	
}

void adminMenu() {

	bool z;
	do
	{
		z = true;

		char choice;
		cout << "                 --------------------------- Welcome to admin menu ------------------------------" << endl;
		cout << "                                  -.-.-.-.-.- Select a Counter -.-.-.-.-.-.-.-.- " << endl;
		cout << " o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o" << endl;
		cout << "Key in [1] for Counter A" << endl;
		cout << "Key in [2] for Counter B" << endl;
		cout << "Key in [3] for Counter C" << endl;
		cout << "Key in [4] to go back" << endl;
		cin >> choice;

		if (choice == '1')
		{
			counterA();

		}
		else if (choice == '2')
		{
			counterB();
		}
		else if (choice == '3')
		{
			counterC();
		}
		else if (choice == '4')
		{
			login();
		}
		else
		{
			z = false;
			cout << "Invalid choice!" << endl << "Please key in again!" << endl;
			
		}
	} while (z == false);

	
}

void counterA()
{
	char choice;
	bool x = true;
	cout << "--------------------------- Welcome to Counter A menu ------------------------------" << endl;
	cout << " 0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o - Students - o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o" << endl;
	cout << "[- General Problems   -] " << "                           " << "[- School A Problems  -]" << endl;
	cout << "[- Next Waiting: -]      " << "                            " << "[- Next Waiting: -]" << endl;
	if (qPG.empty()== 0)
		cout << "    " << qPG.front();
	else
		cout << "    " << "Nil";
	cout << "                                   ";
	if (qPA.empty()==0)
		cout << " " << qPA.front() << "   " << endl;
	else 
		cout << " " << "Nil" << "   " << endl;

	cout << endl <<  " 0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o - Staffs - o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o" << endl;
	cout << "[- General Problems   -] " << "                           " << "[- School A Problems  -]" << endl;
	cout << "[- Next Waiting: -]      " << "                            " << "[- Next Waiting: -]" << endl;
	if (qSG.empty() == 0)
		cout << "    " << qSG.front();
	else
		cout << "    " << "Nil";
	cout << "                                   ";
	if (qSA.empty() == 0)
		cout << " " << qSA.front() << "   " << endl;
	else
		cout << " " << "Nil" << "   " << endl;

	cout << endl;
	cout << endl << " 0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o - Student - o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o" << endl << endl;
	cout << "[- No. Of Students Waiting -] " << "                        " << "[- No. Of Student Waiting -]" << endl;
	cout << "  " << qPG.size() << "                                    " << "   " << qPA.size() << "  " <<  endl;
	cout << endl << " 0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o - Staff - o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o" << endl << endl;
	cout << "[- No. Of Staff Waiting -] " << "                        " << "[- No. Of Staff Waiting -]" << endl;
	cout << "  " << qSG.size() << "                                    " << "   " << qSA.size() << "  " << endl;


	
	
	
	do
	{
		cout << "Press [1] to serve student (SchA) , [2] to serve Student (General Problem)." << endl;
		cout << "Press [3] to serve staff (SchA) , [4] to serve staff (General Problem)." << endl;
		cout << "Press [5] to go back" << endl;
		cout << "[";
		cin >> choice;
		cout << "]";

		if ((choice == '1') && (qPA.empty() != 1))
		{
			Aserve = qPA.front();
			x = true;
			

			ServingList();
			
		}
		else if ((choice == '2') && (qPG.empty() != 1))
		{
			Aserve = qPG.front();
			x = true;
			ServingList();
			
		}
		else if ((choice == '3') && (qSA.empty() !=1))
		{
			Aserve = qSA.front();
			x = true;
			ServingList();
		}
		else if ((choice == '4') && (qSG.empty() != 1))
		{
			Aserve = qSG.front();
			x = true;
			ServingList();
		}
		else if (choice == '5')
		{
			x = true;
			adminMenu();
		}
		else
		{
			cout << "Error: Either there are no queue in your selection or you key in wrongly." << endl;
			x = false;
		}
		
		
		
	} while (x != true);


	//timing
	
}

void counterB()
{

	char choice;
	bool x = true;
	cout << "--------------------------- Welcome to Counter B menu ------------------------------" << endl;
	cout << " 0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o - Students - o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o" << endl;
	cout << "[- General Problems   -] " << "                           " << "[- School A Problems  -]" << endl;
	cout << "[- Next Waiting: -]      " << "                            " << "[- Next Waiting: -]" << endl;
	if (qPG.empty() == 0)
		cout << "    " << qPG.front();
	else
		cout << "    " << "Nil";
	cout << "                                   ";
	if (qPB.empty() == 0)
		cout << " " << qPB.front() << "   " << endl;
	else
		cout << " " << "Nil" << "   " << endl;

	cout << endl << " 0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o - Staffs - o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o" << endl;
	cout << "[- General Problems   -] " << "                           " << "[- School A Problems  -]" << endl;
	cout << "[- Next Waiting: -]      " << "                            " << "[- Next Waiting: -]" << endl;
	if (qSG.empty() == 0)
		cout << "    " << qSG.front();
	else
		cout << "    " << "Nil";
	cout << "                                   ";
	if (qSB.empty() == 0)
		cout << " " << qSB.front() << "   " << endl;
	else
		cout << " " << "Nil" << "   " << endl;

	cout << endl;
	cout << endl << " 0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o - Student - o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o" << endl << endl;
	cout << "[- No. Of Students Waiting -] " << "                        " << "[- No. Of Student Waiting -]" << endl;
	cout << "  " << qPG.size() << "                                    " << "   " << qPB.size() << "  " << endl;
	cout << endl << " 0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o - Staff - o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o" << endl << endl;
	cout << "[- No. Of Staff Waiting -] " << "                        " << "[- No. Of Staff Waiting -]" << endl;
	cout << "  " << qSG.size() << "                                    " << "   " << qSB.size() << "  " << endl;

	// boo you found this!

	do
	{
		cout << "Press [1] to serve student (SchB) , [2] to serve Student (General Problem)." << endl;
		cout << "Press [3] to serve staff (SchB) , [4] to serve staff (General Problem)." << endl;
		cout << "Press [5] to go back" << endl;
		cout << "[";
		cin >> choice;
		cout << "]";

		if ((choice == '1') && (qPB.empty() != 1))
		{
			Bserve = qPB.front();
			ServingList();

		}
		else if ((choice == '2') && (qPG.empty() !=1))
		{
			Bserve = qPG.front();
			ServingList();

		}
		else if ((choice == '3') && (qSB.empty() !=1))
		{
			Bserve = qSB.front();
			ServingList();
		}
		else if ((choice == '4') && (qSG.empty() !=1))
		{
			Bserve = qSG.front();
			ServingList();
		}
		else if (choice == '5')
		{
			adminMenu();
		}
		else
		{
			cout << "Error: Either there are no queue in your selection or you key in wrongly." << endl;
			
			x = false;
		}



	} while (x == false);
}

void counterC()
{
	char choice;
	bool x = false;
	cout << "--------------------------- Welcome to Counter C menu ------------------------------" << endl;
	cout << " 0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o - Students - o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o" << endl;
	cout << "[- General Problems   -] " << "                           " << "[- School A Problems  -]" << endl;
	cout << "[- Next Waiting: -]      " << "                            " << "[- Next Waiting: -]" << endl;
	if (qPG.empty() == 0)
		cout << "    " << qPG.front();
	else
		cout << "    " << "Nil";
	cout << "                                   ";
	if (qPC.empty() == 0)
		cout << " " << qPC.front() << "   " << endl;
	else
		cout << " " << "Nil" << "   " << endl;

	cout << endl << " 0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o - Staffs - o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o" << endl;
	cout << "[- General Problems   -] " << "                           " << "[- School A Problems  -]" << endl;
	cout << "[- Next Waiting: -]      " << "                            " << "[- Next Waiting: -]" << endl;
	if (qSG.empty() == 0)
		cout << "    " << qSG.front();
	else
		cout << "    " << "Nil";
	cout << "                                   ";
	if (qSC.empty() == 0)
		cout << " " << qSC.front() << "   " << endl;
	else
		cout << " " << "Nil" << "   " << endl;

	cout << endl;
	cout << endl << " 0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o - Student - o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o" << endl << endl;
	cout << "[- No. Of Students Waiting -] " << "                        " << "[- No. Of Student Waiting -]" << endl;
	cout << "  " << qPG.size() << "                                    " << "   " << qPC.size() << "  " << endl;
	cout << endl << " 0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o - Staff - o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o" << endl << endl;
	cout << "[- No. Of Staff Waiting -] " << "                        " << "[- No. Of Staff Waiting -]" << endl;
	cout << "  " << qSG.size() << "                                    " << "   " << qSC.size() << "  " << endl;


	do
	{
		cout << "Press [1] to serve student (SchC) , [2] to serve Student (General Problem)." << endl;
		cout << "Press [3] to serve staff (SchC) , [4] to serve staff (General Problem)." << endl;
		cout << "Press [5] to go back" << endl;
		cout << "[";
		cin >> choice;
		cout << "]";

		if ((choice == '1') && (qPC.empty() != 1))
		{
			Cserve = qPC.front();
			ServingList();

		}
		else if ((choice == '2') && (qPG.empty() !=1))
		{
			Cserve = qPG.front();
			ServingList();

		}
		else if ((choice == '3') && (qSC.empty() !=1))
		{
			Cserve = qSC.front();
			ServingList();
		}
		else if ((choice == '4') && (qSG.empty() != 1))
		{
			Cserve = qSG.front();
			ServingList();
		}
		else if (choice == '5')
		{
			adminMenu();
		}
		else
		{
			cout << "Error: Either there are no queue in your selection or you key in wrongly." << endl;
			x = false;
		}



	} while (x == false);
}



// To queuing Menu    



void ServingList()
{
	char choice;
	cout << " [ -------------------------------- Serving List -----------------------------------  ]" << endl;
	cout << " 0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o" << endl;
	cout << "[- Counter A -] " << "       "  << "[- Counter B -]" <<  "   " << "[- Counter C -]" << endl;
	cout << "  " << Aserve << "           "  << Bserve << "                "   << Cserve <<  endl;
	
	do
	{
		cout << "To go back, Enter B." << endl;
		cin >> choice;

	} while (choice != 'b');

	welcome();


}

void publicMenu1() {

	bool x = false;
	do
	{
		cout << endl << "Enter P if you are a Student." << endl;
		cout << "Enter S if you are a staff member. " << endl;
		cout << "To go back, Enter B." << endl;
		cout << endl << "Your Input: " << endl;
		cin >> sCheck;

		if (sCheck == 'P' || sCheck == 'p' || sCheck == 's' || sCheck == 'S' || sCheck == 'B' || sCheck == 'b')
			x = true;
		else
			x = false;
	} while (x == false);

	if (sCheck == 'B' || sCheck == 'b')
		welcome();

	if (sCheck == 'p')
		sCheck = 'P';
	if (sCheck == 's')
		sCheck = 'S';

	publicMenu2();
}

void publicMenu2() {

	
	bool x = false;
	do
	{
		cout << "Enter G if you have a General Problem." << endl;
		cout << "Enter S if you have a Specific Problem. " << endl;
		cout << "To go back, Enter B." << endl;
		cout << endl << "Your Input: " << endl;
		cin >> pCheck;

		if (pCheck == 'G' || pCheck == 'g' || pCheck == 'S' || pCheck == 's' || pCheck == 'B' || pCheck == 'b')
			x = true;
		else
			x = false;
	} while (x != true);

	if (pCheck == 'B' || pCheck == 'b')
		publicMenu1();

	if (pCheck == 'g')
		pCheck = 'G';
	if (pCheck == 's')
		pCheck = 'S';


	if (pCheck == 'G') {
		checkCombo();
		//insert combo in variablea

		/*

		system ack
		system check
		system respond confirm


		*/

		queueNo();
	}
	else
		publicMenu3();
}

void publicMenu3() {
	
	bool x = false;
	do
	{
		cout << "Enter X if you are from school A." << endl;
		cout << "Enter Y if you are from school B." << endl;	
		cout << "Enter Z if you are from school C." << endl;

		cout << "To go back, Enter B." << endl;
		cout << endl << "Your Input: " << endl;
		cin >> school;

		if (school == 'X' || school == 'x' || school == 'Y' || school == 'y' || school == 'B' || school == 'b' || school == 'Z' || school == 'z')
			x = true;
		else
			x = false;
	} while (x == false);

	if (school == 'X' || school == 'x')
		pCheck = 'A';
	if (school == 'Y' || school == 'y')
		pCheck = 'B';
	if (school == 'Z' || school == 'z')
		pCheck = 'C';
	if (school == 'B' || school == 'b')
		publicMenu2();




	checkCombo();
	//insert combo in variablea

	/*

	system ack
	system check
	system respond confirm


	*/

	queueNo();
}

// ---------------------- Queue Interface's functions ---------------------------- //
void checkCombo()
{
	string str;

	if (sCheck == 'P' && pCheck == 'G')
	{
		countPG++; //counter
		w = countPG; //w is integer
		string place;

		//check combo
		if (w < 10)
			place = "00";
		else if (w < 100)
			place = "0";
		else
			place = "";

		string str;
		str.push_back(sCheck);
		string str1;
		str1.push_back(pCheck);
		string str2;
		str2 = to_string(w);

		str.append(str1);
		str.append(place);
		str.append(str2);

		qPG.push(str);
		
		cout << endl << "QueueNo:" << qPG.back() << endl << endl;
	}
	else if (sCheck == 'S' && pCheck == 'G')
	{
		countSG++;
		w = countSG;
		string place;

		//check placing
		if (w < 10)
			place = "00";
		else if (w < 100)
			place = "0";
		else
			place = "";

		string str;
		str.push_back(sCheck);
		string str1;
		str1.push_back(pCheck);
		string str2;
		str2 = to_string(w);

		str.append(str1);
		str.append(place);
		str.append(str2);

		qSG.push(str);
		cout << endl << "QueueNo:" << qSG.back() << endl << endl;
	}
	else if (sCheck == 'P' && pCheck == 'A')
	{
		countPA++;
		w = countPA;
		string place;

		//check placing
		if (w < 10)
			place = "00";
		else if (w < 100)
			place = "0";
		else
			place = "";

		string str;
		str.push_back(sCheck);
		string str1;
		str1.push_back(pCheck);
		string str2;
		str2 = to_string(w);

		str.append(str1);
		str.append(place);
		str.append(str2);

		qPA.push(str);
		cout << endl << "QueueNo:" << qPA.back() << endl << endl;
	}
	else if (sCheck == 'P' && pCheck == 'B')
	{
		countPB++;
		w = countPB;
		string place;

		//check placing
		if (w < 10)
			place = "00";
		else if (w < 100)
			place = "0";
		else
			place = "";

		string str;
		str.push_back(sCheck);
		string str1;
		str1.push_back(pCheck);
		string str2;
		str2 = to_string(w);

		str.append(str1);
		str.append(place);
		str.append(str2);

		qPB.push(str);
		cout << endl << "QueueNo:" << qPB.back() << endl << endl;
	}
	else if (sCheck == 'P' && pCheck == 'C')
	{
		countPC++;
		w = countPC;
		string place;

		//check placing
		if (w < 10)
			place = "00";
		else if (w < 100)
			place = "0";
		else
			place = "";

		string str;
		str.push_back(sCheck);
		string str1;
		str1.push_back(pCheck);
		string str2;
		str2 = to_string(w);

		str.append(str1);
		str.append(place);
		str.append(str2);

		qPC.push(str);
		cout << endl << "QueueNo:" << qPC.back() << endl << endl;
	}
	else if (sCheck == 'S' && pCheck == 'A')
	{
		countSA++;
		w = countSA;
		string place;

		//check placing
		if (w < 10)
			place = "00";
		else if (w < 100)
			place = "0";
		else
			place = "";

		string str;
		str.push_back(sCheck);
		string str1;
		str1.push_back(pCheck);
		string str2;
		str2 = to_string(w);

		str.append(str1);
		str.append(place);
		str.append(str2);

		qSA.push(str);
		cout << endl << "QueueNo:" << qSA.back() << endl << endl;
	}
	else if (sCheck == 'S' && pCheck == 'B')
	{
		countSB++;
		w = countSB;
		string place;

		//check placing
		if (w < 10)
			place = "00";
		else if (w < 100)
			place = "0";
		else
			place = "";

		string str;
		str.push_back(sCheck);
		string str1;
		str1.push_back(pCheck);
		string str2;
		str2 = to_string(w);

		str.append(str1);
		str.append(place);
		str.append(str2);

		qSB.push(str);
		cout << endl << "QueueNo:" << qSB.back() << endl << endl;
	}
	else if (sCheck == 'S' && pCheck == 'C')
	{
		countSC++;
		w = countSC;
		string place;

		//check placing
		if (w < 10)
			place = "00";
		else if (w < 100)
			place = "0";
		else
			place = "";

		string str;
		str.push_back(sCheck);
		string str1;
		str1.push_back(pCheck);
		string str2;
		str2 = to_string(w);

		str.append(str1);
		str.append(place);
		str.append(str2);

		qSC.push(str);

		cout << endl << "QueueNo:" << qSC.back() << endl << endl;
	}
	else
		cout << "Error" << endl;

}

void queueNo() {
	//string place;

	////stress check
	//if (w < 10)
	//	place = "00";
	//else if (w < 100)
	//	place = "0";
	//else
	//	place = "";

	//string str;
	//str.push_back(sCheck);
	//string str1;
	//str1.push_back(pCheck);
	//string str2;
	//str2 = to_string(w);
	//
	//str.append(str1);
	//str.append(place);
	//str.append(str2);

	
	//cout << endl << "QueueNo: " << sCheck << pCheck << place << w << endl << endl;

	//cout << "The qPG.front() is " << qPG.front() << endl;
	//cout << "The qPA.front() is " << qPA.front() << endl;
	cout << "The PG size: " << qPG.size() << endl;
	cout << "The PA size: " << qPA.size() << endl;
	cout << "The PB size: " << qPB.size() << endl;
	cout << "The PC size: " << qPC.size() << endl;
	cout << "The SG size: " << qSG.size() << endl;
	cout << "The SA size: " << qSA.size() << endl;
	cout << "The SB size: " << qSB.size() << endl;
	cout << "The SC size: " << qSC.size() << endl;

	welcome();
	//publicMenu1();
}

