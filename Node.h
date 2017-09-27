#pragma once
#include <iostream>


class Node {
friend class AVL;
private:
	int data;
	int height;
	int lineIndex;
	Node* left_child;
	Node* right_child;

public:
	Node();
	~Node();

// ANALYZERS
	/** @file */
	int getData();
	/** @file */
	int getHeight();
	/** @file */
	Node* getLeftChild();
	/** @file */
	Node* getRightChild();
};

