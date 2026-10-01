# Sensor Data Using Union in C

## Project Description

A simple C program that demonstrates the use of a union for storing different types of sensor data. The user can select temperature, humidity, or sensor status and enter the required value.

## Features

- Enter temperature
- Enter humidity
- Enter sensor status
- Display the selected sensor value
- Demonstrate union data storage
- Simple menu-driven program

## Technologies Used

- C
- Union
- Switch Statement
- Standard Input/Output

## How to Run

1. Create a file named `sensor_data_union.c`.
2. Compile the program using a C compiler.
3. Run the compiled program.

Example using GCC:

```bash
gcc sensor_data_union.c -o sensor_data_union
./sensor_data_union

===== Sensor Data Using Union =====
1. Temperature
2. Humidity
3. Sensor Status
Enter your choice: 2
Enter Humidity: 65.5

Humidity: 65.50 %

The union stores one sensor value at a time.

Author

M.Likitha
