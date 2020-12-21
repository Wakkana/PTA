#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

const char maxInputBirth[11] = "2014/09/06";
const char minInputBirth[11] = "1814/09/06";

int main(){
    int n, count = 0;
    char name[6], birth[11];
    char maxName[6], minName[6];
    char maxBirth[11] = "2014/09/06", minBirth[11] = "1814/09/06";
    scanf("%d", &n);
    while(n--){
        scanf("%s %s", name, birth);
        if(strcmp(maxInputBirth, birth) >= 0 && strcmp(minInputBirth, birth) <= 0){
            count++;
            if(strcmp(maxBirth, birth) > 0){
                strcpy(maxName, name);
                strcpy(maxBirth, birth);
            }
            if(strcmp(minBirth, birth) < 0){
                strcpy(minName, name);
                strcpy(minBirth, birth);
            }
        }
    }
    printf("%d", count);
    if(count > 0)
        printf(" %s %s\n", maxName, minName);
    return 0;
}

