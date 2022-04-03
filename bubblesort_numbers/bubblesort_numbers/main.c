#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void control_input(long int value_entered, long unsigned int array_index) {
    long int value = value_entered;
    long unsigned int index = array_index;




}

//sort an array of integers with bubblesort
void bubblesort(long long int* const nr_array, const size_t size) {
    int pass = 0;
	void arrange_array(long long int* index1_Ptr, long long int* index2_Ptr);
	//loop to control the amount of passes
	for (size_t i = 0; pass < size - 1; pass++) {

		//loop to control comparisons during each pass
		for (size_t n = 0; n < size - 1; n++) {
			//arrange the index/elements if they're out of order
			if (nr_array[n] > nr_array[n + 1]) {
				arrange_array(&nr_array[n], &nr_array[n + 1]);

			}
		}
	}
}

void arrange_array(long long int* index1_Ptr, long long int* index2_Ptr) {
	long long int carry = *index1_Ptr;
	*index1_Ptr = *index2_Ptr;
	*index2_Ptr = carry;
}
int main() {
    void control_input(long int value_entered, long unsigned int array_index);
	void bubblesort(long long int* const nr_array, const size_t size); //function prototype for bubblesort

	//initialize the number array, array is basically a pointer to a memory address where data is stored
	long long int number_array[SIZE];


		puts( "Please enter 10 integers this application can read both positive and negative values for input");
		puts( "The program arranges the input from the lowest value entered through to the highest value");
        puts( "Afterwards, the input will be displayed in an unsorted arrangement and then in a sorted arrangement" );
        puts("");

	        for (size_t i = 0; i < SIZE; i++) {
                puts("Enter a positive integer until 10 positive integers have been entered ");
		        scanf("%9lld", &number_array[i]);
	            printf("User assigned value %9lld for integer nr %lld\n", number_array[i], 1 + i );

	        }
        puts("");

		puts( "Unsorted input in tabular format:");

	for (size_t i = 0; i < SIZE; i++) {
		printf("%6lld is the value assigned to index nr %d\n", number_array[i], 1+i );
	}
	//call the bubblesort function to sort the array


    puts( "Unsorted array numbers lacking order: ");
        for (size_t i = 0; i < SIZE; i++) {
            printf("%9lld", number_array[i], 1+i );
        }
        	bubblesort(number_array, SIZE);
	puts( "" );
	puts( "Sorted array numbers arranged from the lowest to the greatest value: ");
        for (size_t i = 0; i < SIZE; i++ ) {
            printf("%9lld", number_array[i] );
        }
        puts( "");
        puts("Sorted array in tabular format: ");
	for (size_t i = 0; i < SIZE; i++) {

		printf("%9lld is the value after sortation for array index nr %d\n", number_array[i], 1 + i );

	}

	return 0;


}
