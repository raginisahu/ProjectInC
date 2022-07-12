// A recursive C program to
// check whether a given number
// is palindrome or not
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
 #include<ctype.h>
// A recursive function that
// check a str[s..e] is
// palindrome or not.
bool sentencePalindrome(char *str)
{
    int l = 0,i=0, h = strlen(str) - 1;
  
    // Lowercase string
    for (i = 0; i <= h; i++)
        str[i] = tolower(str[i]);
  
    // Compares character until they are equal
    while (l <= h) {
  
        // If there is another symbol in left
        // of sentence
        if (!(str[l] >= 'a' && str[l] <= 'z'))
            l++;
  
        // If there is another symbol in right
        // of sentence
        else if (!(str[h] >= 'a' && str[h] <= 'z'))
            h--;
  
        // If characters are equal
        else if (str[l] == str[h])
            l++, h--;
  
        // If characters are not equal then
        // sentence is not palindrome
        else
            return false;
    }
  
    // Returns true if sentence is palindrome
    return true;
}

 
// Driver Code
int main()
{
    char str[100];
    printf("Please enter a message");
    gets(str);

    if (sentencePalindrome(str))
    printf("Yes");
    else
    printf("No");
 
    return 0;
}