/**
 * 2020年08月22日 18/18/57
 * 系统调用头文件
 */
#ifndef _OS_SYSCALL_H_
#define	_OS_SYSCALL_H_

 //==================================================================================================
 //系统调用号
#define	NR_FORK		0
#define	NR_PAUSE	1
#define	NR_SETUP	2
#define	NR_WRITE	3
//;==================================================================================================

//---------------------------------------------------------------------------------------
//系统调用中断处理子程序
PUBLIC	t_32	sysFork();
PUBLIC	t_32	sysPause();
PUBLIC	t_32	sysSetup(t_8* drv_info);
PUBLIC	t_32	sysWrite(u_32 fd, const char* buf, u_32 count);
//---------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------
EXTERN	T_PF_SYS_CALL	SYS_CALL_TABLE[];	//函数指针数组，系统调用中断处理子程序
//---------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------
//系统调用中断处理程序
PUBLIC	t_32	sysCall();
//---------------------------------------------------------------------------------------

#endif // !_OS_SYSCALL_H_
