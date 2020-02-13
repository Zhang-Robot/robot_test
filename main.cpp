#include<iostream>
#include<stdio.h>
using namespace std;


void func1(){
	cout << "in func1" << endl;
}

void func2(){
	cout << "in func2" << endl;
}

int main(){
	cout<< "robot_test" << endl;
	func1();
	func2();
	cout << "modify in company" << endl;
	cout << "modify in family" << endl;
}
