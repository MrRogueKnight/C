//5. Time Adder
// Program to add two times in hour, minute, and second format

#include <stdio.h>

int main() {
    int hour1, min1, sec1, hour2, min2, sec2; // variables to store the two times
    printf("Enter two times: ");
    scanf("%d:%d:%d %d:%d:%d", &hour1, &min1, &sec1, &hour2, &min2, &sec2); // input the times from the user

    // calculate the total seconds
    int total_sec = (hour1 * 3600 + min1 * 60 + sec1) + (hour2 * 3600 + min2 * 60 + sec2);

    // calculate the hour, minute, and second
    int hour = total_sec / 3600;
    int min = (total_sec % 3600) / 60;
    int sec = total_sec % 60;

    // print the result
    printf("Output time is: %02d:%02d:%02d.\n", hour, min, sec);
    return 0;
}