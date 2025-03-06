#include <stdio.h> 

int main(void){
    int i = 0, j = 0;

    char message_1[] = {"Hello!"};
    char message_2[] = {"?"};
    char message_3[] = {"World!"};

    char* messages_1[] = {message_1, message_2, message_3}; 

    for (i = 0; i < 3; i++)
    {
        printf("%s ", messages_1[i]); 
    }

    return 0; 
}