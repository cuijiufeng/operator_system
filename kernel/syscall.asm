; 2020年08月22日 20/11/55
; 调用系统调用函数
;==================================================================================================

;==================================================================================================
NR_FORK		equ	0
;==================================================================================================

extern	findEmptyProcess
extern	copyProcess
global	fork
global	sysFork
;调用系统调用函数
;==================================================================================================
fork:
	mov eax, NR_FORK
	int 0x80
	ret
;==================================================================================================

;系统调用中断处理子函数
;==================================================================================================
sysFork:
	call findEmptyProcess
	cmp eax, -1
	je _1
	push eax			;进程槽位号
	call copyProcess
	add esp, 4
_1:
	ret
;==================================================================================================