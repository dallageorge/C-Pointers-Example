#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void chars(char* s, char* most_seen, char* less_seen){
    int size,i,j,minc,maxc,fr;
    long long int max, min;
    i=0;
    max=-15;
    min=9999999999;
    minc=0;
    maxc=0;
    while(*(s+i)!='\0'){
        j=0;
        fr=0;
        while(*(s+j)!='\0'){
            if (*(s+i)==*(s+j)) {
                fr++;
            }
            j++;
        }
        if (fr>max){
            max=fr;
            maxc=*(s+i);
        }
        if (fr<min){
            min=fr;
            minc=*(s+i);
        }
        i++;
    }
    *(most_seen)=(char)(maxc);
    *(less_seen)=(char)(minc);
}

char* reverse (char* s){
    int size,i,j;
    char *s2= malloc(1000*sizeof(char));
    j=0;
    i=0;
    size=0;
    while (*(s+i)!='\0'){
        size++;
        i++;
    }
    for(i=size-1;i>=0;i--){
        *(s2+j)=(*(s+i));
        j++;
    }
    return s2;
}

