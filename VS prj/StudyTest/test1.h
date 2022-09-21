#ifndef __TEST1_H__
#define __TEST1_H__
#include <stdint.h>



typedef struct {
	uint32_t sys1 : 1;    /* bit[0] */
	uint32_t sys2 : 2;    /* bit[2:1] */
	uint32_t sys3 : 1;    /* bit[3] */
	uint32_t sys4 : 2;    /* bit[5:4] */
	uint32_t sys5 : 1;    /* bit[6] */
	uint32_t sys6 : 3;    /* bit[9:7] */
	uint32_t sys7 : 22;    /* bit[31:10] */
	uint32_t sys8 : 10;    /* bit[41:32] */
}sysStatus;




#endif