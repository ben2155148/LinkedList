# compiler
CC = g++

# compiler flags
# -g (adds debugging information to the exe file)
# -Wall (used to turn on most compiler warnings)
CFLAGS = -g -Wall 

# build target
TARGET = LinkedList

all: $(TARGET)

$(TARGET): $(TARGET).cpp
			$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp

clean: 
			$(RM) $(TARGET)