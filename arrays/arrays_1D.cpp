#include<iostream>

int main(){
   /* 
   int arr[5]; //declaring array of integer elements
    //char arr1[5]; // declaring array of character elements 
    int arr1[]={1,2,3,4,5};
    float arr2[5];
    for( int i = 0; i< 5; i++){
        arr2[i] = (float)i * 2.1 ; 
    }
    for ( int j=0; j<5; j++){
        std::cout<<arr2[j] ; 
        std::cout<<"\n";
    }*/
   char arr[6] = {'G','e','e','k','s','\0'};
   for(int i=0;i<6;i++){
    if(arr[i] != '\0'){
    std::cout<<arr[i]<<'\n';
    }
   }
   return 0;
}