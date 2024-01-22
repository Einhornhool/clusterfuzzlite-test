#include <unistd.h>
#include <cstdint>

#include "bad_code.h"

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size) {
    BadCode code;

    code.copy_buf_to_buf((char *)Data, Size);

    return 0;
}
