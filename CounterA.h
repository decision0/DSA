#pragma once
#include <string>
#include <iostream>

using namespace std;

//class CounterA
//{
//
//public:
//	//Constructor (automatically called when whenever a new object is created,
//	//Allowing the class to initialize member variables or allocate storage.
//	//the constructor function is declared just like a regular member function
//	//but with a name that matches the class name and without any return type, not even void;
//	CounterA();
//	CounterA(string x, string y, string z) {
//		x = strtWork;
//		y = endWork;
//		z = date;
//	}
//
//	~CounterA(); //Deconstructor 
//	class log {
//
//	public:
//		log();
//		log(string a) {
//			a = timeStamp;
//		}
//
//		class who {
//			void setWho(string a, string b, string c, string d, string e) {
//				a = id;
//				b = course;
//				c = name;
//				d = probType;
//				e = duration;
//			}
//		private:
//			string id, course, name, probType, duration;
//		};
//
//	private:
//		string timeStamp;
//		who who;
//
//	};
//	log log;
//private:
//	string strtWork, endWork, date;
//};

class CounterA {
public:
	CounterA();
	CounterA(string a, string b, string c, string d, string e, string f, string g, string h, string i) {
		strtWork = a;
		endWork = b;
		date = c;
		timeStamp = d;
		id = e;
		course = f;
		Qno = g;
		probType = h;
		duration = i;
	}

	void setStartWork(char a) {
		strtWork = a;
	}

	void setEndWork(char b) {
		endWork = b;
	}
	void setDate(char c) {
		date = c;
	}
	
	void setTimeStamp(char d) {
		timeStamp = d;
	}

	void setID(char e) {
		id = e;
	}

	void setCourse(char f) {
		course = f;
	}

	void setQno(char g) {
		Qno = g;
	}

	void setProbType(char h) {
		probType = h;
	}

	void setDuration(char i) {
		duration = i;
	}

	
	string getStartWork()
	{
		return strtWork;
	}
	string getEndtWork()
	{
		return endWork;
	}
	string getDate()
	{
		return date;
	}
	string getTimeStamp()
	{
		return timeStamp;
	}
	string getID()
	{
		return id;
	}
	string getCourse()
	{
		return course;
	}
	string getQno()
	{
		return Qno;
	}
	string getprobType()
	{
		return probType;
	}
	string getDuration()
	{
		return duration;
	}
	
private:
	string strtWork, endWork, date, timeStamp, id, course, Qno, probType, duration;
};



