#include <stdio.h>
#include <iostream>
#include <new>

#define NUL '\0'
using namespace std;

int main()
{
 int *arr, n, array_start_position, result[10], front_number_position, back_number_position = 0;
 int front_number, back_number , zero_count = 0, element_count = 0;

 cout << "Enter the value of n \n";
 cin >> n; 
 
 arr = new (nothrow) int[n];
 
 							// Take the INPUT in the array 
 cout << "Enter the values of array \n";
 for (int i = 0; i < n ; i++){
    cin >> arr[i];
  }



/*	 							// Display the value in array  
 cout << "\nInput : arr[] { ";
 for (int i = 0; i < n ; i++){
   if (arr[i + 1] != NUL){
      cout << arr[i] << " , ";
    }else{    
        cout << arr[i];
    } 
  }
  cout << "} \n";
*/


// cout << "The second value : "<< arr[1] << endl; 
// while (element_count < n)
// { 								// Find the start position  in the array   
  for (int i = back_number_position; i < n ; i++){
     if (arr[i] != 0){
        array_start_position = i;
        break;
      }else{
        cout << "All zero found \n";
      }
   }     

     								// Find the zero position in the array
 for (int i = array_start_position; i < n; i++){
     if (arr[i] == 0){
         if (arr[i - 1] != 0){ 
           front_number_position = i - 1;
          }
 //        cout << "Front Number is  " << arr[front_number_position] << endl;
         zero_count++;
         
         if (arr [i + 1] != 0){
           back_number_position = i + 1;
         }
      }
    }
 


										// Get the front_number and the back_number
 cout << "Front Number is  " << arr[front_number_position] << endl;
 front_number = arr[front_number_position];  
 back_number  = arr[back_number_position];
 cout <<"Back number is " << arr[back_number_position] << endl;


 if (front_number < back_number){
    result  = (zero_count * front_number);
  }else{
     result = (zero_count * back_number);
  } 
 element_count += back_number_position; 
//}

  cout << "Output : " << result << endl;

return 0;
}
 
