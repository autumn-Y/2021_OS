#include "types.h"
#include "defs.h"
#include "param.h"
#include "mmu.h"
#include "x86.h"
#include "stat.h"
#include "proc.h"


int
getppid() 
{
	struct proc* p=myproc()->parent;
	return p->pid;
}

int
sys_getppid(void)
{
	char *str;
	if(argstr(0, &str) <0)
		return -1;
	return getppid();
}
