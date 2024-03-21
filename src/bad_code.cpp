#include <cstring>
#include <iostream>

#include "bad_code.h"

void BadCode::copy_buf_to_buf(char *buf_in, size_t buf_in_size)
{
    // if (!buf_in || (buf_in_size > sizeof(_buf_loc))) {
    //     return;
    // }
    if (!buf_in) {
        return;
    }
    std::memcpy(_buf_loc, buf_in, buf_in_size);
    // std::cout << "Size: " << buf_in_size << " | Content: ";
    // for (size_t i = 0; i < buf_in_size; i++) {
    //     std::cout << _buf_loc[i];
    // }
    // std::cout << "\n";
}

int BadCode::dereference_pointer(int * value)
{
    return *value;
}
