#include<stdio.h>
#include<string.h>
#include<stdbool.h>
// Function is to check whether two strings are anagram of each other or not.
bool isAnagram(char c[50], char d[50]) {
// an array of size 26, to store count of characters.
int a[26] = {0};

// storing count of each character in first string.
for (int i = 0; i < strlen(c); i++) {
    a[c[i] - 'a']++;
}

// decrementing the count of characters encountered in the second string.
for (int i = 0; i < strlen(d); i++) {
    a[d[i] - 'a']--;
}

bool flag = true;

// iterating over the array in which we stored the count initially
// to check if count at every index is equal to 0 or not.
// count 0 indicates that number of characters in both strings are same.
for (int i = 0; i < 26; i++) {
    if (a[i] != 0) {
        flag = false;
        break;
    }
}
// returning the result.
return flag;
}
int main(){
    char a[50],b[50];
    scanf("%s %s",a,b);
    if (isAnagram(a,b)){
        printf("yes");
    }
    else{
        printf("no");
    }
}