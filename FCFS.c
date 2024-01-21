#include<stdio.h>

// Function to calculate waiting time and turnaround time for processes
void findWaitingTime(int processes[], int n, int bt[], int wt[]) {
    wt[0] = 0; // Waiting time for the first process is 0

    // Calculate waiting time for each process
    for (int i = 1; i < n; i++)
        wt[i] = bt[i - 1] + wt[i - 1];
}

// Function to calculate turnaround time for processes
void findTurnaroundTime(int processes[], int n, int bt[], int wt[], int tat[]) {
    // Calculate turnaround time for each process
    for (int i = 0; i < n; i++)
        tat[i] = bt[i] + wt[i];
}

// Function to calculate average time and print details
void findAverageTime(int processes[], int n, int bt[]) {
    int wt[n], tat[n];

    // Find waiting time of all processes
    findWaitingTime(processes, n, bt, wt);

    // Find turnaround time for all processes
    findTurnaroundTime(processes, n, bt, wt, tat);

    // Calculate the total waiting time and total turnaround time
    int total_wt = 0, total_tat = 0;

    printf("\n| %-8s | %-10s | %-15s | %-15s |\n", "Process", "Burst Time", "Waiting Time", "Turnaround Time");
    printf("|----------|------------|------------------|------------------|\n");

    for (int i = 0; i < n; i++) {
        total_wt += wt[i];
        total_tat += tat[i];
        printf("| %-8d | %-10d | %-15d | %-15d |\n", processes[i], bt[i], wt[i], tat[i]);
    }

    // Calculate and print average waiting time and average turnaround time
    float avg_wt = (float)total_wt / n;
    float avg_tat = (float)total_tat / n;

    printf("|----------|------------|------------------|------------------|\n");
    printf("| %-8s | %-10s | %-15.2f | %-15.2f |\n\n", "Average", "", avg_wt, avg_tat);
}

// Driver program to test above functions
int main() {
    int n;

    // Input number of processes
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int processes[n], burst_time[n];

    // Input burst times for each process
    printf("Enter burst time for each process:\n");
    for (int i = 0; i < n; i++) {
        printf("Process %d: ", i + 1);
        scanf("%d", &burst_time[i]);
        processes[i] = i + 1; // Process IDs start from 1
    }

    // Call function to calculate and print average waiting time and turnaround time
    findAverageTime(processes, n, burst_time);

    return 0;
}
