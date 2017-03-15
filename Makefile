main: bin/obj/zoo/Zoo.o bin/obj/zoo/zoo_driver.o bin/obj/driver/driver.o bin/obj/main.o bin/obj/renders/cell.o bin/obj/renders/cage/cage.o bin/obj/renders/renderable.o bin/obj/renders/animals/flying_animal.o bin/obj/renders/animals/diet/omnivore.o bin/obj/renders/animals/diet/herbivore.o bin/obj/renders/animals/diet/carnivore.o bin/obj/renders/animals/species.o bin/obj/renders/animals/taxonomy/aves.o bin/obj/renders/animals/taxonomy/amphibia.o bin/obj/renders/animals/taxonomy/pisces.o bin/obj/renders/animals/taxonomy/reptilia.o bin/obj/renders/animals/taxonomy/vertebrate.o bin/obj/renders/animals/taxonomy/mammalia.o bin/obj/renders/animals/water_animal.o bin/obj/renders/animals/land_animal.o bin/obj/renders/animals/animal.o bin/obj/renders/habitats/air_habitat.o bin/obj/renders/habitats/habitat.o bin/obj/renders/habitats/land_habitat.o bin/obj/renders/habitats/water_habitat.o bin/obj/renders/facilities/restaurant/restaurant.o bin/obj/renders/facilities/facility.o bin/obj/renders/facilities/park/park.o bin/obj/renders/facilities/road/entrance/entrance.o bin/obj/renders/facilities/road/road.o bin/obj/renders/facilities/road/exit/exit.o bin/obj/other/color.o
	@echo "Linking ..."
	@g++ bin/obj/zoo/Zoo.o bin/obj/zoo/zoo_driver.o bin/obj/driver/driver.o bin/obj/main.o bin/obj/renders/cell.o bin/obj/renders/cage/cage.o bin/obj/renders/renderable.o bin/obj/renders/animals/flying_animal.o bin/obj/renders/animals/diet/omnivore.o bin/obj/renders/animals/diet/herbivore.o bin/obj/renders/animals/diet/carnivore.o bin/obj/renders/animals/species.o bin/obj/renders/animals/taxonomy/aves.o bin/obj/renders/animals/taxonomy/amphibia.o bin/obj/renders/animals/taxonomy/pisces.o bin/obj/renders/animals/taxonomy/reptilia.o bin/obj/renders/animals/taxonomy/vertebrate.o bin/obj/renders/animals/taxonomy/mammalia.o bin/obj/renders/animals/water_animal.o bin/obj/renders/animals/land_animal.o bin/obj/renders/animals/animal.o bin/obj/renders/habitats/air_habitat.o bin/obj/renders/habitats/habitat.o bin/obj/renders/habitats/land_habitat.o bin/obj/renders/habitats/water_habitat.o bin/obj/renders/facilities/restaurant/restaurant.o bin/obj/renders/facilities/facility.o bin/obj/renders/facilities/park/park.o bin/obj/renders/facilities/road/entrance/entrance.o bin/obj/renders/facilities/road/road.o bin/obj/renders/facilities/road/exit/exit.o bin/obj/other/color.o -o main

bin/obj/zoo/Zoo.o: src/zoo/Zoo.cpp src/zoo/zoo.h
	@echo "Compiling zoo/Zoo.cpp ..."
	@g++ -c src/zoo/Zoo.cpp -o bin/obj/zoo/Zoo.o -std=c++11

bin/obj/zoo/zoo_driver.o: src/zoo/zoo_driver.cpp src/zoo/zoo.h
	@echo "Compiling zoo/zoo_driver.cpp ..."
	@g++ -c src/zoo/zoo_driver.cpp -o bin/obj/zoo/zoo_driver.o -std=c++11

bin/obj/driver/driver.o: src/driver/driver.cpp src/driver/driver.h
	@echo "Compiling driver/driver.cpp ..."
	@g++ -c src/driver/driver.cpp -o bin/obj/driver/driver.o -std=c++11

bin/obj/main.o: src/main.cpp src/driver/driver.h
	@echo "Compiling main.cpp ..."
	@g++ -c src/main.cpp -o bin/obj/main.o -std=c++11

bin/obj/renders/cell.o: src/renders/cell.cpp src/renders/cell.h
	@echo "Compiling renders/cell.cpp ..."
	@g++ -c src/renders/cell.cpp -o bin/obj/renders/cell.o -std=c++11

bin/obj/renders/cage/cage.o: src/renders/cage/cage.cpp src/renders/cage/cage.h
	@echo "Compiling renders/cage/cage.cpp ..."
	@g++ -c src/renders/cage/cage.cpp -o bin/obj/renders/cage/cage.o -std=c++11

bin/obj/renders/renderable.o: src/renders/renderable.cpp src/renders/renderable.h
	@echo "Compiling renders/renderable.cpp ..."
	@g++ -c src/renders/renderable.cpp -o bin/obj/renders/renderable.o -std=c++11

