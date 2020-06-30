mkfile_path := $(dir $(lastword $(MAKEFILE_LIST)))

APPL_COBJS += RunControl.o ColorDetection.o
APPL_LIBS += -lm


