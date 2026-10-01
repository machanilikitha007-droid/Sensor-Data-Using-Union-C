#include <stdio.h>

union SensorData
{
    int temperature;
    float humidity;
    char status;
};

int main()
{
    union SensorData sensor;
    int choice;

    printf("===== Sensor Data Using Union =====\n");
    printf("1. Temperature\n");
    printf("2. Humidity\n");
    printf("3. Sensor Status\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter Temperature: ");
            scanf("%d", &sensor.temperature);

            printf("\nTemperature: %d C\n", sensor.temperature);
            break;

        case 2:
            printf("Enter Humidity: ");
            scanf("%f", &sensor.humidity);

            printf("\nHumidity: %.2f %%\n", sensor.humidity);
            break;

        case 3:
            printf("Enter Sensor Status (A/I): ");
            scanf(" %c", &sensor.status);

            printf("\nSensor Status: %c\n", sensor.status);
            break;

        default:
            printf("\nInvalid choice!\n");
    }

    printf("\nThe union stores one sensor value at a time.\n");

    return 0;
}
