/* NIM/Nama  : 13515057 / Erick Wijaya */
/* File      : Animal.h                */

#pragma once

class Animal {
public:
  Animal();
  Animal(const Animal&);
  virtual ~Animal();
  Animal& operator=(const Animal&);

  virtual void interact() = 0;

protected:
  string name;
};

class LandAnimal : public Animal {
public:
  LandAnimal();
  LandAnimal(const Animal&);
  virtual ~LandAnimal();
  LandAnimal& operator=(const LandAnimal&);

};

class WaterAnimal : public Animal {
public:
  WaterAnimal();
  WaterAnimal(const Animal&);
  virtual ~WaterAnimal();
  WaterAnimal& operator=(const WaterAnimal&);

};

class FlyingAnimal : public Animal {
public:
  FlyingAnimal();
  FlyingAnimal(const Animal&);
  virtual ~FlyingAnimal();
  FlyingAnimal& operator=(const FlyingAnimal&);

};
