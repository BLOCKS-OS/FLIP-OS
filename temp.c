#include <stdio.h>

int main() {
    char arr[100] = "SLEEP 11";

    // extract num1
    int num1=0;
    int i, spaces=0;

    for(i=0; i<100 && spaces <= 2; i++) {
        if(spaces == 1 && (arr[i] >= '0' && arr[i] <= '9'))
            num1 = num1*10 + arr[i] - '0';
        
        // if(spaces == 2 && (arr[i] >= '0' && arr[i] <= '9'))
        //     num2 = num2*10 + arr[i] - '0';
        
        if(arr[i] == ' ') spaces++;

        if(spaces = 2) break;
    }
    
    printf("NUMBERS ARE: ");
    printf("%d, ", num1);
    printf("%d\n\n", num2);

    int res1, res2, res3, res4;
    if(arr[0] == 'A' && arr[1] == 'D' && arr[2] == 'D') {
        res1 = performAddition(num1, num2);
    }
    else if(arr[0] == 'S' && arr[1] == 'U' && arr[2] == 'B') {
        res2 = performSubtraction(num1, num2);
    }
    else if(arr[0] == 'M' && arr[1] == 'U' && arr[2] == 'L') {
        res3 = performMultiplication(num1, num2);
    }
    else if(arr[0] == 'D' && arr[1] == 'I' && arr[2] == 'V') {
        res4 = performDivision(num1, num2);
    }


    printf("Addition  = %d\n", res1);
}