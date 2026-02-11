#include <stdio.h> 
#include <string.h>

int romanCharToValue(char c) {
    switch(c) {
        case 'I' : return 1;
        case 'V' : return 5;
        case 'X' : return 10;
        case 'L' : return 50;
        case 'C' : return 100;
        case 'D' : return 500;
        case 'M' : return 1000;
        default : return 0;
    }
}

int romanToInt(char* s) {
    int total = 0;
    int length = strlen(s);

    for(int i = 0; i < length; i++) {
        int currentnum = romanCharToValue(s[i]);
        int nextnum = (i+1 < length) ? romanCharToValue(s[i+1]):0;

        if(currentnum < nextnum){
            total -= currentnum;
        }else{
            total += currentnum;
        }
    }   
    return total;
}

