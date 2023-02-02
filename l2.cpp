//WAP to convert given degree celsius temperature into
//fahrenheit and convert that fahrenheit temperature
//into kelvin by implementing multilevel inheritance:
//Class P -> Class Q -> Class R
//- Class P has following members: temperature
//attribute in float
//- Class Q has following members: toFehrenheit()
//method
//- Class R has following members: toKelvin() method

#include<iostream>
using namespace std;

class temperature{
	
	public:
		
		float temperature;	
		float cel;
		float fah;
		float kel;
};

class toFehrenheit: public temperature{
	
	public:
		
	toFehrenheit(){
		
		
		
		cout<<"Enter Celsius:";
		cin>>cel;
		
		fah = cel*1.8 +32;
		cout<<"Fehrenheit is:"<<fah<<endl;

}
};

class toKelvin : public toFehrenheit{
	
	public:
	void setter();
	void getter();
	
};

void toKelvin::setter(){
	
    kel = fah - 32 * 5 / 9 + 273.15;
	 
	 cout<<"Enter Fehrenheit: ";
	 cin>>fah;
}

void toKelvin::getter(){
	
	cout<<"Kelvin is "<<kel;
}
main(){
	
	toKelvin obj;
	obj.setter();
	obj.getter();
	
	
}


