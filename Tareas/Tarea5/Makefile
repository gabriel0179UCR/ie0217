# Flags
CXX = g++
CXXFLAGS = -Wall -std=c++11
LDFLAGS = -lstdc++fs

# Directorios
SRC_DIR = src
BIN_DIR = bin

# Archivos
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS = $(SOURCES:$(SRC_DIR)/%.cpp=$(BIN_DIR)/%.exe)
EXECUTABLE = $(BIN_DIR)/tarea5.exe

# Target que se encarga de eliminar los binarios
.PHONY: clean
clean:
	del $(BIN_DIR)

# Target que se encarga de compilar el programa
.PHONY: build
build: $(EXECUTABLE)
$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@ $(LDFLAGS)

$(BIN_DIR)/%.exe: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Target que se encarga de correr el programa
.PHONY: run
run: $(EXECUTABLE)
	$(EXECUTABLE)

# Target que se encarga de compilar y correr el programa
.PHONY: all
all: build run
	build
	run
