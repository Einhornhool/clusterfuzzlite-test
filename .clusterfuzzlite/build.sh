#!/bin/bash -eu
$CXX $CXXFLAGS -I$SRC/src/ $SRC/test_libfuzzer/fuzz_libfuzzer.cpp $SRC/src/bad_code.cpp -o $OUT/fuzz_badcode $LIB_FUZZING_ENGINE