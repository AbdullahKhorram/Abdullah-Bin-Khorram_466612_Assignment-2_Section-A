#include<iostream>
using namespace std;
int main (){
	cout<<"ASSIGNMENT 2, TASK 2."<<endl; //to print a donut
	int cir,donut;
	cout<<"Please enter the radius of the overall donut:"<<endl;  //input the outer radius from the user
	cin>>cir;
	cout<<"Please enter the radius of the inner donut hole:"<<endl;   //input the inner radius from the user
	cin>>donut;
	 
	if(cir>donut){   //the outer radius cannot be smaller than the inner radius, so we set a condition
	     	for(int x=-cir;x<=cir;x++){
	    	for(int y=-cir;y<=cir;y++)
if( (x*x + y*y) <= (cir*cir) && (x*x + y*y) >= (donut*donut) ) //we utilise a similar method we used for printing a circle, but altering it for the hole
    { cout<<"* ";   }	
else{ cout<<"  ";	}  
      cout<<endl;   //since this program essentially prints 1/4 parts of the donut side by side, we add and end line statement
	         }
	    } 
	              
else{ cout<<"The Dimensions entered were invalid, please run the program and try again."<<endl;	}
 return 0; }
