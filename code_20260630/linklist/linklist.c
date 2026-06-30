#include <stdio.h>
#include "linklist.h"
#include <stdlib.h>

linklist list_create() {
	linklist H;

	H = (linklist)malloc(sizeof(listnode));
	if (H == NULL) {
		printf("malloc failed\n");
		return H;
	}
	H->data = 0;
	H->next = NULL;
	return H;
}

int list_tail_insert(linklist H, data_t value) {
	return 0;
} 

int list_show(linklist H) {

	return 0;
}
