#include <iostream>
#include <string>
#include <stdio.h>

#include "bad_code.h"

BadCode code;

int main(int argc, char* argv[])
{
    FILE *f;
    char buf[64];
    
    if(argc != 2){
      fprintf(stderr, "Must supply a text file\n");
      return -1;
    }
    f = fopen(argv[1], "r");
    if(f == NULL){
      fprintf(stderr, "Could not open %s\n", argv[1]);
      return -1;
    }
    if(fgets(buf, sizeof(buf), f) == NULL){
      fprintf(stderr, "Could not read from %s\n", argv[1]);
      return -1;
    }
    code.copy_buf_to_buf(argv[1], strlen(buf));

    return 0;
}
