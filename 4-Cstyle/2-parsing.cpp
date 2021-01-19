#include <iostream>
#include <string>

int main (int argc, char**argv) {

  int x = 1;
  x = std::atoi(argv[1]);
  std::cout<<"atoi: "<<x<<"\n";

  if (errno)
    std::cout<<"something bad happened\n";
  //how to differenciate 0 and "error" ? use strtol

  // Here is what the usage is in the man page:
  //

  // #include <stdlib.h>
  // #include <limits.h>
  // #include <stdio.h>
  // #include <errno.h>
  
  //   int
  //     main(int argc, char *argv[])
  //   {
  //     int base;
  //     char *endptr, *str;
  //     long val;
  
  //     if (argc < 2) {
  //       fprintf(stderr, "Usage: %s str [base]\n", argv[0]);
  //       exit(EXIT_FAILURE);
  //     }
  
  //     str = argv[1];
  //     base = (argc > 2) ? atoi(argv[2]) : 10;
  
  //     errno = 0;    /* To distinguish success/failure after call */
  //     val = strtol(str, &endptr, base);
  
  //     /* Check for various possible errors */
  
  //     if ((errno == ERANGE && (val == LONG_MAX || val == LONG_MIN))
  // 	|| (errno != 0 && val == 0)) {
  //       perror("strtol");
  //       exit(EXIT_FAILURE);
  //     }
  
  //     if (endptr == str) {
  //       fprintf(stderr, "No digits were found\n");
  //       exit(EXIT_FAILURE);
  //     }
  
  //     /* If we got here, strtol() successfully parsed a number */
  
  //     printf("strtol() returned %ld\n", val);
  
  //     if (*endptr != '\0')        /* Not necessarily an error... */
  //       printf("Further characters after number: %s\n", endptr);
  
  //     exit(EXIT_SUCCESS);
  //   }


  // or use strings
  std::string s = argv[1];

  std::cout<<std::stoi(s)<<"\n";

  //there are variants for other types: std::stoi, std::stol, std::stoll, std::stof, std::stod, std::stold/
  //
  //you can convert types back to strings using std::to_string
  
  //for complex parsing/formatting, check std::stringstream https://en.cppreference.com/w/cpp/io/basic_stringstream
  //
  // You will like that MUCH better than printf/scanf
  
  return 0;
}
