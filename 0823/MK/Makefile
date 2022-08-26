
CC = gcc

#링커 옵션
LDFLASGS =

#헤더파일 경로
 

# 소스 및 헤더 파일 디렉토리
SRC_DIR = /home/ubuntu/project/0823/ListSH

#오브젝트 파일 디렉토리
OBJ_DIR = /home/ubuntu/project/0823/ListO

#생성하고자 하는 실행 파일 이름
TARGET = mainList

#Make 할 소스 파일들
#wildcard 로 SRC_DIR에서 *.c로 된 파일들 목록을 뽑아낸 뒤에
#notdir 로 파일 이름만 뽑아낸다.
SRCS = $(notdir $(wildcard $(SRC_DIR)/*.c))

OBJS = $(SRCS:.c=.o)
DEPS = $(SRCS:.c=.d)

#DEBUGING
GTEST = /home/ubuntu/project/0823/MK/DEBUG/Main_Gtest.c

#OBJS 안의 object 파일들 이름 앞에 $OBJ_DIR/을 붙인다.
OBJECTS = $(patsubst %.o,$(OBJ_DIR)/%.o,$(OBJS))
DEPS = $(OBJECTS:.o=.d)

TARGET2 = mainGTEST

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(CC) $(SRC_DIR) -c $< -o $@ -MD $(LDFLAGS)

$(TARGET) : $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET) $(LDFLAGS)

$(TARGET2) : $(OBJECTS)
	$(CC) -O $(TARGET) $(OBJECTS) $(GTEST)

.PHONY: clean all
clean:
	rm -f $(OBJECTS) $(DEPS) $(TARGET)

-include $(DEPS)



