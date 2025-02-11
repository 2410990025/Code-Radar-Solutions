// Your code here...
#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    switch(c){
        case 'R':printf("Stop");
        case 'G':printf("Go");
        case 'Y':printf("Slow Down");
        return 0;
    }
}