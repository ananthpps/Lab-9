#include <stdio.h>

void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;


}

int main()
{
    int n,m;

    printf("Enter two numbers: ");
    scanf("%d %d", &m, &n);
    printf("Before swap:\nm=%d\nn=%d\n",m,n);
    swap(&m,&n);
    printf("After swap:\nm=%d\nn=%d\n",m,n);
    return 0;
}
