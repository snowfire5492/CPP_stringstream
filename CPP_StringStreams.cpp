#include <iostream>
#include <sstream>


using namespace std;



int main(){

	string name = "eric";
	int age = 29;

	//string info = name + " will get the job at age " + age;	
// will not work in C++

	stringstream ss;

	ss << name << " will get the job at age "<< age;

	ss << ".";

	cout << ss.str() << endl;


	return 0;
}

