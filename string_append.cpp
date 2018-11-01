#include <stdio.h>
#include <stdlib.h>

int str_len (char *str)
{
    int len = 0;
    
    for (len=0; str[len]!='\0'; len++)
    {}
    
    return len;
}

char *str_append (char *s1, char *s2)
{
    char *result;
    int len_s1, len_s2;
    int index = 0;
    
    // str_len function will return number of characters in a character array.
    len_s1 = str_len(s1);
    len_s2 = str_len(s2);
    
    result = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
    result [len_s1 + len_s2] = '\0'; //Last character must be terminating character.
    
    while (s1[index] != '\0')
    {
        result[index] = s1[index];
        index++;
    }
    
    index = 0;
    
    while (s2[index] != '\0')
    {
        result[len_s1 + index] = s2[index];
        index++;
    }
    
    return result;
}

int main()
{
    char str1[] = "I am trying to ap";
    char str2[] = "pend two strings!";
    char *result_str;
    
    result_str = str_append (str1, str2);
    
    printf ( "[%s] + [%s] = [%s]", str1, str2, result_str );
    
    return 0;
}
