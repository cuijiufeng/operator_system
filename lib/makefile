# 2020年07月19日 09/11/26
# lib
#==============================================================================
include	../makefile.head

LDFLAGS		+= -r
OBJS		= memlib.o klib.o

.PHONY : all clean
%.o : %.asm
	$(ASM) $(ASMFLAGS) -I$(IPATH) $< -o $@
%.o : %.c
	$(GCC) $(GCCFLAGS) -I$(IPATH) $< -o $@

all : lib.o

clean : 
	rm -rf $(OBJS) lib.o
	
lib.o : $(OBJS)
	$(LD) $(LDFLAGS) $^ -o $@

# 依赖
memlib.o : memlib.asm
klib.o : klib.asm