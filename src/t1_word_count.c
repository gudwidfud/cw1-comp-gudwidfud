#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

void count_words(char input_text[]) {
    // TODO: Implement me!
    int count = 0;
    char ch = ' ';
    char nu = '\0'; 
    if (input_text != '\0'){
        for (int i = 0; i <= strlen(input_text); i++){
            if (input_text[i] == ch){
                count++;
            }
            else if (input_text[i] == nu )
            {
                count++;
            }
            
        }

    }

   printf("%d", count);

}

// Driver code. You should not need to modify this.
int main() {
    FILE *file_pointer = fopen("task1.txt", "r");
    char *input = malloc(sizeof(char) * 1000);

    fgets(input, 1000, file_pointer);
    fclose(file_pointer);
  
    count_words(input);
    free(input);
    return 0;
}
