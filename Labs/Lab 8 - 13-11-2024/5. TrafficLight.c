#include <stdio.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    int choice;
    printf("Select a traffic light color (0 for RED, 1 for YELLOW, 2 for GREEN): ");
    scanf("%d", &choice);

    switch (choice) {
        case RED:
            printf("Action: Stop\n");
            break;
        case YELLOW:
            printf("Action: Caution\n");
            break;
        case GREEN:
            printf("Action: Go\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
/**
Output1: Select a traffic light color (0 for RED, 1 for YELLOW, 2 for GREEN): 0
Action: Stop

Output2: Select a traffic light color (0 for RED, 1 for YELLOW, 2 for GREEN): 1
Action: Caution

Output3: Select a traffic light color (0 for RED, 1 for YELLOW, 2 for GREEN): 2
Action: Go
*/
