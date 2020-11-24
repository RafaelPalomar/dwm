#ifndef __ARG_H_
#define __ARG_H_

typedef union {
	int i;
	unsigned int ui;
	float f;
	const void *v;
} Arg;


#endif // __ARG_H_
