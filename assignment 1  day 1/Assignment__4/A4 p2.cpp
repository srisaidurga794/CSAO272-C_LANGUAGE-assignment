#include <stdio.h>

struct Player {
    char name[50];
    int runs;
};

int main() {
    int n, total_runs = 0;
    
    printf("Enter the number of players: ");
    scanf("%d", &n);
    
    struct Player team[n];
    
    for(int i=0; i<n; i++) {
        printf("Enter the name of player %d: ", i+1);
        scanf("%s", team[i].name);
        printf("Enter the runs scored by player %d: ", i+1);
        scanf("%d", &team[i].runs);
        total_runs += team[i].runs;
    }
    
    printf("\nTotal runs scored by the team: %d\n", total_runs);
    
    return 0;
}


