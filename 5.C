#include <stdio.h>

struct Product
{
    int product_id;
    char name[50];
    float price;
};

int main()
{
    struct Product p[100];
    struct Product *ptr;
    int n, i;

    ptr = p;

    printf("Enter the number of products: ");
    scanf("%d", &n);


    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of product %d:\n", i + 1);

        printf("Enter Product ID: ");
        scanf("%d", &(ptr + i)->product_id);

        printf("Enter Product Name: ");
        scanf("%49s", (ptr + i)->name);

        printf("Enter Product Price: ");
        scanf("%f", &(ptr + i)->price);
    }


    printf("\n----- Product Details -----\n");

    for (i = 0; i < n; i++)
    {
        printf("\nProduct %d\n", i + 1);
        printf("Product ID: %d\n", (ptr + i)->product_id);
        printf("Product Name: %s\n", (ptr + i)->name);
        printf("Product Price: %.2f\n", (ptr + i)->price);
    }

    return 0;
}
