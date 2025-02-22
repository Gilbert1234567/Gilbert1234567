#include <stdio.h>

void update(int u[], int t, int pos, int val) {
    if (pos < 0 || pos >= t) {
        printf("Invalid position\n");
        return;
    }
    u[pos] = val;
}

int main() {
    int u[8], v, t, values, pos;
    
    // To input array size
    printf("Enter the size of the array: ");
    scanf("%d", &t);

    // Input the array elements
    printf("Enter the elements: ");
    for (v = 0; v < t; v++) {
        scanf("%d", &u[v]);
    }

    // Position and new value to update
    printf("Position to update: ");
    scanf("%d", &pos);
    printf("Enter the new value: ");
    scanf("%d", &values);

    // Update the value at the given position
    update(u, t, pos, values);

    // Output updated array
    printf("Updated elements: ");
    for (v = 0; v < t; v++) {
        printf("%d ", u[v]);
    }
    printf("\n");

    return 0;
}