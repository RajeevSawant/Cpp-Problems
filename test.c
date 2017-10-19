
#include <stdio.h>

void swap(long* ,  long*);

int main(){

long *xp; 
long *yp;

*xp = 0x123;
*yp = 0x234;
 
swap(&xp , &yp);

return 0;
}


void swap(long *xp , long *yp){

long t0  = *xp;
long t1 = *yp;

*xp = t1;
*yp = t0;

}

