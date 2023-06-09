#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i <= 99; i++) {
        for (j = i; j <= 99; j++) {
            int first_num = i / 10;
            int second_num = i % 10;
            int third_num = j / 10;
            int fourth_num = j % 10;

            putchar('0' + first_num);
            putchar('0' + second_num);
            putchar(' ');
            putchar('0' + third_num);
            putchar('0' + fourth_num);

            if (i != 99 || j != 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return 0;
}
