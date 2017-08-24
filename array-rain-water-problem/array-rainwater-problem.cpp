#include <iostream>
#include <stdio.h>
#include <new>

using namespace std;

int main()
{
 int *arr, n, j = 0, count_zeros = 0, non_zero_position, count_of_no = 0,front_max , back_max, result;
 int first_no[10], start_position[10], zero_position;

 cout << " Enter the number of elements of array \n";
 cin >> n;
 arr = new (nothrow) int[n]; 
 
 
 cout << " Enter the elements \n";
 
 for (int i = 0; i < n; i++ ){
   cin >> arr[i];
   }
  
 cout << "\nInput: arr[] { ";
 
                                    					 // Print the Input array 
 for (int i = 0; i < n; i++ ){
   if (arr[i + 1] != '\0'){
       cout << arr[i] << " , ";
     }else {
       cout << arr[i];
    }   
  } 
   cout << "}";
 
								 // To Check when the first number comes 
  for (int i = 0; i < n ; i++){
    if (arr[i] != 0){
       non_zero_position = i;
       break;
      }
    }  



/* 								// To find the first_number which has zero as the next element 
 for (int i = non_zero_position; i < n; i++){ 
     if (arr[i + 1] == 0 && arr[i] != 0){
       first_no[j] = arr[i];
       start_position[j] =  i;
       j++;
      }
     if (arr[i] == 0){
       count_zeros++;       
      }    
 } 
*/
                                                                              // Check for the zero and save there position in an array
 for (int i = non_zero_position; i < n; i++){
  if (arr[i] == 0){
     zero_position = i;  
   } 
 }
 
 j = zero_position;
 while (arr[j] == 0 ){                                                     // count the number of zeros between the numbers
   count_of_no ++;
   j++;
  }
 
// while (zero_postion) 

/*
 for (int i = zero_position - 1; i >= non_zero_position; i--){                // To get the highest number in the array before the  zero postion arrives     
   if (arr[zero_position - 1] != 0){
     back_max = arr[i];
     
     }else{
       continue; 
     }
                                                                             // Check for the highest number before the zero , we arent checking for zero in the back 
   if (arr[i] > back_max){
      back_max = arr[i]
     } 
  }    
              
  
  for (int i = zero_position + 1; i != '\0'; i++){
     if (arr[zero_position + 1] != 0){
       front_max  = arr[i];
       
      }else{
        continue;
      }
    
     if (arr[i] > front_max){
       front_max = arr[i];
       }  
    }    
*/
   
   front_max  = zero_position + 1;
   back_max   = zero_position - 1;


   if (front_max > back_max ){
      result = back_max * count_of_no;       
    }else{
      result = front_max * count_of_no;
    }


   cout << "Result : "<< result<<endl; 
    
   
 
return 0;
}
