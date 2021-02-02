CXXFLAGS=-std=c++17
CXXFLAGSD=$(CXXFLAGS) -g

1-segfault:

1-segfault-debug: 1-segfault.cpp
	$(CXX) $(CXXFLAGSD) -o $@ $<

2-memleak-debug: 2-memleak.cpp
	$(CXX) $(CXXFLAGSD) -o $@ $<

3-uninitializedjump-debug: 3-uninitializedjump.cpp
	$(CXX) $(CXXFLAGSD) -o $@ $<

4-offbyone-debug: 4-offbyone.cpp
	$(CXX) $(CXXFLAGSD) -o $@ $<

5-useafterfree-debug: 5-useafterfree.cpp
	$(CXX) $(CXXFLAGSD) -o $@ $<

