SRC = List.cpp Student.cpp main.cpp 
OBJ = List.o Student.o main.o
TARGET = main
FLAGS = -std=c++17

# Reglas
all: $(TARGET)

$(TARGET): $(OBJ)
	g++ $(FLAGS) $(OBJ) -o $(TARGET)

%.o: %.cpp
	g++ $(FLAGS) -c $< -o $@

clean:
	del -f *.o $(TARGET)
