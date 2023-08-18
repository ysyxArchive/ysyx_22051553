CC = gcc
SOURCE_DIR := $(patsubst ./%,../%,$(VM_USER_DIR))


vpath %.c $(SOURCE_DIR) 
vpath %.cpp $(SOURCE_DIR) 
# 为.c和.cpp文件规定搜寻路径

C_SOURCES := $(foreach dir, $(SOURCE_DIR), $(wildcard $(dir)/*.c))
CPP_SOURCES := $(foreach dir, $(SOURCE_DIR), $(wildcard $(dir)/*.c))
C_OBJECTS := $(C_SOURCES:.c=.o)
CPP_OBJECTS := $(CPP_SOURCES:.cpp=.o)

CFLAGS += $(VM_USER_CFLAGS) $(VM_USER_LDLIBS)

%.o: %.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) $(OPT_FAST) $< -o $@

%.o: %.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<