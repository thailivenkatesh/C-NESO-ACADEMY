#include<stdio.h>

void minMax(int arr[], int len , int *min , int *max )
{
    *min=*max=arr[0];
    
        for(int i=1;i<len;i++)
            {
                if (arr[i]>*max)
                {
                        *max=arr[i];
                }   
                if (arr[i]<*min)
                {    
                        *min=arr[i];
                }    
            } 

}

int main()

    {   int size,min,max,i;
        
        printf("Enter the size : ");
        scanf("%d",&size);

        int a [size];

        printf("Enter your values : \n");
        for( i=0;i<size;i++)
            {
                scanf("%d",&a[i]);
            }
        
         int len=sizeof(a)/sizeof(a[0]);

        minMax(a,len,&min,&max);
       
            
        
       
        printf("MINIMUM VALUE = %d and MAXIMUM VALUE= %d ",min,max);
             return 0;
    }
  
    