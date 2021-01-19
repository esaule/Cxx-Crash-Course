#include <iostream>
#include <unistd.h>
#include <cstring>
#include <stdlib.h>
#include <vector>

int main () {

  //
  char const * msg = "something";

  write(1, msg, 9); //that 1 is stdout

  write(1, "\n", 1);
  
  write(1, msg, strlen(msg));

  write(1, "\n", 1);
  
  //write is:
  //ssize_t write(int fd, const void *buf, size_t count); 
  // interpret errors out of return value and errno
  //
  //read works similarly: ssize_t read(int fd, void *buf, size_t count);
  
  //void* + size is a common way to represent things in C style interfaces
  
  char* buffer;
  int errcode = posix_memalign((void**)&buffer, 32, 1024); //allocate 1024 bytes, aligned on 32 byte boundaries

  //posix_memalign is:
  //  int posix_memalign(void **memptr, size_t alignment, size_t size);

  free(buffer);

  //serializing a c++ object through a C interface can be quite annoying:
  //but that is the basic building block of lots of interactions with external libraries.
  
  struct something {
    int x;
    std::vector<double> v;
  };

  something s;
  s.x = 12;
  s.v.push_back(12.3);
  s.v.push_back(14.3);

  //need to encode x, the size of the vector, and the values inside
  size_t totallength = sizeof(s.x) + sizeof(size_t) + s.v.size()*sizeof(s.v[0]);

  buffer = (char*)malloc(totallength);
  {
    char* lbuffer = buffer;
    memcpy(lbuffer, &(s.x), sizeof(s.x));
    lbuffer += sizeof(s.x);
    auto si = s.v.size();
    memcpy(lbuffer, &(si), sizeof(si));
    lbuffer += sizeof(si);
    memcpy(lbuffer, &(s.v[0]), s.v.size()*sizeof(s.v[0]));    
  }
  free(buffer);

  write(2, buffer, totallength);
  
  
  return 0;
}
