#include<stdio.h>
int main()
{
    int N,i,arr[100];
    scanf("%d", &N);
    
    arr[0] = 0;
    arr[1] = 1;
    
    for(i = 2; i < N; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    printf("0");
    for(i = 1; i < N; i++){
        printf(" %d", arr[i]);
    }
    printf("\n");
    return 0;
}