bin/obj/renders/animals/flying_animal.o: src/renders/animals/flying_animal.cpp src/renders/animals/flying_animal.h
	@echo "Compiling renders/animals/flying_animal.cpp ..."
	@g++ -c src/renders/animals/flying_animal.cpp -o bin/obj/renders/animals/flying_animal.o -std=c++11

bin/obj/renders/animals/diet/omnivore.o: src/renders/animals/diet/omnivore.cpp src/renders/animals/diet/omnivore.h
	@echo "Compiling renders/animals/diet/omnivore.cpp ..."
	@g++ -c src/renders/animals/diet/omnivore.cpp -o bin/obj/renders/animals/diet/omnivore.o -std=c++11

bin/obj/renders/animals/diet/herbivore.o: src/renders/animals/diet/herbivore.cpp src/renders/animals/diet/herbivore.h
	@echo "Compiling renders/animals/diet/herbivore.cpp ..."
	@g++ -c src/renders/animals/diet/herbivore.cpp -o bin/obj/renders/animals/diet/herbivore.o -std=c++11

bin/obj/renders/animals/diet/carnivore.o: src/renders/animals/diet/carnivore.cpp src/renders/animals/diet/carnivore.h
	@echo "Compiling renders/animals/diet/carnivore.cpp ..."
	@g++ -c src/renders/animals/diet/carnivore.cpp -o bin/obj/renders/animals/diet/carnivore.o -std=c++11

bin/obj/renders/animals/species.o: src/renders/animals/species.cpp src/renders/animals/species.h
	@echo "Compiling renders/animals/species.cpp ..."
	@g++ -c src/renders/animals/species.cpp -o bin/obj/renders/animals/species.o -std=c++11

bin/obj/renders/animals/taxonomy/aves.o: src/renders/animals/taxonomy/aves.cpp src/renders/animals/taxonomy/aves.h
	@echo "Compiling renders/animals/taxonomy/aves.cpp ..."
	@g++ -c src/renders/animals/taxonomy/aves.cpp -o bin/obj/renders/animals/taxonomy/aves.o -std=c++11

bin/obj/renders/animals/taxonomy/amphibia.o: src/renders/animals/taxonomy/amphibia.cpp src/renders/animals/taxonomy/amphibia.h
	@echo "Compiling renders/animals/taxonomy/amphibia.cpp ..."
	@g++ -c src/renders/animals/taxonomy/amphibia.cpp -o bin/obj/renders/animals/taxonomy/amphibia.o -std=c++11

bin/obj/renders/animals/taxonomy/pisces.o: src/renders/animals/taxonomy/pisces.cpp src/renders/animals/taxonomy/pisces.h
	@echo "Compiling renders/animals/taxonomy/pisces.cpp ..."
	@g++ -c src/renders/animals/taxonomy/pisces.cpp -o bin/obj/renders/animals/taxonomy/pisces.o -std=c++11

bin/obj/renders/animals/taxonomy/reptilia.o: src/renders/animals/taxonomy/reptilia.cpp src/renders/animals/taxonomy/reptilia.h
	@echo "Compiling renders/animals/taxonomy/reptilia.cpp ..."
	@g++ -c src/renders/animals/taxonomy/reptilia.cpp -o bin/obj/renders/animals/taxonomy/reptilia.o -std=c++11

bin/obj/renders/animals/taxonomy/vertebrate.o: src/renders/animals/taxonomy/vertebrate.cpp src/renders/animals/taxonomy/vertebrate.h
	@echo "Compiling renders/animals/taxonomy/vertebrate.cpp ..."
	@g++ -c src/renders/animals/taxonomy/vertebrate.cpp -o bin/obj/renders/animals/taxonomy/vertebrate.o -std=c++11

bin/obj/renders/animals/taxonomy/mammalia.o: src/renders/animals/taxonomy/mammalia.cpp src/renders/animals/taxonomy/mammalia.h
	@echo "Compiling renders/animals/taxonomy/mammalia.cpp ..."
	@g++ -c src/renders/animals/taxonomy/mammalia.cpp -o bin/obj/renders/animals/taxonomy/mammalia.o -std=c++11

bin/obj/renders/animals/water_animal.o: src/renders/animals/water_animal.cpp src/renders/animals/water_animal.h
	@echo "Compiling renders/animals/water_animal.cpp ..."
	@g++ -c src/renders/animals/water_animal.cpp -o bin/obj/renders/animals/water_animal.o -std=c++11

bin/obj/renders/animals/land_animal.o: src/renders/animals/land_animal.cpp src/renders/animals/land_animal.h
	@echo "Compiling renders/animals/land_animal.cpp ..."
	@g++ -c src/renders/animals/land_animal.cpp -o bin/obj/renders/animals/land_animal.o -std=c++11

bin/obj/renders/animals/animal.o: src/renders/animals/animal.cpp src/renders/animals/animal.h
	@echo "Compiling renders/animals/animal.cpp ..."
	@g++ -c src/renders/animals/animal.cpp -o bin/obj/renders/animals/animal.o -std=c++11

