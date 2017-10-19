/* 
 *      Created on: Oct 18, 2017
 *      Author: RajeevSawant
 */


#include <stdio.h>
#include <iostream>

using namespace std;

class dispenserType {
public:

	int getNoOfItem() const;
	int getCost() const;
	void makeSale();
	dispenserType();
	dispenserType(int setNoOfitems, int setCost);

private:
	int NoOfitems;
	int Cost;

};


int dispenserType :: getNoOfItem() const{
	return NoOfitems;
}


int dispenserType :: getCost() const{
	return Cost;
}


void dispenserType:: makeSale() {
	NoOfitems--;
}


dispenserType :: dispenserType(){
	NoOfitems = 50;
	Cost = 50;
}


dispenserType :: dispenserType(int setNoOfitems, int setCost){
	NoOfitems = setNoOfitems;
	Cost = setCost;
}


int main(){
  dispenserType DT(200, 100);
  DT.makeSale();

  cout << "The Number of items are " << DT.getNoOfItem() << " with cost " << DT.getCost() <<endl;

	return 0;
}




