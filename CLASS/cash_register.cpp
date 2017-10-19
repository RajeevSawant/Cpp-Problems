/*
 *created on: Oct 18, 2017
 *      Author: RajeevSawant
 */

#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;


class cashRegister{
public :

	int getcurrentBalance() const;
	void acceptAmount(int amountIn);
	void print();
	cashRegister();
	cashRegister(int cashIn);

private:
	int cashOnHand;

};



void cashRegister :: acceptAmount( int amountIn){
	cashOnHand += amountIn;
}


int cashRegister :: getcurrentBalance() const{
	return cashOnHand;
}


cashRegister::cashRegister(){

	cashOnHand = 500;
}


cashRegister::cashRegister(int cashIn){
	if (cashIn > 0){
		cashOnHand = cashIn;
	}else{
		cashOnHand = 0;
	}

}

void cashRegister::print(){
	cout << cashOnHand << endl;
}



int main(){


	// This is how u pass value to a parameterised constructor
	cashRegister cr;
	cr.acceptAmount(2000);
	cr.print();


	return 0;
}

