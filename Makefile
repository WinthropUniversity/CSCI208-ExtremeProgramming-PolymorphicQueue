# Make this the binary you want to compile!
TARGET=WhatIsThis

# Make env vars for the different directories we will use
OBJDIR=./obj
SRCDIR=./src
INCDIR=./inc
BINDIR=./bin

# Create file groups for each directory
SOURCES  := $(wildcard $(SRCDIR)/*.cc)
INCLUDES := $(wildcard $(SRCDIR)/*.h)
OBJECTS  := $(SOURCES:$(SRCDIR)/%.cc=$(OBJDIR)/%.o)


### --- Environmental Variables --- ###
CC=g++
CFLAGS=-I$(INCDIR)  -g
LDFLAGS=-lncurses -ggdb
LINKER=g++

# Explanation:
#   The "-I." flag says 'look for include files in .'
#   The "-lncurses" flag says to link with the system ncurses library
#   The "-g" and "-ggdb" flags are needed for using the GDB debugger


### --- Build Targets --- ###


# For every target, build using the rule pattern:
#  target:	object file set
$(BINDIR)/$(TARGET):	$(OBJECTS)
	$(LINKER) -o $@  $(OBJECTS) $(LDFLAGS)

# For every object file in the object file set, build using the rule pattern:
#    object file:	subst .o file for .c file with the same name
$(OBJECTS):	$(OBJDIR)/%.o : $(SRCDIR)/%.cc
	$(CC) $(CFLAGS)  -o $@  -c $<


# Use ".PHONY" so we don't confuse with a target named "all"
.PHONY: all
all:	$(BINDIR)/$(TARGET)


# Use ".PHONY" so we don't confuse with a target named "clean"
.PHONY:	clean
clean:
	rm -f $(OBJECTS)
	rm -f $(BINDIR)/$(TARGET)
	rm -rf docs/html
	rm -rf docs/latex

# Used to make documentation via Doxygen
.PHONY: docs
docs:
	doxygen doxygen.cfg
