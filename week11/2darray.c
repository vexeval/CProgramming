#include <stdio.h>

#define ROW 4
#define COLUMN 5

void print(int rows, int cols, const int arr[rows][cols]);
void setRow(int rows, int cols, int arr[rows][cols], int rowNumber, int value);
void setColumn(int rows, int cols, int arr[rows][cols], int colNumber, int value);
int total(int rows, int cols, const int arr[rows][cols]);
int totalPerimeter(int rows, int cols, const int arr[rows][cols]);

int main(int argc, char *argv[]) {
    // Create and initialize a 2D array of integers
    int arr2D[ROW][COLUMN] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Access a specific element of a 2D array
    printf("Combination of [0,1] and [1,2]: %d\n",arr2D[0][1] + arr2D[1][2]);
    puts("");
    
    // Change the value of an element
    arr2D[1][1] = 10;

    // Assign the second row with 5's
    setRow(ROW, COLUMN, arr2D, 1, 9);

    // Assign the second column with 88's
    setColumn(ROW, COLUMN, arr2D, 2, 88);

    // Print a 2D array
    print(ROW, COLUMN, arr2D);

    // Get the sum of all elements in the 2D array
    printf("Total sum of 2D array: %d\n", total(ROW, COLUMN, arr2D));

    printf("Total sum of perimeter 2D array values: %d\n", totalPerimeter(ROW, COLUMN, arr2D));

    return 0;
}

// Print a 2D array (func)
void print(int rows, int cols, const int arr[rows][cols]) {
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            printf("%4d ", arr[r][c]);
        }
        puts("");
    }
    puts("");
}

// Set an entire row of an array to the same value
void setRow(int rows, int cols, int arr[rows][cols], int rowNumber, int value) {
    for (int i = 0; i < cols; i++) {
        arr[rowNumber][i] = value;
    }
}

// Set an entire column of an array to the same value
void setColumn(int rows, int cols, int arr[rows][cols], int colNumber, int value) {
    for (int i = 0; i < rows; i++) {
        arr[i][colNumber] = value;
    }
}

// Return the sum of all elements in a 2D array
int total(int rows, int cols, const int arr[rows][cols]) {
    int sum = 0;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            sum += arr[r][c];
        }
    }
    return sum;
}

// Fancy sum. Return the sum of the perimeter elements
int totalPerimeter(int rows, int cols, const int arr[rows][cols]) {
    int sum = 0;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            if (r == 0 || r == cols - 1 || c == 0) {
                sum += arr[r][c];
            }

        }
    }
    return sum;
}