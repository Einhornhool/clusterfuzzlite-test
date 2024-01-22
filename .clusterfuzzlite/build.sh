#!/bin/bash -eu
$CXX $CXXFLAGS $SRC/fuzz_libfuzzer.cpp $SRC/bad_code.cpp -o $OUT/fuzz_badcode $LIB_FUZZING_ENGINE