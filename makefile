# Makefile for Robbie Robot Shop
CXXFLAGS += --std=c++11

all: main

debug: CXXFLAGS += -g
debug: main

rebuild: clean main

main: main.o head.o locomotor.o torso.o battery.o arm.o robot_part.o robot_model.o shop.o customer.o sales_associate.o order.o
		$(CXX) $(CXXFLAGS) main.o head.o locomotor.o torso.o battery.o arm.o robot_part.o robot_model.o shop.o -std=c++11 -I/usr/include/cairo -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng12 -I/usr/include/freetype2 -I/usr/include/cairo -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng12 -g -O2 -fvisibility-inlines-hidden -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_THREAD_SAFE -D_REENTRANT -o 'main' -Wl,-Bsymbolic-functions -lfltk -lX11
main.o: main.cpp head.h locomotor.h torso.h battery.h arm.h robot_part.h robot_model.h shop.h customer.h
		$(CXX) $(CXXFLAGS) -c -std=c++11 -I/usr/include/cairo -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng12 -I/usr/include/freetype2 -I/usr/include/cairo -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng12 -g -O2 -fvisibility-inlines-hidden -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_THREAD_SAFE -D_REENTRANT 'main.cpp' -Wl,-Bsymbolic-functions -lfltk -lX11
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
sales_associate.o: sales_associate.cpp sales_associate.h
		$(CXX) $(CXXFLAGS) -c sales_associate.cpp
order.o: order.cpp order.h customer.h sales_associate.h robot_model.h
		$(CXX) $(CXXFLAGS) -c order.cpp
clean:
	-rm -f *.o *~ a.out
