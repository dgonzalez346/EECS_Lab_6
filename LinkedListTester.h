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
	* @brief Creates an empty list, add a node and remove a node to/from front of list and verify
	* 	size == 0
	**/
	void testAddRemFrontSize();

	/**
	* @brief Creates list, adds many elements, removes 1 from front, verifies list is correct
	**/
	void testAddRemFrontLarge();
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
	/**
	* @brief Creates an empty list, adds nodes, tries to return entry from out of bounds
	**/
	void testGetEntryBounds();

	/**
	* @brief Creates an empty list, adds nodes, tries to return entry from front
	**/
	void testGetEntryFront();

	/**
	* @brief Creates an empty list, adds nodes, tries to return entry from mid
	**/
	void testGetEntryMid();

	/**
	* @brief Creates an empty list, adds nodes, tries to return entry from back
	**/
	void testGetEntryBack();

	/**
	* @brief Creates an empty list, adds nodes, tries to insert a node in an out of bound position
	**/
	void testInsertInvalidPos();
	/**
	* @brief Creates an empty list, adds nodes, tries to replace to invalid pos
	**/
	void testReplaceBounds();

	/**
	* @brief Creates an empty list, adds nodes, tries to replace front node
	**/
	void testReplaceFront();

	/**
	* @brief Creates an empty list, adds nodes, tries to replace a middle node
	**/
	void testReplaceMid();

	/**
	* @brief Creates an empty list, adds nodes, tries to replace the back node
	**/
	void testReplaceBack();

	/**
	* @brief Creates a list, uses copy constructor to make another list, verify returns correct front entry
	**/
	void testCopyConstructFront();

	/**
	* @brief Creates a list, uses copy constructor to make another list, verify returns correct mid entry
	**/
	void testCopyConstructMid();

	/**
	* @brief Creates a list, uses copy constructor to make another list, verify returns correct back entry
	**/
	void testCopyConstructBack();

	/**
	* @brief Creates a list, uses copy constructor to make another list, delete original list, verify new list is not destroyed
	**/
	void testCCCleared();
	/**
	*@brief Create a list by assignment operator, check first entry
	*/
	void testAssignFirst();
	/**
	*@brief Create a list by assignment operator, check mid entry
	*/
	void testAssignMid();
	/**
	*@brief Create a list by assignment operator, check last entry
	*/
	void testAssignLast();
	/**
	*@brief Create a list by assignment operator, delete original, check to see if copy is kept
	*/
	void testAssignClear();
	/**
	*@brief Create an empty list, clear(), check length
	*/
	void testClearEmptyLength();
	/**
	*@brief Fill a list, clear() it, check length.
	*/
	void testClearFilledLength();
	/**
	*@brief Checks that insert inserted the correct entry in the mid and increased length
	*/
	void testInsertMid();
	/**
	*@brief Checks insert bounds
	*/
	void testInsertBounds();
	/**
	*@brief Checks that remove() removed the correct entry in the front and decreased length
	*/
	void testRemoveFront();
	/**
	*@brief Checks that remove() removed the correct entry in the mid and decreased length
	*/
	void testRemoveMid();
	/**
	*@brief Checks that remove() removed the correct entry in the back and decreased length
	*/
	void testRemoveBack();
	/**
	*@brief Checks remove bounds
	*/
	void testRemoveBounds();

};
#endif
