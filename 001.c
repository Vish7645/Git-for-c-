#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

void *func(void *arg) {
pthread_detach(pthread_self());

printf("Inside the thread\n");

pthread_exit(NULL);
}

void fun() {
pthread_t ptid;

pthread_create(&ptid, NULL, &func, NULL);
printf("This line may be printed before thread terminates\n");

if (pthread_equal(ptid, pthread_self())) printf("Threads are equal\n");
else printf("Threads are not equal\n");

pthread_join(ptid, NULL);

printf("This line will be printed after thread ends\n");

pthread_exit(NULL);
}

int main() {
fun();

return 0;
}

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h> 
#include <sys/wait.h> 

void mergeSort(int arr[], int n, int low, int mid, int high)
{
int temp[n];
int l = low;
int i = low;
int m = mid + 1;

while ((l <= mid) && (m <= high))
{
if (arr[l] <= arr[m])
{
temp[i] = arr[l];
l++;
}
else
{
temp[i] = arr[m];
m++;
}
i++;
}

if (l > mid)
{
for (int k = m; k <= high; k++)
{
temp[i] = arr[k];
i++;
}
}
else
{
for (int k = l; k <= mid; k++)
{
temp[i] = arr[k];
i++;
}
}

for (int k = low; k <= high; k++)
{
arr[k] = temp[k];
}
}

void partition(int arr[], int n, int low, int high)
{
if (low < high)
{
int mid = (low + high) / 2;

partition(arr, n, low, mid);
partition(arr, n, mid + 1, high);

mergeSort(arr, n, low, mid, high);
}
}

void quicksort(int arr[], int first, int last)
{
if (first < last)
{
int pivot = first;
int i = first;
int j = last;

while (i < j)
{
while (arr[i] <= arr[pivot] && i < last)
i++;
while (arr[j] > arr[pivot])
j--;

if (i < j)
{
int temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}

int temp = arr[pivot];
arr[pivot] = arr[j];
arr[j] = temp;

quicksort(arr, first, j - 1);
quicksort(arr, j + 1, last);
}
}

void printarr(int arr[], int n)
{
for (int i = 0; i < n; i++)
printf(" %d", arr[i]);
printf("\n");
}

void main()
{
int n;

printf("Enter the no of element : ");
scanf("%d", &n);

int arr[n];

printf("Enter the elements : ");
for (int i = 0; i < n; i++)
scanf("%d", &arr[i]);

int pid = fork();

if (pid > 0)
{
printf("\nParent process started, with Process ID = %d \n", getpid());

printf("\nParent process starts waiting for the Child process, with Process ID = %d \n", pid);
int cpid = wait(NULL);
printf("\nParent process resumes after waiting for the Child process, with Process ID = %d\n", cpid);

printf("\nBefore merge sorting elements are :");
printarr(arr, n);

partition(arr, n, 0, n - 1);

printf("After merge sorting elements are :");
printarr(arr, n);

printf("\nParent process ends\n");
}
else
{
printf("\nChild process started, with Process ID = %d \n", getpid());

printf("\nBefore quick sorting elements are :");
printarr(arr, n);

quicksort(arr, 0, n - 1);

printf("After quick sorting elements are :");
printarr(arr, n);

printf("\nChild process ends\n");
}
}