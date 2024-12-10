#include<stdio.h>
#define MAX_v 5

void displaymat(int mat[MAX_v][MAX_v]){
    printf("Adjancency Mat:\n");
    for (int i = 0; i<MAX_v;i++){
        for (int j=0; j<MAX_v;j++){
            printf("%d",mat[i][j]);
        }
    
        printf("\n");
    }
}

int main(){
    int graph[MAX_v][MAX_v] = {0};
    graph[0][1] = 1;
    graph[0][2] = 1;
    graph[1][2] = 1;
    displaymat(graph);
    return 0;
}