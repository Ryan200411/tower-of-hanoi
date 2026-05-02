#include <stdio.h>
#include <stdlib.h>

/**
 * towerOfHanoi - A recursive function to solve the Tower of Hanoi puzzle.
 * @n: Number of disks.
 * @from_rod: The source rod.
 * @to_rod: The destination rod.
 * @aux_rod: The auxiliary rod.
 */
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        printf("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    printf("Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main(int argc, char *argv[]) {
    int n;

    if (argc < 2) {
        printf("Usage: %s <number_of_disks>\n", argv[0]);
        printf("Example: %s 3\n", argv[0]);
        return 1;
    }

    n = atoi(argv[1]);
    if (n <= 0) {
        printf("Please enter a positive integer for the number of disks.\n");
        return 1;
    }

    printf("Solving Tower of Hanoi for %d disks:\n", n);
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
    return 0;
}
