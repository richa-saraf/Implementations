/*
 * Check whether any permutation of an input string is a palindrome eg, civic, civil
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int is_palindrome(char *str) {
    int count[26];
    int i = 0;
    int j;
    
    int no_of_odds = 0;
    
    memset(count, 0, sizeof(count));
    
    while(str[i]) {
        count[str[i]-'a']++;
        i++;
    }
    
    i = strlen(str);
    
    for (j = 0; j < 26; j++) {
        if (count[j] %2 != 0) {
            no_of_odds++;
            
        }
    }
    
    if (i % 2 == 0) {
        if (no_of_odds > 0) {
            return 1;
        }
    } else {
        if (no_of_odds > 1) {
            return 1;
        }
    }
    
    return 0;
}


int main(){
    // run your function through some test cases here
    // remember: debugging is half the battle!
    
    char str[] = "ababbbbccc";
    printf("%d\n", is_palindrome(str));
    return 0;
}