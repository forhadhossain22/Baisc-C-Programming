#include<stdio.h>
int main(){
    int a = 10, b = 20, c = 30;
    int status = -1;
        
        if (a > b && a > c) {
        status = 1;
        } else if (b > c) {
        status = 2;
        } else {
        status = 3;
        }
        
        switch (status) {
        case 1:
        printf("a is the greatest");
        break;
        case 2:
        printf("b is the greatest");
        break;
        case 3:
        printf("c is the greatest");
        break;
        default:
        printf("Cannot be determined");
    }
}
