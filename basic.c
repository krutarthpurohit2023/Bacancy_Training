// #include <stdio.h>
// #include <string.h>

// #define m 2
// #define n 10

// int main()
// {
//     char arr[m][n] = {"Hello", "World"};


//     printf("%c",arr[0][5]);

//      for (int i = 0; i < 20; i++)
//      {
//          printf("%c",arr[i]);
//      }
    
//     return 0;
// }

#include <stdio.h>
#include <string.h>

#define NUMBER_OF_STRING 4
#define MAX_STRING_SIZE 40

void print_array(const char arr[NUMBER_OF_STRING][MAX_STRING_SIZE])
{
	for (int i = 0; i < NUMBER_OF_STRING; i++)
	{
		printf("'%s' has length %d\n", arr[i], strlen(arr[i]));
	}
}

int main()
{
	char arr[NUMBER_OF_STRING][MAX_STRING_SIZE] =
	{ "array of c string",
	  "is fun to use",
	  "make sure to properly",
	  "tell the array size"
	};

	printf("Before reverse:\n");
	print_array(arr);

	// for (int i = 0; i < NUMBER_OF_STRING; i++)
	// {
	// 	for (int j = 0, k = strlen(arr[i]) - 1; j < k; j++, k--)
	// 	{
	// 		char temp = arr[i][j];
	// 		arr[i][j] = arr[i][k];
	// 		arr[i][k] = temp;
	// 	}
	// }

	// printf("\nAfter reverse:\n");
	// print_array(arr);

	return 0;
}