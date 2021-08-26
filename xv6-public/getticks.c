#include "types.h"
#include "defs.h"
#include "param.h"
#include "mmu.h"
#include "x86.h"
#include "stat.h"
#include "proc.h"


int
getticks(void)
{	
	struct proc *p=myproc();
	return p->crtime;
}

int
sys_getticks(void)
{
	char *str;
	if(argstr(0, &str) <0)
		return -1;
	return getppid();
}