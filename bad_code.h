#ifndef BAD_CODE_H
#define BAD_CODE_H

#include <string>

class BadCode {
    public:
        /**
         * @brief   Copys input buffer to private buffer without checking buffer sizes
         *          and prints contents of private buffer after copying.
        */
        void copy_buf_to_buf(char *buf_in, size_t buf_in_size);

        /**
         * @brief   Dereferences pointer without checking for NULL and returns the value
        */
        int dereference_pointer(int * value);

    private:
        char _buf_loc[25];
};

#endif /* BAD_CODE_H */