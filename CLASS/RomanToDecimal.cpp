/* 
 * created on: Oct 18, 2017
 *      Author: RajeevSawant
 */

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class romanType{

public:
   void show();
   int  convertRomanToDecimal(string roman) const;
   string get();

private:
   string roman;

};


string romanType :: get(){
   return roman;
}

void romanType :: show (){
	//cout << "The decimal equivalent of the Roman Input is " << decimal <<endl;
}


int romanType :: convertRomanToDecimal(string roman)const{

	int previous = 1000, h = 0, decimal = 0;
	while (roman[h] != '\0'){
		h++;
	}

	int length = h;
    cout << length<< endl;

	for (int i = 0; i < length ; i++){


		switch (roman[i]){
		case 'M':
			if (previous < 1000){
				decimal = (decimal - previous) + 999 ;
			}else{
				decimal += 1000;
			}
			previous = 1000;
			break;

		case 'D':
			if (previous < 500){
				decimal = (decimal - previous) + 499 ;
			}else{
				decimal += 500;
			}
			previous = 500;
			break;

		case 'C':
			if (previous < 100){
				decimal = (decimal - previous) + 99 ;
			}else{
				decimal += 100;
			}
			previous = 100;
			break;

		case 'L':
			if (previous < 50){
				decimal = (decimal - previous) + 49 ;
			}else{
				decimal += 50;
			}
			previous = 50;
			break;

		case 'X':
			if (previous < 10){
				decimal = (decimal - previous) + 9 ;
			}else{
				decimal += 10;
			}
			previous = 10;
			break;

		case 'V':
			if (previous < 5){
				decimal = (decimal - previous) + 4 ;
			}else{
				decimal += 5;
			}
			previous = 5;
			break;

		case 'I':
			if (previous < 1){
				decimal -= previous;
			}else{
				decimal += 1;
			}
			previous = 1;
			break;

		}


	}
    return decimal;

}


int main(){
  romanType rt;

  cout <<"The Decimal value is " << rt.convertRomanToDecimal("MDCLXVI") << endl;

   return 0;
}



