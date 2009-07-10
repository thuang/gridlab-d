
#ifndef _ENDUSE_H
#define _ENDUSE_H

#include "class.h"
#include "timestamp.h"

typedef struct s_enduse {
	loadshape *shape;
	complex power;
	complex energy;
	complex demand;
	double impedance_fraction;
	double current_fraction;
	double power_fraction;
	double power_factor;
	struct s_enduse *next;
} enduse;

int enduse_create(void *addr);
int enduse_init(enduse *e);
int enduse_initall(void);
TIMESTAMP enduse_sync(enduse *e, TIMESTAMP t1);
TIMESTAMP enduse_syncall(TIMESTAMP t1);
int convert_to_enduse(char *string, void *data, PROPERTY *prop);
int convert_from_enduse(char *string,int size,void *data, PROPERTY *prop);
int enduse_test(void);

#endif