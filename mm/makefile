# 2020��07��30�� 19/18/35
# �ڴ�
#==============================================================================
include	../makefile.head

LDFLAGS		+= -r
OBJS		= memory.o

.PHONY : all clean
%.o : %.asm
	$(ASM) $(ASMFLAGS) -I$(IPATH) $< -o $@
%.o : %.c
	$(GCC) $(GCCFLAGS) -I$(IPATH) $< -o $@

all : mm.o

clean : 
	rm -rf $(OBJS) mm.o
	
mm.o : $(OBJS)
	$(LD) $(LDFLAGS) $^ -o $@

# ����
memory.o : memory.c