#include<stdio.h>
int main()
{
    int arr[10],soe,sod;
    soe=sod=0;
    for(int i=0;i<=9;i++){
         printf("Enter the element ");
         scanf("%d",&arr[i]);
         if(arr[i]%2==0){
            soe=soe+arr[i];
         }
         else
            sod=sod+arr[i];
    }
    printf("sum of even%d",soe);
    printf("sum of odd%d",sod);
   return 0;
}
