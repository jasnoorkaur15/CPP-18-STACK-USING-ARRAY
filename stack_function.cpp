//Jasnoor Kaur
//24070123049
//Batch: A2

#include <iostream>
using namespace std; 

int push(int array[],int *top){
    *top += 1;
    array[*top] = 77;
    return array[*top];
}
int main() {
   int array[5];
   int top = -1; 
   
   for(int i = 0; i < 5; i++){
       push(array, &top);
       cout <<array[i]<<"\t";
   }
   return 0;
} 

/*
OUTPUT:
77	77	77	77	77
*/
