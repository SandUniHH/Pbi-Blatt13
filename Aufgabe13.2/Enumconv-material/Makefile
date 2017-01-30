CC?=clang
CFLAGS=-O3 -Wall -Werror
LD=${CC}

# possibly modify the path to the script generating the code for each
ENUMCONVPATH=../enum_conv.rb

all:enumconv.x

enumconv.c:${ENUMCONVPATH} gt_enums.c
	${ENUMCONVPATH} gt_enums.c > $@

enumconv.x:enumconv.o enumconv-mn.o
	${LD} ${LDFLAGS} -o $@ enumconv.o enumconv-mn.o

enumconv.c:enumconv.h

enumconv-mn.c:enumconv.h

test:enumconv.x
	./enumconv.x

.PHONY:clean
clean:
	${RM} *.[ox] enumconv.c
