CXXFLAGS=-std=c++17

OBJS=main.o helper.o

main: $(OBJS)
	$(CXX) $(LDFLAGS) $(OBJS) -o $@

main_incorrect: main.o
	$(CXX) $(LDFLAGS) main.o -o $@


helper.after.cpp: helper.cpp
	$(CXX) $(CXXFLAGS) -E helper.cpp -o helper.after.cpp


main.S: main.cpp
	$(CXX) $(CXXFLAGS) -S -o main.S main.cpp
