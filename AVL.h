#include "Node.h"
class AVL {
private:
	Node* root;
	
public:
	AVL();
	~AVL();
	
	// BST PURE
	// PART 1 - SETUP
	Node* getRootNode();
	// PART 2 - ADD
	bool add(int data, int lineIndex);
	Node* recursiveAdd(int data, int lineIndex, Node* current_search);
	Node* getNode(int data);
	int getPrev(int data);
	int getNext(int data);
	Node* contains(int data, Node* current_search);
	void print(Node* current_print);
	// PART 3 - REMOVE
	bool remove(int data);
	Node* recursiveRemove(int data, Node* current_search);
	Node* IOP(Node* current_search, Node* node_to_remove);
	// PART 4 - MEMORY CLEANUP
	void clear();

	// AVL FUNCTIONS
	/** @file */
	int height(Node* node_query);
	/** @file */
	void fixHeight(Node* parent);
	/** @file */
	int heightDiff(Node* parent);
	/** @file */
	Node* balance(Node* parent);
	/** @file */
	Node* rotateRight(Node* pivot);
	/** @file */
	Node* rotateLeft(Node* pivot2);
	/** @file */
	Node* getMin(Node* parent);
	/** @file */
	Node* removeMin(Node* parent);
	
};
