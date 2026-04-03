// Arrays contains multiple elements of same data type.
// To reverse the array.
#include<stdio.h>
int main(){
  int arr[]={10,20,30,40,50,60,70,80};
  int size = sizeof(arr)/sizeof(arr[0]);
  int i,start=0;
  int end = size-1;
  while(start<end){
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
  for(i=0;i<size;i++){
   printf(" %d ",arr[i]);
  }
}