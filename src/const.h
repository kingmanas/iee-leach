#ifndef INT_MAX
#define INT_MAX 0x7FFFFFFF
#endif
#ifndef LONG_MAX
#define LONG_MAX 0x7FFFFFFF
#endif
#ifdef BC_BASE_MAX
#undef BC_BASE_MAX
#undef BC_SCALE_MAX
#undef BC_STRING_MAX
#undef BC_DIM_MAX
#endif

#define BC_BASE_MAX INT_MAX
#define BC_SCALE_MAX INT_MAX
#define BC_STRING_MAX INT_MAX
#define BC_DIM_MAX 65535
#define NODE_SIZE 16
#define NODE_MASK 0xf
#define NODE_SHIFT 4
#define NODE_DEPTH 4

#define BC_LABEL_GROUP 64
#define BC_LABEL_LOG 6
#define BC_MAX_SEGS 16
#define BC_SEG_SIZE 1024
#define BC_SEG_LOG 10

#define MAX_STORE 32767
#define STORE_INCR 32

#define FALSE 0
#define TRUE 1

#define SIMPLE 0
#define ARRAY 1
#define FUNCT 2
#define FUNCTDEF 3

#define EXTERN extern
#ifdef __STDC__
#define CONST const
#define VOID void
#else
#define CONST
#define VOID
#endif