# Compiler
CC = gcc

# CFLAGS to notify all warnings and debugging input
CFLAGS = -Wall -g

#Names the final executable, will create and append .exe
TARGET = ptr

#finds all files with a .c extension in the current directory and assigns them to SOURCES
SOURCES = $(wildcard *.c)

#Transforms the list of .c files into a list of .o
OBJECTS = $(patsubst %.c,%.o,$(SOURCES))

#default target
all: $(TARGET)

#rule to compile .c files into .o files
 %.o: %.c
#$(OBJECTS): $(SOURCES)
	$(CC) $(CFLAGS) -c $< -o $@

#rule to link .o files into the final executable
$(TARGET): $(OBJECTS)
	$(CC) $^ -o $@

#rule to clean up
clean:
	-if exist *.o del $(OBJECTS)
	-if exist $(TARGET).exe del $(TARGET).exe	
.PHONY: all clean