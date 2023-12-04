#include<iostream>
using namespace std;
int main (){
	cout<<"ASSIGNMENT 2, TASK 3."<<endl; //program to calculate grade of a number of students using input from the user
	int n;
	char ans;
    do{ 	//start a do-while loop
	cout<<"Please enter the marks scored by the student:"<<endl; //input a score from the user
	cin>>n;
	if(n>100 || n<0){  //if marks are above 100 or below 0, program will deny the input
	cout<<"The Marks entered are invalid."<<endl;	} 
	else{ 
	if(n>=90)         { cout<<"The Student has achieved an A+ Grade."<<endl; } //using if statements, grades are assigned to each range value of marks
	if(n>=80 and n<90){	cout<<"The Student has achieved an A Grade."<<endl; }
   	if(n>=70 and n<80){	cout<<"The Student has achieved a B Grade."<<endl; }
   	if(n>=60 and n<70){	cout<<"The Student has achieved a C  Grade."<<endl; }
    if(n>=50 and n<60){	cout<<"The Student has achieved a D Grade."<<endl; }
    if(n<50)          { cout<<"The Student has achieved an F Grade."<<endl; }
      }
   
   cout<<"Would you like to calculate the grade of another student?(Y/N)"<<endl; //ask to input the marks of another student, and run the loop again
    cin>>ans; 																													//if answer is yes
	}while(ans=='Y'); 
	return 0;
}
