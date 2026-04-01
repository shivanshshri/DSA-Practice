#include<stdio.h>
int main(){
    int n;
    printf("\nEnter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int ele;
    printf("\nEnter the element to search : ");
    scanf("%d", &ele);

    int left = 0;
    int right = n-1;
    int mid = (left+right)/2;

    while(left!=right){
        if(arr[mid]==ele){
            printf("\n%d is present at %d index\n", ele, mid);
            break;
        }
        if(ele<arr[mid]){
            right=mid;
            mid=(left+right)/2;
        }
        if(ele>arr[mid]){
            left=mid;
            mid=(left+right)/2;
        }
    }

}