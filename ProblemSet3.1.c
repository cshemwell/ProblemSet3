#include <stdio.h>



int main() {

char C = 'C';
char D = 'D';
char E = 'E';
char F = 'F';
char G = 'G';
char A = 'A';
char B = 'B';


//not sure if we were supposed to print every note, or just show that the program correcrly converts into interger values
//so i just used the last letter 'B' (11) to demonstrate it ouputs 11 when B is input

    switch(B){
        case 'C':
            printf(0);
        case 'D':
            printf(2);
        case 'E':
            printf(4);
        case 'F':
            printf(5);
        case 'G':
            printf(7);
        case 'A':
            printf(9);
        case 'B':
            printf(11);
            break;
            default:
            printf("note entered was not a predetermined white key");
    }
    return 0;
}

