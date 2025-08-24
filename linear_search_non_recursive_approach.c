#include<stdio.h>
int linearSearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        
        }
    }
    return -1;
}
int main(){
    int arr[]={2,5,8,12,16,23,45,38};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target;
    printf("Enter the number to be searched : ");
    scanf("%d",&target);
    int result=linearSearch(arr,size,target);
    if (result==-1){
        printf("Element not found in array \n");
    

    }else{
        printf("Element found at index %d \n",result);
    }return 0;

}