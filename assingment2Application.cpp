/* 

   assingment2Application.cpp - Application file for a program named assingment2
   ============================================================================

   This program is for Assignment No. 2, Course 04-630 Data Structures and Algorithms for Engineers. 


  Pseudocode
  ----------
  read assingment2Implementation file inorder to be able to call the functions
  initialize the struct location and any other variables to be used
  read the file 
  check that time value is not a negative value if so terminate the test case
  store the read data from each test case in the location struct
  call the bubble sort function and put the counting which is incrementing as the size minus 1

     while reading the file using a for loop to read the number of test cases and the while loop to read the values
	     where there is a negative value replace with ---------------
		 create a structure of array to store values
		 store the read data from each test case in the location struct
		 once at the end of that test set 
				call the bubble sort function and put the counting which is incrementing as the size minus 1
				print it to the output file in the format specified
	

	

   Author
   ------

   Lynet T Svotwa, Carnegie Mellon University Africa
   01/02/2020
   revision date 16/02/2020
 

 testing
 ---------
 check to see if it reads all 2 test case data
 check to see when it sees a negative value that it terminates the test case with dashes ------
 the following is the sample input
 sample input.txt 
2
0.000 0.000 0.000
0.100 0.050 0.000
0.200 0.100 0.000
0.300 0.190 0.000
0.400 0.300 0.000
0.500 0.400 0.000
0.600 0.500 0.000
0.700 0.600 0.000
0.800 0.700 0.000
0.900 0.800 0.000
1.000 0.900 0.000
1.100 0.000 1.000
1.200 0.000 1.010
1.300 0.000 1.020
1.400 0.000 2.000
1.500 0.000 2.000
1.600 0.000 4.000
1.700 0.000 4.090
1.800 0.000 5.000
1.900 0.000 4.000
2.000 0.000 2.000
-1.00 0.000 0.000
60.063 -28.247 20.743
60.165 -28.292 20.564
60.267 -28.430 20.522
60.370 -28.442 20.456
60.471 -28.476 20.337
60.573 -28.638 20.146
60.676 -28.938 20.071
60.781 -29.181 19.92
60.885 -29.163 19.891
60.993 -29.252 19.84
61.097 -29.269 19.701
61.201 -29.340 19.658
61.302 -29.319 19.586
61.404 -29.453 19.365
61.507 -29.621 19.112
61.608 -29.912 19.067
61.710 -30.145 18.923
61.811 -30.221 18.872
61.918 -30.291 18.892
62.020 -30.365 18.788
62.122 -30.462 18.663
62.223 -30.683 18.633
62.332 -31.042 18.653
62.436 -31.328 18.606
62.537 -31.913 18.621
62.638 -32.051 18.531
62.740 -32.824 18.672
62.841 -32.802 18.745
62.942 -32.756 18.752
63.044 -32.655 18.718
63.147 -32.207 18.516
63.249 -32.002 18.066
63.350 -31.847 17.958
63.452 -31.565 17.685
63.555 -31.320 17.205
63.656 -30.980 16.569
63.837 -30.829 16.044
63.940 -30.632 16.115
64.044 -30.407 16.049
64.145 -30.176 16.052
64.250 -29.799 16.266
64.352 -29.582 16.433
64.456 -29.283 17.090
64.559 -29.019 17.464
64.667 -28.514 18.610
-1.00 0.000 0.000


	test to see if once read the test cases are sorted according to the sample output 
	test to see if my andrew id is printed at the top as shown below
output.txt
lsvotwa
0.000 0 0
0.100 0 0
0.200 0 0
0.300 0 0
0.400 0 0
0.500 0 0
0.600 0 0
0.700 0 0
0.800 0 0
0.900 0 0
1.000 0 0
1.100 0 1
1.200 0 1
1.300 0 1
1.400 0 2
1.500 0 2
2.000 0 2
1.600 0 4
1.700 0 4
1.900 0 4
1.800 0 5
-----------------
62.638 -32 18
62.740 -32 18
62.841 -32 18
62.942 -32 18
63.044 -32 18
63.147 -32 18
63.249 -32 18
63.350 -31 17
63.452 -31 17
63.555 -31 17
62.332 -31 18
62.436 -31 18
62.537 -31 18
63.656 -30 16
63.837 -30 16
63.940 -30 16
64.044 -30 16
64.145 -30 16
61.710 -30 18
61.811 -30 18
61.918 -30 18
62.020 -30 18
62.122 -30 18
62.223 -30 18
64.250 -29 16
64.352 -29 16
64.456 -29 17
64.559 -29 17
60.781 -29 19
60.885 -29 19
60.993 -29 19
61.097 -29 19
61.201 -29 19
61.302 -29 19
61.404 -29 19
61.507 -29 19
61.608 -29 19
64.667 -28 18
60.063 -28 20
60.165 -28 20
60.267 -28 20
60.370 -28 20
60.471 -28 20
60.573 -28 20
60.676 -28 20
-----------------
 when code is now working test by adding more test cases in the input.txt file and test to see 
 if they are also sorted well
 test to see if instead of negative 1 if I put another negative value on t it terminates the test case with dashes as well



*/
// main program for where the program is first executed

