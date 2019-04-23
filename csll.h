
#ifndef __CSLL_H
#define __CSLL_H

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/* Development-Error-Trace, 1 to ernable, 0 to disable */
#define CSLL_DET_ENABLED 1

typedef struct {
	csll_t     *next;
} csll_t;

int csll_add_node (csll_t *new, csll_t *node);
void csll_del_node (csll_t *node);

#endif /*__CSLL_H*/
