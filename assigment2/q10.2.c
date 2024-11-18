#include <stdio.h>

int main() {
    int num[5], flag, cnt = 0, i, j;


    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }


    for (i = 0; i < 5; i++) {
        flag = 0;

        if (num[i] < 2) {
            flag = 1;
        } else {
            for (j = 2; j <= num[i] / 2; j++) {
                if (num[i] % j == 0) { 
                    flag = 1;
                    break;
                }
            }
        }

        if (flag == 0) {  
            cnt++;
        }
    }

    printf("Number of prime numbers: %d\n", cnt);

    return 0;
}
