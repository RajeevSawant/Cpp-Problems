#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;

class personType{
public:
	void print() const;
	void setname(string firstname, string lastname);
	string getFirstname() const;
	string getLastName() const;
	personType();
	personType(string first, string last);
//	~personType();

private:
	string firstName;
	string lastName;

};


void personType :: print() const {
	cout<< lastName <<" " << firstName << endl;
}

void personType :: setname(string firstname, string lastname){
	firstName = firstname;
	lastName = lastname;
}

string personType :: getFirstname() const{
	return firstName;
}

string personType :: getLastName() const{
	return lastName;
}

personType :: personType (){
   firstName = " ";
   lastName = " "; 
}

personType :: personType (string first, string last){
	firstName = first;
	lastName = last;
}



int main(){

	personType p;

	p.setname("Rajeev","Sawant");
	p.print();

	return 0;
}

