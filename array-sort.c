// Bubble Sorting in Array (low to high).
#include<stdio.h>
int main(){
  int arr[] = {20,35,15,10,72,50};
  int size = sizeof(arr)/sizeof(arr[0]);
  int i,j;
  for(i = 0; i < size ; i++){
    for(j = 0; j< size - 1 ; j++){
      if(arr[j] > arr[j+1]){
      int temp = arr[j];
      arr[j] = arr[j+1];
      arr[j+1] = temp ;
    }
  }
}
  for(i = 0; i<size ; i++){
    printf(" %d ", arr[i]);
  }
}