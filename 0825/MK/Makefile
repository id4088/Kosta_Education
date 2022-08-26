CC = gcc

# 링커 옵션
LDFLAGS =

# 헤더 및 소스 파일 디렉토리
SRC_DIR = /home/ubuntu/project/0825/DLLSH

# 오브젝트 파일 디렉토리
OBJ_DIR = /home/ubuntu/project/0825/DLLO

# 생성하고자 하는 실행 파일 이름
TARGET = DLLM

#MAKE 할 소스 파일들
#WILDCARD 로 SRC_DIR 에서 *.C 로 된 파일들 목록을 뽑아낸 뒤에
#NOTDIR 로 파일 이름만 뽑아낸다.
SRCS = $(notdir $(wildcard $(SRC_DIR)/*.c))

OBJS = $(SRCS:.c=.o)
DEPS = $(SRCS:.c=.d)

#OBJS 안의 object 파이들 이름 앞에 $(OBJ_DIR)/을 붙인다.
OBJECTS = $(patsubst %.o,$(OBJ_DIR)/%.o,$(OBJS))
DEPS = $(OBJECTS:.o=.d)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(CC) $(SRC_DIR) -c $< -o $@ -MD $(LDFLAGS)

$(TARGET) : $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET) $(LDFLAGS)

.PHONY: clean all
clean:
	rm -f $(OBJECTS) $(DEPS) $(TARGET)

-include $(DEPS)

