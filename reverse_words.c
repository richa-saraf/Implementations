#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// This function reverses the characters from start to end indices
void reverse(char *str, int start, int end) {
    while(start < end) {
    	char tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        start++;
        end--;
    }
}

void reverse_words(char *str) {
    
    int len = strlen(str);
    printf("%d\n", len);
    int start, end;
    int i = 0;
    // This reverses the characters
    reverse(str, 0, len-1);
    printf("%s\n", str);
    
    // Now we need to reverse the words
    
    while(i < len) {
        if (str[i] != ' ') {
            start = i;
            while(str[i] != ' ' && i < len) {
                i++;
            }
            end = i-1;
            reverse(str, start, end);
        } 
        i++;
    }
}


int main(){
    
    char str[] = "find you will pain only go you recordings security the into if";
    reverse_words(str);
    printf("%s\n", str);
    return 0;
}