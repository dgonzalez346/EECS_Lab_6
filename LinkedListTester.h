/**
*@author: Daniel Gonzalez
*@file: LinkedListTester.h
*@date: 2/5/2018
*@brief: header file for linked list tester, which tests to ensure the linked list works 
*/
#ifndef LINKEDLISTTESTER_H
#define LINKEDLISTTESTER_H

#include "LinkedList.h"
#include <stdlib.h>
#include <cmath>

class LinkedListTester
{   
	public: 

	LinkedListTester();

	//This will call all your test methods
	void runTests();
	 
	private:

	/**
	* @brief Creates an empty list and verifies isEmpty() returns true
	**/
	void testEmpty();

	/**
	* @brief Creates an empty list adds 1 value, verifies isEmpty() returns false
	**/
	void testInsertFrontSize();

	/**
	* @brief Creates an empty list, adds nodes, then adds node to back and verifies getLength() returns correct size
	**/
	void testInsertBackSize();

	/**
	* @brief Creates an empty list, adds nodes, then adds node to middle and verifies getLength() returns correct size
	**/
	void testInsertMiddleSize();

	/**
	* @brief Creates an empty list, adds nodes, add a node and remove a node to/from front of list and verify getLength() returns correct size
	**/
	void testAddRemFrontSize();

	/**
	* @brief Creates an empty list, adds nodes, add/remove node to back and verify getLength() returns correct size
	**/
	void testAddRemBackSize();

	/**
	* @brief Creates an empty list, adds nodes, add/remove node to middle and verify getLength() returns correct size
	**/
	void testAddRemMidSize();
	
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
	*@brief Checks that insert inserted the correct entry in the front and increased length
	*/
	void testInsertFront();
	/**
	*@brief Checks that insert inserted the correct entry in the mid and increased length
	*/
	void testInsertMid();
	/**
	*@brief Checks that insert inserted the correct entry in the back and increased length
	*/
	void testInsertBack();
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
