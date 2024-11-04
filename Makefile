SRC =  List.cpp Student.cpp main.cpp 
OBJ = List.o Student.o main.o
TARGET = main

# Reglas
all: $(TARGET)

$(TARGET): $(OBJ)
	g++ $(OBJ) -o $(TARGET)

%.o: %.cpp
	g++ -c $< -o $@

clean:
	del -f *.o $(TARGET)
