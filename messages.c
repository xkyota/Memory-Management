#include <stdio.h> 

int main(void){
    int i = 0, j = 0;
    char messages[5][50] = {
        {"@sryided"},
        {"Лабден"},
        {"Ты думаешь нам на 12?"},
        {"хд"},
        {"сегодня к врачу"}
    };

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 32; j++)
        {
            if (messages[i][j] != 0)
            {
                printf("%c", messages[i][j]); 
            }
            else{
                printf("\n"); 
                break;
            }
        }
        
    }
    

    return 0; 
}