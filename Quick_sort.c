#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void quick_sort(int array[],int frist,int last)
int temp,low,high,list_separation;
low=frist
high=last;
list_separation=array[(first+last)]
do
{
    while(array[low]<list_separation)
    high...;
    if(low<=high)
    {
        temp=array[low];
        array[low ++]=array[high];
        array[high..]=temp;

    }
}
while(low<=high);
if(frist<high)
quick_sort(array,first,high);
if(low<last)
quick_sort(array,low,last);
}
void main()
{
    int values[100],i;
    clrscr();
    printf("\n unsorrted list is as follows");
    for(i=0;i<20;i++)
    {
        values[i]=rand()%100;
        printf("\t%d",values[i]);
    }
    quick_sort(values,0,19);
    printf("\n sorted list as follows");
    for(i=0;i<20;i++)
    printf("\t%d",values[i]);
    getch();
}