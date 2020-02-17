/* 

   assingment2Implementation.cpp - implementation file for a program named assingment2
   ============================================================================

   This program is for Assignment No. 2, Course 04-630 Data Structures and Algorithms for Engineers. 


  Pseudocode
  ----------
  put the input.txt file in the data folder
  read the file 
     while reading the file using a for loop to read the number of test cases and the while loop to read the values
	     where there is a negative value on t replace with ------------------
		 create a structure of array to store values
		 once stored sort the values per each test case using the bubble sort {
		 whenit sorts it puts the value to be sorted in a temp location then replaces it with the other value then put that value to the new location
		 once done print to output file
		 after testing remove the prompt 

   
   
		 %complexity of bubble sort
		 the order of complexity is big O of n^2 but since it does this in 3 stages it becones 3(n^2)

   Author
   ------

   Lynet T Svotwa, Carnegie Mellon University Africa
   01/02/2020
 

 testing
 ---------
 to test if the bubble sort was working and how it was working I put a for loop just before the terminating brace 
 when sing size-1 in the implementation file it was omiting the last values therefor I decided to remove the -1 part 
 and implement it in the application file when calling the bubble sort


*/
 
#include "assingment2.h"

//function to be called when prompting users to close termiaal
void prompt_and_exit(int status) {
   printf("Press any key to continue and close terminal\n"); // printing to the screen
   getchar();
   exit(status);
}

void print_message_to_file(FILE *fp, char message[]) 
{ 
   fprintf(fp,"The message is: %s\n", message);
}


/* removed id and left the store_location function with the required variables for this assingment 
the unnecessary code was commented out since I no longer want it to store by unique ids
*/
int store_location(struct location_type location[],float t, int x, int y, int counting){

		//int i;

		//for loop which checks condition that the there is no repetetion
		//for(i = 0; i<=counting; i++){
			// condition for checking if new data read is not the same as that that has been already saved
			//if(location[i].x == x && location[i].y == y){
				//return -1; // if they are the same instead of saving return -1 
			//}
		//}

		//incrementing counter to ensure the same id is not given
		//return (counting + 1);
	return 0; // neccessary since i declared the function as int
	}

//function for bubble sort
int bubble_sort( struct location_type location[], int size) {
	int i,j, temp,  tempy; float tempt;  int  templ,  tempm; float tempn, tempa; int tempb; int tempc;  // initialising all variables to be used

	for (i=0; i < size; i++) {

		for (j=i; j >= 0; j--) {
		    //check condition such that if x and x+1 position are the same if so then sort by y
			if(location[j].x == location[j+1].x){
						if (location[j].y > location[j+1].y) {
							templ = location[j+1].y;
							location[j+1].y = location[j].y;
							location[j].y = templ;
							// other elements in the same row that goes with the t are neccessary to 
							tempm = location[j+1].x;
							location[j+1].x = location[j].x;
							location[j].x = tempm;

							tempn = location[j+1].t;
							location[j+1].t = location[j].t;
							location[j].t = tempn;
						}		
			}
			        //check condition such that if 2 consecative x are the same and its the same for y then sort by t
					if((location[j].x == location[j+1].x) && (location[j].y == location[j+1].y)){
						if (location[j].t > location[j+1].t) {
							tempa = location[j+1].t;
							location[j+1].t = location[j].t;
							location[j].t = tempa;

							tempb = location[j+1].x;
							location[j+1].x = location[j].x;
							location[j].x = tempb;

							tempc = location[j+1].y;
							location[j+1].y = location[j].y;
							location[j].y = tempc;
						}		
			}
            //sorting by x but its elements y and t in the same row needs to move along with the sort
			if (location[j].x > location[j+1].x) {
				temp = location[j+1].x; 
				location[j+1].x = location[j].x;
				location[j].x = temp;

				tempt = location[j+1].t;
				location[j+1].t = location[j].t;
				location[j].t = tempt;
					
				tempy = location[j+1].y;
				location[j+1].y = location[j].y;
				location[j].y = tempy;

		}
	}
	}
	//testing my bubble sort to see how it works
	/*int k;
	for (k = 0; k < size; k++){
	
		printf("%1.3f %d %d \n",location[k].t,location[k].x,location[k].y);
	}*/

	return 0;
}




