
#include "linked_list.h"

int main(void) {
	NODE *first;
	int arr[] = {13, 27, 32, 46};
	first = createList(arr, 4);
	printList(first);
	freeList(first);
	return 0;
}

