// Assignment3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Question1.h"
#include <iostream>

using namespace std;
int main()
{
	cout << "==========QUESTION 1===========" << endl;
	cout << "6.5: Rewrite the BinaryHeap insert routine by placing a copy of the inserted item in position 0." << endl;
	Question1 q1 = Question1();
	q1.printAnswer();

	cout << endl << "==========QUESTION 2===========" << endl;
	cout << "7.12: What is the runtime of heapsort for presorted input?" << endl;
	cout << "" << endl;

	cout << "==========QUESTION 3===========" << endl;
	cout << "5.4: A large number of deletions in a separate chaining hash table can cause the table " <<
		"to be fairly empty, which wastes space. In this case, we can rehash to a table half " <<
		"as large. Assume that we rehash to a larger table when there are twice as many " <<
		"elements as the table size. How empty should the table be before we rehash to a " <<
		"smaller table?" << endl;
	cout << "" << endl;

	cout << "==========QUESTION 4===========" << endl;
	cout << "6.38: Suppose we want to add the decreaseAllKeys(delta) operation to the heap repertoire. " <<
		"The result of this operation is that all keys in the heap have their value decreased " <<
		"by an amount of (delta). For the heap implementation of your choice, explain the necessary " <<
		"modifications so that all other operations retain their running times and " <<
		"decreaseAllKeys runs in O(1)." << endl;
	// Create a universal decrease value that all keys point to?
	cout << "" << endl;

	cout << "==========QUESTION 5===========" << endl;
	cout << "9.26: Find the strongly connected components in the graph of Figure 9.86." << endl;
	cout << "The strongly connected components are: {A, B, C, D, E, G} and {F}." << endl;

	cout << endl << "==========QUESTION 6===========" << endl;
	cout << "5.25: Implement the classic cuckoo hash table in which two separate tables are maintained. " <<
		"The simplest way to do this is to use a single array and modify the hash " <<
		"function to access either the top half or the bottom half." << endl;
	cout << "" << endl;

	cout << "==========QUESTION 7===========" << endl;
	cout << "Q: You are a tournament director and need to arrange a round " <<
		"robin tournament among N = 2k players. In this tournament, everyone plays " <<
		"exactly one game each day; after N− 1 days, a match has occurred between " <<
		"every pair of players.Give a recursive algorithm to do this. Implement your " <<
		"algorithm in C++ and demonstrate that it works." << endl;
	cout << "" << endl;

	cout << "==========QUESTION 8===========" << endl;
	cout << "Q: Create a 2D simulation with 100 white squares (they can be " <<
		"the same size or varying sizes). Use a background other than white. Give each " <<
		"square an initial position and velocity. Animate the squares so they are " <<
		"moving around the screen during the render loop. For the collision, " <<
		"implement a quadtree data structure of at least depth 4. The quadtree should " <<
		"NOT be recomputed every iteration of the loop, but rather updated to reflect " <<
		"new square positions. When the squares collide, change the color of each " <<
		"square involved in the collision to red. Once the squares have moved past " <<
		"each other and are no longer intersecting with another square, the colour " <<
		"should revert back to white." << endl;

	cin.get();
    return 0;
}

