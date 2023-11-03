//=======================================================================================================
//                                                                                                      =
//............................loop pratice using patterend  Day 4.......................................=
//                                                                                                      =
//=======================================================================================================

#include <iostream>
using namespace std;
#include <conio.h>

int loop1() {

	// from this single loop we can create 4 patterens like as:

	// 1.  if we want to write any latter we will onlyy write it in double bratice
	// 2.  if we want to print 12345 in sequence then we have to cout j 
	// 3.  if we wanty to print 11111 and then 22222 then we have to cout i
	// 4.  if we want to print alhabates in the output then we can write it as
	// for this purpose we will have to intilize it with char and we will start this lop from A  and end this loop with E the character where we want to end our value 
	//  one condition is that we can reverse it 

	for (int i = 0;i < 5;i++) {  
		for (int j = 1;j < 5;j++) {     

			cout << i;    
			
		}

		cout << endl;
	}
	cout << "===================================================================================================" << endl;
	

	// here we can do the same three things with this loop as we have did with the uper loop 
	// 1  we can print AAAAA as if we cout i
	// 2. we can print ABCDE as if we cout j
	// 3. any leter we can print on our desire
	// we can also resverse the order

	for (char i='A';i < 'E';i++) {
		for (char j = 'A';j < 'E';j++) {

			cout << i;

		}

		cout << endl;
	}

	cout << "===================================================================================================" << endl;
	return 0;
}
int loop2() {
	int i, j;
	// we wil lARN the use of ASCI value 

	// it is 7  bit code
	// from 65 will start Alphabate A to so on ...................
	// it will end on 90 at Z........
	// we will do type casting ...
	// we can also convert it in reverse order
	for ( i = 65;i < 69;i++) {
		for (int j = 65;j < 69;j++) {

			cout << i;

		}

		cout << endl;
	}

	return 0;
	//
	// .........................................left side triangle......................
	// 
	// .........................................review...................................
	// 
	// .........................how its workin in back.................................
	// 
	// and we have also done the patterns of leftside triangles
	// we need to observer how all these pattren are working 
	// in which order they are in
	// there no of row
	// there no of coloums
	// weather they are in acending or decending order
	//	*
	//	**
	//	***
	//	****
	//	*****
	//we will simply end the loop on i then we can create a triangle
	// we can also do it in reverse order here 
	// now for reverse it will strt frm high to low with decrement
}

int main()
{
   
}

