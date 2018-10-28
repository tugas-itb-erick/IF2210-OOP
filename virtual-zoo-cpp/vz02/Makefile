main: bin/obj/cage/cage.o bin/obj/animal/animal.o bin/obj/zoo/zoo.o bin/obj/main.o bin/obj/cell/cell.o
	@echo "Linking ..."
	@g++ bin/obj/cage/cage.o bin/obj/animal/animal.o bin/obj/zoo/zoo.o bin/obj/main.o bin/obj/cell/cell.o -o main

bin/obj/cage/cage.o: src/cage/cage.cpp src/other/other.h src/animal/animal.h src/cage/cage.h
	@echo "Compiling cage/cage.cpp ..."
	@g++ -c src/cage/cage.cpp -o bin/obj/cage/cage.o -std=c++11

bin/obj/animal/animal.o: src/animal/animal.cpp src/animal/animal.h
	@echo "Compiling animal/animal.cpp ..."
	@g++ -c src/animal/animal.cpp -o bin/obj/animal/animal.o -std=c++11

bin/obj/zoo/zoo.o: src/zoo/zoo.cpp src/zoo/zoo.h
	@echo "Compiling zoo/zoo.cpp ..."
	@g++ -c src/zoo/zoo.cpp -o bin/obj/zoo/zoo.o -std=c++11

bin/obj/main.o: src/main.cpp src/zoo/zoo.h src/cage/cage.h src/cell/cell.h src/animal/animal.h
	@echo "Compiling main.cpp ..."
	@g++ -c src/main.cpp -o bin/obj/main.o -std=c++11

bin/obj/cell/cell.o: src/cell/cell.cpp src/cell/cell.h
	@echo "Compiling cell/cell.cpp ..."
	@g++ -c src/cell/cell.cpp -o bin/obj/cell/cell.o -std=c++11

.PHONY: clean

clean:
	@echo "Removing object files ..."
	@rm -rf bin/obj
	@mkdir bin/obj
	@mkdir -p "bin/obj/cage"
	@mkdir -p "bin/obj/animal"
	@mkdir -p "bin/obj/zoo"
	@mkdir -p "bin/obj/cell"
	@mkdir -p "bin/obj/other"

	@echo "Removing executable ..."
	@rm -rf main