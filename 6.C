#include <stdio.h>

struct players {
    char player_name[20];
    char team_name[20];
    int avg;
};

int main() {
    int n;

    printf("Enter how many players: ");
    scanf("%d", &n);

    struct players p[n];

    for (int i = 0; i < n; i++) {
        printf("Enter name of player %d:\n", i + 1);
        scanf(" %[^\n]", p[i].player_name);

        printf("Enter team of player %d:\n", i + 1);
        scanf(" %[^\n]", p[i].team_name);

        printf("Enter batting average of player", i + 1);
        scanf("%d", &p[i].avg);

    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (p[i].avg < p[j].avg) {
                struct players temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    printf("\nPlayers sorted by batting score (highest to lowest):\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s | Team: %s | Batting score: %d\n",
               i + 1, p[i].player_name, p[i].team_name, p[i].avg);
    }

    return 0;
}
