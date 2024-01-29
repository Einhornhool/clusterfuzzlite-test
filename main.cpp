#include <iostream>
#include <string>

#include "bad_code.h"

BadCode code;

int main(int argc, char** argv)
{
    while(1) {
        code.copy_buf_to_buf(argv[1], *argv[2]);

    }
    return 0;
}
