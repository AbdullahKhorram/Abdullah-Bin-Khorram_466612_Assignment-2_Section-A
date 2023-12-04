#include<iostream>
using namespace std;
int main (){
	cout<<"ASSIGNMENT 2, TASK 1."<<endl; //to print a circle
	int rad;
	cout<<"Enter the radius of the circle:"<<endl; //input radius of the circle from the user
	cin>>rad;
	for(int i=rad;i>=-rad;i--){
		for(int j=-rad;j<=rad;j++){  //using nested loops, we create a system using the equation where the sum square of the variables i and j
			if(j*j + i*i <= rad*rad){                                                               //must be less or equal to the square of the radius
			cout<<"**"; }                                                                           //if the stars are to be printed
			else{
				cout<<"  ";
			}
	} cout<<endl;   //since this program essentially prints 1/4  parts of the circle side by side, we add and end line statement
} return 0; }
