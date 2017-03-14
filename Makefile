bin/main: bin/obj/zoo/Zoo.o bin/obj/zoo/Zoo_driver.o bin/obj/driver/Driver.o bin/obj/Main.o bin/obj/renders/cage/Cage.o bin/obj/renders/animals/LandAnimal.o bin/obj/renders/animals/Animal.o bin/obj/renders/animals/diet/Herbivore.o bin/obj/renders/animals/diet/Carnivore.o bin/obj/renders/animals/diet/Omnivore.o bin/obj/renders/animals/taxonomy/Aves.o bin/obj/renders/animals/taxonomy/Mammalia.o bin/obj/renders/animals/taxonomy/Amphibia.o bin/obj/renders/animals/taxonomy/Pisces.o bin/obj/renders/animals/taxonomy/Vertebrate.o bin/obj/renders/animals/taxonomy/Reptilia.o bin/obj/renders/animals/Species.o bin/obj/renders/animals/WaterAnimal.o bin/obj/renders/animals/FlyingAnimal.o bin/obj/renders/Cell.o bin/obj/renders/Renderable.o bin/obj/renders/habitats/AirHabitat.o bin/obj/renders/habitats/LandHabitat.o bin/obj/renders/habitats/WaterHabitat.o bin/obj/renders/habitats/Habitat.o bin/obj/renders/facilities/restaurant/Restaurant.o bin/obj/renders/facilities/park/Park.o bin/obj/renders/facilities/road/entrance/Entrance.o bin/obj/renders/facilities/road/Road.o bin/obj/renders/facilities/road/exit/Exit.o bin/obj/renders/facilities/Facility.o bin/obj/other/Color.o
	@echo "Linking ..."
	@g++ bin/obj/zoo/Zoo.o bin/obj/zoo/Zoo_driver.o bin/obj/driver/Driver.o bin/obj/Main.o bin/obj/renders/cage/Cage.o bin/obj/renders/animals/LandAnimal.o bin/obj/renders/animals/Animal.o bin/obj/renders/animals/diet/Herbivore.o bin/obj/renders/animals/diet/Carnivore.o bin/obj/renders/animals/diet/Omnivore.o bin/obj/renders/animals/taxonomy/Aves.o bin/obj/renders/animals/taxonomy/Mammalia.o bin/obj/renders/animals/taxonomy/Amphibia.o bin/obj/renders/animals/taxonomy/Pisces.o bin/obj/renders/animals/taxonomy/Vertebrate.o bin/obj/renders/animals/taxonomy/Reptilia.o bin/obj/renders/animals/Species.o bin/obj/renders/animals/WaterAnimal.o bin/obj/renders/animals/FlyingAnimal.o bin/obj/renders/Cell.o bin/obj/renders/Renderable.o bin/obj/renders/habitats/AirHabitat.o bin/obj/renders/habitats/LandHabitat.o bin/obj/renders/habitats/WaterHabitat.o bin/obj/renders/habitats/Habitat.o bin/obj/renders/facilities/restaurant/Restaurant.o bin/obj/renders/facilities/park/Park.o bin/obj/renders/facilities/road/entrance/Entrance.o bin/obj/renders/facilities/road/Road.o bin/obj/renders/facilities/road/exit/Exit.o bin/obj/renders/facilities/Facility.o bin/obj/other/Color.o -o bin/main

bin/obj/zoo/Zoo.o: src/zoo/Zoo.cpp src/zoo/Zoo.h
	@echo "Compiling zoo/Zoo.cpp ..."
	@g++ -c src/zoo/Zoo.cpp -o bin/obj/zoo/Zoo.o -std=c++11

bin/obj/zoo/Zoo_driver.o: src/zoo/Zoo_driver.cpp src/zoo/Zoo.h
	@echo "Compiling zoo/Zoo_driver.cpp ..."
	@g++ -c src/zoo/Zoo_driver.cpp -o bin/obj/zoo/Zoo_driver.o -std=c++11

bin/obj/driver/Driver.o: src/driver/Driver.cpp src/driver/Driver.h
	@echo "Compiling driver/Driver.cpp ..."
	@g++ -c src/driver/Driver.cpp -o bin/obj/driver/Driver.o -std=c++11

bin/obj/Main.o: src/Main.cpp src/driver/Driver.h
	@echo "Compiling Main.cpp ..."
	@g++ -c src/Main.cpp -o bin/obj/Main.o -std=c++11

bin/obj/renders/cage/Cage.o: src/renders/cage/Cage.cpp src/renders/cage/Cage.h
	@echo "Compiling renders/cage/Cage.cpp ..."
	@g++ -c src/renders/cage/Cage.cpp -o bin/obj/renders/cage/Cage.o -std=c++11

