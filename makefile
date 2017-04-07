# Makefile for Robbie Robot Shop
CXXFLAGS += --std=c++11

all: main

debug: CXXFLAGS += -g
debug: main

rebuild: clean main

main: main.o head.o locomotor.o torso.o battery.o arm.o robot_part.o robot_model.o shop.o customer.o
		$(CXX) $(CXXFLAGS) main.o head.o locomotor.o torso.o battery.o arm.o robot_part.o robot_model.o shop.o
main.o: main.cpp head.h locomotor.h torso.h battery.h arm.h robot_part.h robot_model.h shop.h customer.h
		$(CXX) $(CXXFLAGS) -c main.cpp
head.o: head.cpp head.h robot_part.h
		$(CXX) $(CXXFLAGS) -c head.cpp
locomotor.o: locomotor.cpp locomotor.h robot_part.h
		$(CXX) $(CXXFLAGS) -c locomotor.cpp
torso.o: torso.cpp torso.h robot_part.h
		$(CXX) $(CXXFLAGS) -c torso.cpp
battery.o: battery.cpp battery.h robot_part.h
		$(CXX) $(CXXFLAGS) -c battery.cpp
arm.o: arm.cpp arm.h robot_part.h
		$(CXX) $(CXXFLAGS) -c arm.cpp
robot_part.o: robot_part.cpp robot_part.h
		$(CXX) $(CXXFLAGS) -c robot_part.cpp
robot_model.o: robot_model.cpp robot_model.h robot_part.h
		$(CXX) $(CXXFLAGS) -c robot_model.cpp
shop.o: shop.cpp shop.h robot_part.h robot_model.h robot_model.cpp robot_model.h
		$(CXX) $(CXXFLAGS) -c shop.cpp
customer.o: customer.cpp customer.h
		$(CXX) $(CXXFLAGS) -c customer.cpp
clean:
	-rm -f *.o *~ a.out