bin/obj/renders/habitats/air_habitat.o: src/renders/habitats/air_habitat.cpp src/renders/habitats/air_habitat.h
	@echo "Compiling renders/habitats/air_habitat.cpp ..."
	@g++ -c src/renders/habitats/air_habitat.cpp -o bin/obj/renders/habitats/air_habitat.o -std=c++11

bin/obj/renders/habitats/habitat.o: src/renders/habitats/habitat.cpp src/renders/habitats/habitat.h
	@echo "Compiling renders/habitats/habitat.cpp ..."
	@g++ -c src/renders/habitats/habitat.cpp -o bin/obj/renders/habitats/habitat.o -std=c++11

bin/obj/renders/habitats/land_habitat.o: src/renders/habitats/land_habitat.cpp src/renders/habitats/land_habitat.h
	@echo "Compiling renders/habitats/land_habitat.cpp ..."
	@g++ -c src/renders/habitats/land_habitat.cpp -o bin/obj/renders/habitats/land_habitat.o -std=c++11

bin/obj/renders/habitats/water_habitat.o: src/renders/habitats/water_habitat.cpp src/renders/habitats/water_habitat.h
	@echo "Compiling renders/habitats/water_habitat.cpp ..."
	@g++ -c src/renders/habitats/water_habitat.cpp -o bin/obj/renders/habitats/water_habitat.o -std=c++11

bin/obj/renders/facilities/restaurant/restaurant.o: src/renders/facilities/restaurant/restaurant.cpp src/renders/facilities/restaurant/restaurant.h
	@echo "Compiling renders/facilities/restaurant/restaurant.cpp ..."
	@g++ -c src/renders/facilities/restaurant/restaurant.cpp -o bin/obj/renders/facilities/restaurant/restaurant.o -std=c++11

bin/obj/renders/facilities/facility.o: src/renders/facilities/facility.cpp src/renders/facilities/facility.h
	@echo "Compiling renders/facilities/facility.cpp ..."
	@g++ -c src/renders/facilities/facility.cpp -o bin/obj/renders/facilities/facility.o -std=c++11

bin/obj/renders/facilities/park/park.o: src/renders/facilities/park/park.cpp src/renders/facilities/park/park.h
	@echo "Compiling renders/facilities/park/park.cpp ..."
	@g++ -c src/renders/facilities/park/park.cpp -o bin/obj/renders/facilities/park/park.o -std=c++11

bin/obj/renders/facilities/road/entrance/entrance.o: src/renders/facilities/road/entrance/entrance.cpp src/renders/facilities/road/entrance/entrance.h
	@echo "Compiling renders/facilities/road/entrance/entrance.cpp ..."
	@g++ -c src/renders/facilities/road/entrance/entrance.cpp -o bin/obj/renders/facilities/road/entrance/entrance.o -std=c++11

bin/obj/renders/facilities/road/road.o: src/renders/facilities/road/road.cpp src/renders/facilities/road/road.h
	@echo "Compiling renders/facilities/road/road.cpp ..."
	@g++ -c src/renders/facilities/road/road.cpp -o bin/obj/renders/facilities/road/road.o -std=c++11

bin/obj/renders/facilities/road/exit/exit.o: src/renders/facilities/road/exit/exit.cpp src/renders/facilities/road/exit/exit.h
	@echo "Compiling renders/facilities/road/exit/exit.cpp ..."
	@g++ -c src/renders/facilities/road/exit/exit.cpp -o bin/obj/renders/facilities/road/exit/exit.o -std=c++11

bin/obj/other/color.o: src/other/color.cpp src/other/color.h
	@echo "Compiling other/color.cpp ..."
	@g++ -c src/other/color.cpp -o bin/obj/other/color.o -std=c++11

.PHONY: clean

clean:
	@echo "Removing object files ..."
	@rm -rf bin/obj
	@mkdir bin/obj
	@mkdir -p "bin/obj/zoo"
	@mkdir -p "bin/obj/driver"
	@mkdir -p "bin/obj/renders"
	@mkdir -p "bin/obj/renders/cage"
	@mkdir -p "bin/obj/renders/animals"
	@mkdir -p "bin/obj/renders/animals/diet"
	@mkdir -p "bin/obj/renders/animals/taxonomy"
	@mkdir -p "bin/obj/renders/habitats"
	@mkdir -p "bin/obj/renders/facilities"
	@mkdir -p "bin/obj/renders/facilities/restaurant"
	@mkdir -p "bin/obj/renders/facilities/park"
	@mkdir -p "bin/obj/renders/facilities/road"
	@mkdir -p "bin/obj/renders/facilities/road/entrance"
	@mkdir -p "bin/obj/renders/facilities/road/exit"
	@mkdir -p "bin/obj/other"

	@echo "Removing executable ..."
	@rm -rf bin/main