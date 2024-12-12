# Time-Based System Shutdown Program

This program allows the user to schedule a system shutdown after a specified time interval, provided in the format `hh:mm:ss`. It uses the input time to calculate the total duration in seconds, pauses execution for that duration, and then initiates a system shutdown.

## Features

- Accepts user input in the format `hh:mm:ss`.
- Converts the provided time into total seconds.
- Pauses the program for the specified time using the `sleep()` function.
- Automatically shuts down the system after the timer elapses.

## Prerequisites

- The program requires root privileges to execute the shutdown command. Ensure you run it with appropriate permissions (e.g., using `sudo`).

## Usage

1. Compile the program using `gcc`:
   ```bash
   gcc -o shutdown_timer shutdown_timer.c
   ```
2. Run the program:
   ```bash
   sudo ./shutdown_timer
   ```
3. Enter the desired time in the format `hh:mm:ss` when prompted.

### Example

```bash
Enter time (hh:mm:ss): 00:00:10
Sleeping for 10 seconds...
Shutting down the system now...
```

## Notes

- Ensure the program has sufficient privileges to execute the `shutdown` command.
- The `system("shutdown now")` command is specific to Linux-based systems and may not work on other platforms.

##

