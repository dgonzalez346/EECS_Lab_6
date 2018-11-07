/**
*@author: Daniel Gonzalez
*@file: LinkedListTester.h
*@date: 10/31/2018
*@brief: header file for linked list tester, which tests to ensure the linked list works
*/
#ifndef LINKEDLISTTESTER_H
#define LINKEDLISTTESTER_H

//Include Gibbons' Linked List
#include "LinkedListOfInts.h"

#include <stdlib.h>
#include <cmath>
#include <vector>
#include <stdio.h>
class LinkedListTester
{
	public:

	LinkedListTester();

	//This will call all test methods
	void runTests();

	private:

	/**
	* @brief Creates an empty list and verifies isEmpty() returns true
	**/
	void testEmpty();

	/**
	* @brief Creates an empty list adds 1 value, verifies isEmpty() returns false
	**/
	void testInsertNotEmpty();
	/**
	*@brief Checks that insert inserted the correct entry in the front and increased length
	*/
	void testAddFront();

	/**
	* @brief Creates an empty list, verifies size() returns 0
	**/
	void testSizeEmpty();

	/**
	* @brief Creates a list, inserts a random number of elements, verifies
	* 	size returns correct value.
	**/
	void testSizeNonEmpty();

	/**
	*	@brief Creates empty list, adds to front, verifies size is 1
	**/
	void testAddFrontSize();

	/**
	* @brief Creates an empty list, adds nodes, then adds node to back and verifies getLength() returns correct size
	**/
	void testAddBackSize();

	/**
	* @brief Checks that insert inserted the correct entry in the back and increased length
	*/
	void testAddBack();
	/**
	* @brief Check that addBack correctly adds elements to the back of the list,
	* 	compares to vector push_back with same values.
	**/
	void testAddBackCorrect();
	/**
	* @brief Create list, test if removeFront correctly returns false
	**/
	void testAddRemFrontEmpty();
	/**
	* @brief Creates an empty list, add a node and remove a node to/from front of list and verify
	* 	size == 0
	**/
	void testAddRemFrontSize();
	/**
	* @brief Creates list, adds many elements, removes 1 from front, verifies list is correct
	**/
	void testAddRemFrontLarge();
	/**
	* @brief Create empty list, test if removeBack correctly returns false
	**/
	void testAddRemBackEmpty();
	/**
	* @brief Creates an empty list, adds an element, removes 1 from back, verifies list is correct
	**/
	void testAddRemBackSize();
	/**
	* @brief Creates empty list, adds many elements, removes 1 from back, verifies list is correct
	**/
	void testAddRemBackLarge();
	/**
	* @brief Creates an empty list, adds nodes, add/remove node to middle and verify getLength() returns correct size
	**/
	void testAddRemMidSize();
	/**
	* @brief Adds values to empty list including one random value, verifies search returns
	* 	true for element in list
	**/
	void testSearchTrue();
	/**
	* @brief adds values to empty list, verifies search returns false for element not in list
	**/
	void testSearchFalse();

};
#endif
