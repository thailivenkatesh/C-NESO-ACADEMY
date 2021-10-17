#include<stdio.h>
void minMax(int arr[],int len ,int *min ,int *max )
{
    *min=*max=arr[0];
    
        for(int i=1;i<len;i++)
            {
                if (arr[i]>*max)
                
                        *max=arr[i];
                    
                if (arr[i]<*min)
                    
                        *min=arr[i];
                    
            } 

}

int main()

    {   int size,min,max,len;

        printf("Enter the size : ");
        scanf("%d",&size);

        int arr[size];

        printf("Enter your values : \n");
        for(int i=0;i<size;i++)
            {
                scanf("%d",&arr);
            }
        
         len=sizeof(arr)/sizeof(arr[0]);
     

        minMax(arr,len,&min,&max);
       
        printf("MINIMUM VALUE = %d and MAXIMUM VALUE= %d ",min,max);
             return 0;
    }
  
    