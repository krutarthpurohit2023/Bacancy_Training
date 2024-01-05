#include <stdio.h>

void fun(int arr[]){

    printf("Before sorting- ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (arr[i]<arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }

    printf("\nafter sorting- ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    
}

int main(int argc, char const *argv[])
{
    int arr1[5]= {4,6,8,3,5};
    fun(arr1);
    
    return 0;
}
