 /*
 * screening.c
 *
 *  Created on: Oct 2, 2017
 *      Author: RajeevSawant
 */

#include <stdio.h>

int Fib(int);
void print_out(int);

int main(){

	int n = 7, out = 0;

	if (n > 0){
		out = Fib(n);
	}
     print_out(out);
//	printf("The output is %d", out);

}

int Fib (int n){
	int new = 0, current = 1, old = 0;

	while (n > 1){
		new = current + old;
		old = current;
		current = new;
		n--;
	}
	return new;
}


void print_out(int out){
	int  prime_fact = 0, flag = 0;

	prime_fact = out;
	while (prime_fact > 2){
		--prime_fact;
		if (out % prime_fact == 0){
			flag = 1;
		}
	}
	if (flag == 0){
		printf("BuzzFizz \n");
	}

	if (out % 15 == 0){
		printf("FizzBuzz \n");
	}
	if (out % 3 == 0){
		printf("Buzz \n");
	}
	if (out % 5 == 0){
		printf("Fizz \n");
	}else{
		printf("%d",out);
	}


}