bin/obj/renders/animals/LandAnimal.o: src/renders/animals/LandAnimal.cpp src/renders/animals/LandAnimal.h
	@echo "Compiling renders/animals/LandAnimal.cpp ..."
	@g++ -c src/renders/animals/LandAnimal.cpp -o bin/obj/renders/animals/LandAnimal.o -std=c++11

bin/obj/renders/animals/Animal.o: src/renders/animals/Animal.cpp src/renders/animals/Animal.h
	@echo "Compiling renders/animals/Animal.cpp ..."
	@g++ -c src/renders/animals/Animal.cpp -o bin/obj/renders/animals/Animal.o -std=c++11

bin/obj/renders/animals/diet/Herbivore.o: src/renders/animals/diet/Herbivore.cpp src/renders/animals/diet/Herbivore.h
	@echo "Compiling renders/animals/diet/Herbivore.cpp ..."
	@g++ -c src/renders/animals/diet/Herbivore.cpp -o bin/obj/renders/animals/diet/Herbivore.o -std=c++11

bin/obj/renders/animals/diet/Carnivore.o: src/renders/animals/diet/Carnivore.cpp src/renders/animals/diet/Carnivore.h
	@echo "Compiling renders/animals/diet/Carnivore.cpp ..."
	@g++ -c src/renders/animals/diet/Carnivore.cpp -o bin/obj/renders/animals/diet/Carnivore.o -std=c++11

bin/obj/renders/animals/diet/Omnivore.o: src/renders/animals/diet/Omnivore.cpp src/renders/animals/diet/Omnivore.h
	@echo "Compiling renders/animals/diet/Omnivore.cpp ..."
	@g++ -c src/renders/animals/diet/Omnivore.cpp -o bin/obj/renders/animals/diet/Omnivore.o -std=c++11

bin/obj/renders/animals/taxonomy/Aves.o: src/renders/animals/taxonomy/Aves.cpp src/renders/animals/taxonomy/Aves.h
	@echo "Compiling renders/animals/taxonomy/Aves.cpp ..."
	@g++ -c src/renders/animals/taxonomy/Aves.cpp -o bin/obj/renders/animals/taxonomy/Aves.o -std=c++11

bin/obj/renders/animals/taxonomy/Mammalia.o: src/renders/animals/taxonomy/Mammalia.cpp src/renders/animals/taxonomy/Mammalia.h
	@echo "Compiling renders/animals/taxonomy/Mammalia.cpp ..."
	@g++ -c src/renders/animals/taxonomy/Mammalia.cpp -o bin/obj/renders/animals/taxonomy/Mammalia.o -std=c++11

bin/obj/renders/animals/taxonomy/Amphibia.o: src/renders/animals/taxonomy/Amphibia.cpp src/renders/animals/taxonomy/Amphibia.h
	@echo "Compiling renders/animals/taxonomy/Amphibia.cpp ..."
	@g++ -c src/renders/animals/taxonomy/Amphibia.cpp -o bin/obj/renders/animals/taxonomy/Amphibia.o -std=c++11

bin/obj/renders/animals/taxonomy/Pisces.o: src/renders/animals/taxonomy/Pisces.cpp src/renders/animals/taxonomy/Pisces.h
	@echo "Compiling renders/animals/taxonomy/Pisces.cpp ..."
	@g++ -c src/renders/animals/taxonomy/Pisces.cpp -o bin/obj/renders/animals/taxonomy/Pisces.o -std=c++11

bin/obj/renders/animals/taxonomy/Vertebrate.o: src/renders/animals/taxonomy/Vertebrate.cpp src/renders/animals/taxonomy/Vertebrate.h
	@echo "Compiling renders/animals/taxonomy/Vertebrate.cpp ..."
	@g++ -c src/renders/animals/taxonomy/Vertebrate.cpp -o bin/obj/renders/animals/taxonomy/Vertebrate.o -std=c++11

bin/obj/renders/animals/taxonomy/Reptilia.o: src/renders/animals/taxonomy/Reptilia.cpp src/renders/animals/taxonomy/Reptilia.h
	@echo "Compiling renders/animals/taxonomy/Reptilia.cpp ..."
	@g++ -c src/renders/animals/taxonomy/Reptilia.cpp -o bin/obj/renders/animals/taxonomy/Reptilia.o -std=c++11

bin/obj/renders/animals/Species.o: src/renders/animals/Species.cpp src/renders/animals/Species.h
	@echo "Compiling renders/animals/Species.cpp ..."
	@g++ -c src/renders/animals/Species.cpp -o bin/obj/renders/animals/Species.o -std=c++11

bin/obj/renders/animals/WaterAnimal.o: src/renders/animals/WaterAnimal.cpp src/renders/animals/WaterAnimal.h
	@echo "Compiling renders/animals/WaterAnimal.cpp ..."
	@g++ -c src/renders/animals/WaterAnimal.cpp -o bin/obj/renders/animals/WaterAnimal.o -std=c++11

