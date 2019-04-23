
#include "csll.h"

int csll_add_node (csll_t *new, csll_t *node)
{
#if CSLL_DET_ENABLED
	if (!new) {
		return -1;
	} else if (!node) {
		return -2;
	}
#endif
}

void csll_del_node (csll_t *node)
{
#if CSLL_DET_ENABLED
	if (!node) {
		return;
	}
#endif

	if (node->next) {
		/*Make node->next as next to node's parent*/
	}
}
