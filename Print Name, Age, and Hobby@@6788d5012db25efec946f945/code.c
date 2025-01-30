#include <stdio.h>

int main() {
    char name[25];
    int n;
    char hobby[25];
    scanf("%s %d %hobby",&name,&n,&hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",n);
    printf("Hobby: %s\n",hobby);

    return 0;
}