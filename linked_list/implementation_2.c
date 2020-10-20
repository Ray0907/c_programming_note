#include "linked_list.h"

int main(void) {
	NODE *first, *node;
	int arr[] = {12, 38, 57};
	first = createList(arr,3);
	printList(first);

	node = searchNode(first, 12);
	insertNode(node, 46);
	printList(first);
	freeList(first);
	return 0;
}