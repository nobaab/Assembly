#include <stdio.h>

void rev(int i, int n, int a[10])
{
    if(i<n)
    {
        rev(i+1, n, a);
        printf("%d ", a[i]);
    }
}

int main()
{
    int i, n, a[10];
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    rev(0, n, a);
    printf("\n");
    return 0;
}
