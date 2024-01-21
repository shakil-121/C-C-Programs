#include<stdio.h>

// Function to find the waiting time for each process in Round Robin
void findWaitingTime(int processes[], int n, int bt[], int wt[], int quantum, int at[]) {
    int remaining_time[n];

    // Copy burst times to remaining_time array
    for (int i = 0; i < n; i++)
        remaining_time[i] = bt[i];

    int t = 0; // Current time

    // Keep track of completed processes
    int completed = 0;

    // Continue processing until all processes are done
    while (completed < n) {
        for (int i = 0; i < n; i++) {
            if (at[i] <= t && remaining_time[i] > 0) {
                if (remaining_time[i] <= quantum) {
                    t += remaining_time[i];
                    wt[i] = t - bt[i] - at[i];
                    remaining_time[i] = 0;
                    completed++;
                } else {
                    t += quantum;
                    remaining_time[i] -= quantum;
                }
            }
        }
    }
}

// Function to find the turnaround time for each process in RR
void findTurnaroundTime(int processes[], int n, int bt[], int wt[], int tat[]) {
    // Calculate turnaround time for each process
    for (int i = 0; i < n; i++) {
        tat[i] = bt[i] + wt[i];
    }
}

// Function to find the average time and print details
void findAverageTime(int processes[], int n, int bt[], int quantum, int at[]) {
    int wt[n], tat[n];

    // Find waiting time for all processes
    findWaitingTime(processes, n, bt, wt, quantum, at);

    // Find turnaround time for all processes
    findTurnaroundTime(processes, n, bt, wt, tat);

    // Calculate the total waiting time and total turnaround time
    int total_wt = 0, total_tat = 0;

    printf("\n| %-8s | %-10s | %-15s | %-15s | %-15s |\n", "Process", "Arrival Time", "Burst Time", "Waiting Time", "Turnaround Time");
    printf("|----------|--------------|------------------|------------------|------------------|\n");

    for (int i = 0; i < n; i++) {
        total_wt += wt[i];
        total_tat += tat[i];
        printf("| %-8d | %-12d | %-16d | %-16d | %-16d |\n", processes[i], at[i], bt[i], wt[i], tat[i]);
    }

    // Calculate and print average waiting time and average turnaround time
    float avg_wt = (float)total_wt / n;
    float avg_tat = (float)total_tat / n;

    printf("|----------|--------------|------------------|------------------|------------------|\n");
    printf("| %-8s | %-12s | %-16s | %-16.2f | %-16.2f |\n\n", "Average", "", "", avg_wt, avg_tat);
}

// Driver program to test above functions
int main() {
    int n, quantum;

    // Input number of processes
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int processes[n], burst_time[n], arrival_time[n];

    // Input arrival times and burst times for each process
    printf("Enter arrival time and burst time for each process:\n");
    for (int i = 0; i < n; i++) {
        printf("Process %d:\n", i + 1);
        printf("  Arrival Time: ");
        scanf("%d", &arrival_time[i]);
        printf("  Burst Time: ");
        scanf("%d", &burst_time[i]);
        processes[i] = i + 1; // Process IDs start from 1
    }

    // Input time quantum
    printf("Enter the time quantum: ");
    scanf("%d", &quantum);

    // Call function to calculate and print average waiting time and turnaround time
    findAverageTime(processes, n, burst_time, quantum, arrival_time);

    return 0;
}
