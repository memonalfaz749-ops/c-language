#include<stdio.h>

int main() {

    char name[100];
    int i, j, count;
    int visited[100] = {0};   // to track counted letters

    printf("Enter your name: ");
    scanf("%s", name);

    for(i = 0; name[i] != '\0'; i++) {

        if(visited[i] == 1)
            continue;

        count = 1;

        for(j = i + 1; name[j] != '\0'; j++) {
            if(name[i] == name[j]) {
                count++;
                visited[j] = 1;   // mark as counted
            }
        }

        printf("%c = %d\n", name[i], count);
    }

    return 0;
}

