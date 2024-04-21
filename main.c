#include "column/column.h"
#define REALOC_SIZE 256

int main() {
    COLUMN *mycol = create_column("My column");
    int val = 5;
    if (insert_value(mycol, val))
        printf("Value added successfully to my column\n");
    else
        printf("Error adding value to my column\n");

    insert_value(mycol, 52);
    insert_value(mycol, 15);
    insert_value(mycol, 44);
    insert_value(mycol, 15);
    print_col(mycol);


    int value= 10;
    int occurrences = count_occurrences(mycol, value);
    printf("Number of occurrences of %d: %d\n", value, occurrences);

    int Value_to_get = return_value(mycol, 0);
    printf("The first value is : %d\n", Value_to_get);


return 0;
}