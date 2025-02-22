#include <stdio.h>

void insert(int r[], int *w, int values, int psn) {
    // Check if the position is valid
    if (psn < 0 || psn > *w) {
        printf("Invalid position.\n");
        return;
    }

    // Move elements to the right to make space for the new value
    for (int z = *w; z > psn; z--) {
        r[z] = r[z - 1];
    }

    // Insert the new value at the given position
    r[psn] = values;

    // Increase the array size
    (*w)++;
}

int main() {
    int r[6], z, w, values, psn;

    // Input the array size
    printf("Enter the size of the array (1 to 6): ");
    scanf("%d", &w);

    if (w < 1 || w > 6) {
        printf("Invalid size. Please enter a number between 1 and 6.\n");
        return 1;
    }

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (z = 0; z < w; z++) {
        scanf("%d", &r[z]);
    }

    // Input the value and position to insert
    printf("Enter the value and position to insert:\n");
    scanf("%d %d", &values, &psn);

    // Call the insert function
    insert(r, &w, values, psn);

    // Output the updated array
    printf("Updated array: ");
    for (z = 0; z < w; z++) {
        printf("%d ", r[z]);
    }
    printf("\n");

    return 0;
}