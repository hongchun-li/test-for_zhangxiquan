#include <stdio.h>
#include "linkqueue.h"

int main(int argc, const char *argv[])
{
	linkqueue *lq;

	lq = queue_create();
	if (lq == NULL)
		return -1;
	enqueue(lq, 10);
	enqueue(lq, 20);
	enqueue(lq, 30);
	enqueue(lq, 40);
	
	queue_clear(lq);

	lq = queue_free(lq);
	enqueue(lq, 50);
	return 0;
}