bin/obj/renders/animals/FlyingAnimal.o: src/renders/animals/FlyingAnimal.cpp src/renders/animals/FlyingAnimal.h
	@echo "Compiling renders/animals/FlyingAnimal.cpp ..."
	@g++ -c src/renders/animals/FlyingAnimal.cpp -o bin/obj/renders/animals/FlyingAnimal.o -std=c++11

bin/obj/renders/Cell.o: src/renders/Cell.cpp src/renders/Cell.h
	@echo "Compiling renders/Cell.cpp ..."
	@g++ -c src/renders/Cell.cpp -o bin/obj/renders/Cell.o -std=c++11

bin/obj/renders/Renderable.o: src/renders/Renderable.cpp src/renders/Renderable.h
	@echo "Compiling renders/Renderable.cpp ..."
	@g++ -c src/renders/Renderable.cpp -o bin/obj/renders/Renderable.o -std=c++11

bin/obj/renders/habitats/AirHabitat.o: src/renders/habitats/AirHabitat.cpp src/renders/habitats/AirHabitat.h
	@echo "Compiling renders/habitats/AirHabitat.cpp ..."
	@g++ -c src/renders/habitats/AirHabitat.cpp -o bin/obj/renders/habitats/AirHabitat.o -std=c++11

bin/obj/renders/habitats/LandHabitat.o: src/renders/habitats/LandHabitat.cpp src/renders/habitats/LandHabitat.h
	@echo "Compiling renders/habitats/LandHabitat.cpp ..."
	@g++ -c src/renders/habitats/LandHabitat.cpp -o bin/obj/renders/habitats/LandHabitat.o -std=c++11

bin/obj/renders/habitats/WaterHabitat.o: src/renders/habitats/WaterHabitat.cpp src/renders/habitats/WaterHabitat.h
	@echo "Compiling renders/habitats/WaterHabitat.cpp ..."
	@g++ -c src/renders/habitats/WaterHabitat.cpp -o bin/obj/renders/habitats/WaterHabitat.o -std=c++11

bin/obj/renders/habitats/Habitat.o: src/renders/habitats/Habitat.cpp src/renders/habitats/Habitat.h
	@echo "Compiling renders/habitats/Habitat.cpp ..."
	@g++ -c src/renders/habitats/Habitat.cpp -o bin/obj/renders/habitats/Habitat.o -std=c++11

bin/obj/renders/facilities/restaurant/Restaurant.o: src/renders/facilities/restaurant/Restaurant.cpp src/renders/facilities/restaurant/Restaurant.h
	@echo "Compiling renders/facilities/restaurant/Restaurant.cpp ..."
	@g++ -c src/renders/facilities/restaurant/Restaurant.cpp -o bin/obj/renders/facilities/restaurant/Restaurant.o -std=c++11

bin/obj/renders/facilities/park/Park.o: src/renders/facilities/park/Park.cpp src/renders/facilities/park/Park.h
	@echo "Compiling renders/facilities/park/Park.cpp ..."
	@g++ -c src/renders/facilities/park/Park.cpp -o bin/obj/renders/facilities/park/Park.o -std=c++11

bin/obj/renders/facilities/road/entrance/Entrance.o: src/renders/facilities/road/entrance/Entrance.cpp src/renders/facilities/road/entrance/Entrance.h
	@echo "Compiling renders/facilities/road/entrance/Entrance.cpp ..."
	@g++ -c src/renders/facilities/road/entrance/Entrance.cpp -o bin/obj/renders/facilities/road/entrance/Entrance.o -std=c++11

bin/obj/renders/facilities/road/Road.o: src/renders/facilities/road/Road.cpp src/renders/facilities/road/Road.h
	@echo "Compiling renders/facilities/road/Road.cpp ..."
	@g++ -c src/renders/facilities/road/Road.cpp -o bin/obj/renders/facilities/road/Road.o -std=c++11

bin/obj/renders/facilities/road/exit/Exit.o: src/renders/facilities/road/exit/Exit.cpp src/renders/facilities/road/exit/Exit.h
	@echo "Compiling renders/facilities/road/exit/Exit.cpp ..."
	@g++ -c src/renders/facilities/road/exit/Exit.cpp -o bin/obj/renders/facilities/road/exit/Exit.o -std=c++11

bin/obj/renders/facilities/Facility.o: src/renders/facilities/Facility.cpp src/renders/facilities/Facility.h
	@echo "Compiling renders/facilities/Facility.cpp ..."
	@g++ -c src/renders/facilities/Facility.cpp -o bin/obj/renders/facilities/Facility.o -std=c++11

bin/obj/other/Color.o: src/other/Color.cpp src/other/Color.h
	@echo "Compiling other/Color.cpp ..."
	@g++ -c src/other/Color.cpp -o bin/obj/other/Color.o -std=c++11

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