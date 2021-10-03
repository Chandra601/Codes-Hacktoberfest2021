#include<stdio.h>
int linearSearch(int value[],int element,int n)
{
    for(int i=0;i<n;i++)
    {
        if(value[i]==element)
        {
            printf("Element is found %d",i);
            exit(0);
        }
    }
    printf("Element is not found");
}