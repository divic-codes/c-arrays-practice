// Remove duplicate elements in an Array
#include<stdio.h>
int main(){
    int arr[] = {10,10,20,30,45,30};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i;
   
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int j;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
        }
    }
    }
        printf("After sorting the array:\n");
        for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
        for(i=0;i<size;i++){
        if(arr[i]==arr[i+1]){
            arr[i+1] = 0;    // Removes the duplicate by changing its value to 0.
    }
    }  
    printf("Following is the array after removing duplicate items\n");
        for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

