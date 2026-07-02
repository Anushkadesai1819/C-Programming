//positive and negative alternate arrangement
#include<stdio.h>
int main()
{
    int arr[5]={-3,-2,1,4,-5};
    int neg_count=0,pos_count=0;
    printf("---Original Array---\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]>0 && arr[j]<0)
            {
                int tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    printf("\n---One side sorted array---\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(arr[i]<0)
        {
            neg_count++;
        }
        else
        {
            pos_count++;
        }
    }
    printf("neg_count=%d and pos_count=%d",neg_count,pos_count);
    int neg_arr[3];
    int pos_arr[2];
    int j=0;
    for(int i=0;i<neg_count;i++)
    {
               neg_arr[j]=arr[i];   
               j++;
    }
    int k=0;
    for(int i=5-pos_count;i<5;i++)
    {
        
             pos_arr[k]=arr[i];
            k++;
    }
    printf("\n---neg_array---\n");
    for(int i=0;i<neg_count;i++)
    {
        printf("%d\t",neg_arr[i]);
    }
    printf("\n---pos_array---\n");
    for(int i=0;i<pos_count;i++)
    {
        printf("%d\t",pos_arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]<0)
            {
                int n=0;
                for(int i=0;i<5;i+=2)
                {
                    {
                        arr[i]=neg_arr[n];
                    }
                    n++;
                }
            }
            else
            {
                int p=0;
                for(int i=1;i<5;i+=2)
                {
                    {
                        arr[i]=pos_arr[p];
                    }
                    p++;
                }
            }
        }
    }
    printf("\n---debugging array---\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
}
