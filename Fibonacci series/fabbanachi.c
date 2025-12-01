#include <stdio.h>

int main(){
    int n, first = 0, second = 1, next;
    printf("Enter the total terms");
    scanf("%d", &n);
    if (n < 1){
        printf("Please enter a positvie number: ");
        return 0;
    }

    printf("\n");
    for (int i = 0; i < n; i++) {
        if(i <= 1){
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next); 
    }

    return 0;
}

