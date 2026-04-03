// To print maximum element of an Array.
#include<stdio.h>
int main(){
    int a[] = {10,25,36,72,18};
    int size = sizeof(a)/sizeof(a[0]);
    int max = a[0];
    int i;
    for(i=0;i<size;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    printf("%d is the largest element in this array",max);
}