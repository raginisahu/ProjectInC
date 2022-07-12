#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Defining comparator function as per the requirement
static int dis_order(const void* a, const void* b)
{
    printf("inside dis");
	// setting up rules for comparison
	return strcmp(*(const char**)a, *(const char**)b);
}

// Defining comparator function as per the requirement
static int asc_order(const void* a, const void* b)
{
    printf("inside asc");
	// setting up rules for comparison
	return strcmp(*(const char**)b, *(const char**)a);
}

// Function to sort the array
void sort_alphabetic(const char* arr[], int n, char in)
{
	// calling qsort function to sort the array
	// with the help of Comparator
    if (in == 'a' || in == 'A')
	qsort(arr, n, sizeof(const char*), asc_order);
    else
	qsort(arr, n, sizeof(const char*), dis_order);

}

int main()
{

	// Get the array of names to be sorted
	const char* arr[]={"Systems","Programming","Deep","Learning","Internet","Things","Robotics","Course"};
    
 
	int n = sizeof(arr) / sizeof(arr[0]);
	int i;
    char in;
	// Print the given names
    printf("Please enter A OR D:");
    scanf("%c",&in);
     if (in == 'a' || in == 'A' ||   in == 'd' || in == 'D') {
         printf("Given array is\n");
        for (i = 0; i < n; i++)
            printf("%d: %s \n", i, arr[i]);

        // Sort the given names
        sort_alphabetic(arr, n,in);

        // Print the sorted names
        printf("\nSorted array is\n");
        for (i = 0; i < n; i++)
            printf("%d: %s \n", i, arr[i]);
     }
     else{
         printf("Invalid input"); // if not enter A or D
     }
	
	return 0;
}
