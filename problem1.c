#include <stdio.h>

void rev(int i, int n, int arr[10])
{
    if(i<n)
    {
        rev(i+1, n, arr);
        printf("%d ", arr[i]);
    }
}

int main()
{
    int i, n, arr[10];
    scanf("%d", &n);
    for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
    }
    rev(0, n, arr);
    printf("\n");
    
    return 0;
}
