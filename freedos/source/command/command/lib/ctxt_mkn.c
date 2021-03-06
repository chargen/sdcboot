/* $Id: ctxt_mkn.c,v 1.1 2001/04/12 00:33:53 skaus Exp $

	Create an item name.
*/

#include "../config.h"

#include <assert.h>
#include <stdio.h>

#include "../include/context.h"

void ctxtMkItemName(char * const name
	, const Context_Tag tag
	, const unsigned num)
{	assert(name);

	if(num)
		sprintf(name, "%c%04x", (unsigned char)tag, num);
	else {
		*name = (unsigned char)tag;
		name[1] = 0;
	}
}
