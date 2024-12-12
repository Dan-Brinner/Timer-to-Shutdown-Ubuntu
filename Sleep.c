#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int hours, minutes, seconds, total_seconds;

    printf("Enter time (hh:mm:ss): ");
    if (scanf("%d:%d:%d", &hours, &minutes, &seconds) != 3) {
        printf("Invalid time format. Please use hh:mm:ss.\n");
        return 1;
    }

    // Convert input time to total seconds
    total_seconds = (hours * 3600) + (minutes * 60) + seconds;

    printf("Sleeping for %d seconds...\n", total_seconds);
    sleep(total_seconds);

    printf("Shutting down the system now...\n");
    // Power off the system (needs root privileges)
    system("shutdown now");

    return 0;
}
