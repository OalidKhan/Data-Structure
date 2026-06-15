#include <stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0 ; i<size ; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0 ; i<size ; i++){
        int min_idx = i;
        for(int j=i+1 ; j<size ; j++){
            if(arr[min_idx] > arr[j]){
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    
    for(int i=0 ; i<size ; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}

