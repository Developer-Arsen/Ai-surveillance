#include <stdio.h>
#include <string.h>

size_t str_len(const char * str) {
    int count = 0;
    while (*(str + count) != '\0')
    {
        count++;
    }
    return count;
}

char * str_cat_with_index (char * dest , const char * src) {
    int i = 0;
    while (dest[i] != '\0') {
        i++;
    }

    int j = 0;
    while (src[j] != '\0') 
    {
        dest[i++] = src[j++];
    }
    return dest;
}

char * str_cat_with_reference(char * dest, const char * src) {
    char * tmp = dest;
    
    while(*tmp != '\0') {
        tmp++;
    }

    while (*src != '\0')
    {
        *tmp++ = *src++;
    }
    return dest;
}

int main () {
    char src[] = "Hello";
    char dest[10] = {"ars"};

    int length = str_len(dest);
    printf("length is : %d \n", length);

    // str_cat_with_index(dest, src);
    str_cat_with_reference(dest, src);
    puts(dest);

    length = str_len(dest);
    printf("length is : %d \n", length);
    return 0; 
}