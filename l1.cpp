//WAP to find sum of all three number’s cubes by
//implementing single level inheritance: Class X->Class Y
//- Class X has following members: a, b & c attributes in
//integer data type
//- Class Y has following members: setData() and
//getData() methods

#include<iostream>
using namespace std;

class x{
	
    public:
		int a;
		int b;
		int c;
	    int d,e,f,g;
	    
	    
};

class y : public x{
	
	public:
	void setData();
	void getData();
};

void y::setData(){
	
	cout<<"Enter A:";
	cin>>a;
	
	d=a*a*a;
	cout<<d<<endl;
	
	cout<<"Enter B:";
	cin>>b;
	e=b*b*b;
	cout<<e<<endl;
	
	cout<<"Enter C:";
	cin>>c;
	f=c*c*c;
	cout<<f<<endl;
	
	g=d+e+f;
	
	
}

void y::getData(){
	
	cout<<"Sum Of All Cube: "<<g;

	
}

main(){
	
	
	y obj;
	
	obj.setData();
	obj.getData();
	
	
	
}
