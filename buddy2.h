#ifndef __BUDDY2_H__
#define __BUDDY2_H__

#include <stdlib.h>

struct buddy2;
struct buddy2* buddy2_new( int size );
void buddy2_destroy( struct buddy2* self );

int buddy2_alloc(struct buddy2* self, int size);
void buddy2_free(struct buddy2* self, int offset);

int buddy2_size(struct buddy2* self, int offset);
void buddy2_dump(struct buddy2* self);

#endif//__BUDDY2_H__
