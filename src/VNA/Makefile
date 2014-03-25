export PRODIR = ../../..

export THIRDPARTYDIR = E:/workspace/ThirdParty

BINDIR = ../../bin/

OBJSDIR = ../../objs/

OBJS =		

LIBS =

ALL_TARGET = all	RS
CLEAN_TARGET = clean cleanRS
	
.PHONY:		 $(ALL_TARGET) $(CLEAN_TARGET)

all:	RS

RS:	
	(cd ./RS; make all)

RS:	cleanRS

clean:	cleanRS

cleanRS:
	(cd ./RS; make clean)