#include "assingment2.h" // to ensure that I make use of the signatures in the header file.
#include <stdio.h>
#include <conio.h>
 
int main() {

	printf("lsvotwa\n");
	int counting = 0;
   int debug = TRUE;
   char message[MAX_MESSAGE_LENGTH];
   int size = 0;
   struct location_type location[MAX_NUMBER_OF_POINTS];
   
	int z;
	//initialised the variables using the lopp from lab2
	for (z=0; z<MAX_NUMBER_OF_POINTS; z++) {
		location[z].t= 0.0;
		location[z].x = 0;
		location[z].y = 0;
	}

   FILE *fp_in, *fp_out;

   if ((fp_in = fopen("../data/input.txt","r")) == 0) {  //precaution when opening file such that if it fails program does not crash
	  printf("Error can't open input input.txt\n");
     prompt_and_exit(1);
   }

   if ((fp_out = fopen("../data/output.txt","w")) == 0) {
	  printf("Error can't open output output.txt\n");      //precaution when writing to file such that if it fails program does not crash
     prompt_and_exit(1);
   }

   fprintf(fp_out," lsvotwa\n");
  //declaring variables to be used in my loops
 int number_of_test_cases;
 int i;
 float t, x, y;

 /* read the number of test cases from a file */
   fscanf(fp_in, "%d", &number_of_test_cases); 

	  //for loop for number of test cases
   for(i=1; i<=number_of_test_cases; i++)
   {

	 
	  // print test case number
	  printf("Test Case: %d\n", i);

	  //reading the test case data
	  fscanf(fp_in, "%f %f %f", &t, &x, &y); 


   //while loop to print data from input.txt as long condition -1 or negative value is not met
	  //- on a t value  means the end of a testcase
   while (t>=0)
   {  
	   

	/* echo the input data to the screen */
   // fgets(message, MAX_MESSAGE_LENGTH, fp_in);

	
	   //storing my values to struct location
		location[counting].x = x;
		location[counting].y = y;
		location[counting].t = t;
		//printf("%6.3f %4d %4d\n",  location[counting].t, location[counting].x, location[counting].y);	
		
	
		counting++;  //increment the counting by 1 to ensure all the elements are stored on a new line
		
		fscanf(fp_in, "%f %f %f", &t, &x, &y); // reading formated elements of the file
	
   }
   // call the bubble sort after the test case has been stored
   bubble_sort(location, counting-1);
   //for loop to print the values once they are done with the sort
   for(int i=0;i<counting;i++){
		fprintf(fp_out,"%6.3f %4d %4d\n",  location[i].t, location[i].x, location[i].y);
	}
   fprintf(fp_out,"-----------------\n");// as per specified to print the dasges at the end of each test case
   printf("-----------------\n");
   counting = 0; // resetting the counter so that for each test case it resets and starts id's from fresh

   //printing ----------at the end of each testcase
   }
	
  // }
   //closing the files
   fclose(fp_in);
   fclose(fp_out);
    // since asked for no prompt I commneted the last 2 lines for that out
  // _getch(); 
  // prompt_and_exit(0);

}