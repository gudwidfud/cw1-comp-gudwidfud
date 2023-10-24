#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

void print_words(char input_text[]) {
    // TODO: Implement me!
    char word[50];
    char ch = ' ';
    char nu = '\0'; 
    if (input_text != '\0'){
        for (int i = 0; word[i] != '\0';i ++){
            for (int j = 0; i <= strlen(input_text); i++){
                word[i] = input_text[j];
                if (input_text[j] == ch || input_text[j] == nu){
                printf("%c\n", word);
                strcpy(word, "");
                }
            
            }
        }

    }
}

// Driver code. You should not need to modify this.
int main() {
    FILE *file_pointer = fopen("task1.txt", "r");
    char *input = malloc(sizeof(char) * 1000);

    fgets(input, 1000, file_pointer);

    fclose(file_pointer);

    print_words(input);
    free(input);
    return 0;
}
