
#include <stdio.h>

int main() {
    int n, i;
    int medicineHour[10], medicineMinute[10];
    int currentHour, currentMinute;
    int medicineTime, currentTime, difference;

    char medicineName[10][30];

    printf("MEDICATION SCHEDULE CHECKER\n");

    printf("Enter number of medicines (1-10): ");
    scanf("%d", &n);

    if (n < 1 || n > 10) {
        printf("Invalid number of medicines.\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("\nEnter medicine name: ");
        scanf(" %29[^\n]", medicineName[i]);

        printf("Enter scheduled hour (0-23): ");
        scanf("%d", &medicineHour[i]);

        printf("Enter scheduled minute (0-59): ");
        scanf("%d", &medicineMinute[i]);

        if (medicineHour[i] < 0 || medicineHour[i] > 23 ||
            medicineMinute[i] < 0 || medicineMinute[i] > 59) {
            printf("Invalid time entered.\n");
            return 0;
        }
    }

    printf("\nEnter current hour (0-23): ");
    scanf("%d", &currentHour);

    printf("Enter current minute (0-59): ");
    scanf("%d", &currentMinute);

    if (currentHour < 0 || currentHour > 23 ||
        currentMinute < 0 || currentMinute > 59) {
        printf("Invalid current time.\n");
        return 0;
    }

    currentTime = currentHour * 60 + currentMinute;

    printf("\n--- MEDICATION SCHEDULE REPORT ---\n");

    for (i = 0; i < n; i++) {
        medicineTime = medicineHour[i] * 60
                     + medicineMinute[i];

        difference = medicineTime - currentTime;

        printf("\nMedicine: %s\n", medicineName[i]);
        printf("Scheduled Time: %02d:%02d\n",
               medicineHour[i], medicineMinute[i]);

        if (difference == 0) {
            printf("Status: DUE NOW (scheduled time)\n");
        } else if (difference > 0) {
            printf("Status: UPCOMING\n");
            printf("Time until scheduled: %d minutes\n",
                   difference);
        } else {
            printf("Status: SCHEDULED TIME PASSED\n");
            printf("Time since scheduled: %d minutes\n",
                   -difference);
        }
    }

    printf("\nSchedule check completed.\n");

    return 0;
}
