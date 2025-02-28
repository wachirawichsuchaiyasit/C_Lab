#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct _product
{
    char name[30];
    int amount;
    double totalCost;
} Product;

void printStock(Product stock[], int nStock)
{
    int i;
    printf("%-20s|%6s|%-10s\n", "    Product Name", "Amount", "     Total");
    for (i = 0; i < nStock; i++)
    {
        printf("%-20s|%6d|%10.2lf\n",
               stock[i].name, stock[i].amount, stock[i].totalCost);
    }
}

void reportStock(char filename[20])
{
    FILE *file = fopen(filename, "r");
    
    int n;
    fscanf(file, "%d\n", &n);
    
    Product products[n];  
    int nProducts = 0;
    
    char line[256];
    char date[15], time[15], product[30];
    int quantity;
    double price;
    
    while (fscanf(file, "%[^,],%[^,],%[^,],%d,%lf\n", date, time, product, &quantity, &price) == 5) {
        int found = 0;

        // already have product
        for (int i = 0; i < nProducts; i++) {
            if (strcmp(products[i].name, product) == 0) {
                products[i].amount += quantity;
                products[i].totalCost += price;
                found = 1;
                break;
            }
        }
        
        // new product
        if (!found && nProducts < n) {
            strcpy(products[nProducts].name, product);
            products[nProducts].amount = quantity;
            products[nProducts].totalCost +=  price;
            nProducts++;
        }
    }
    
    fclose(file);
    
    printStock(products, nProducts);
    
}

int main()
{
    char filename[20];
    scanf("%s", filename);
    reportStock(filename);
    return 0;
}