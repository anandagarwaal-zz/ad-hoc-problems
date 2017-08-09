// http://www.geeksforgeeks.org/convert-a-given-binary-tree-to-doubly-linked-list-set-4/
void BToDLL(Node* root, Node** head_ref) {
	// Base cases
	if (root == NULL)
	    return;

	// Recursively convert right subtree
	BToDLL(root->right, head_ref);

	// insert root into DLL
	root->right = *head_ref;

	// Change left pointer of previous head
	if (*head_ref != NULL)
	    (*head_ref)->left = root;

	// Change head of Doubly linked list
	*head_ref = root;

	// Recursively convert left subtree
	BToDLL(root->left, head_ref);
}