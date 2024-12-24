#include <stdio.h>

int main()
{
    int number[8];
    int sum = 0;
    int count[8];

    for(int h = 0; h < 8; h++) {
        scanf("%d", &number[h]);
        count[h] = h + 1;
    }
    for(int i = 0; i < 7; i++) {
        for(int j = i + 1; j < 8; j++) {
            if(number[i] < number[j]) {
                int temp = number[i];
                number[i] = number[j];
                number[j] = temp;
                
                int numTemp = count[i];
                count[i]= count[j];
                count[j] = numTemp;
            }
        }
    }
    
   
    
    for(int k = 0; k < 5; k++) {
        sum += number[k];
    }
    
    printf("%d\n", sum);
    
    for(int a = 0; a < 4; a++) {
        for(int b = a + 1; b < 5; b++) {
            if(count[a] > count[b]) {
                int temp = count[a];
                count[a] = count[b];
                count[b] = temp;
            }
        }
    }
    
    for(int d = 0; d < 5; d++) {
        printf("%d ", count[d]);
    }
    

    return 0;
}
