FROM gcr.io/oss-fuzz-base/base-builder

COPY . $SRC/

WORKDIR $SRC/bad_code_fuzzer
COPY .clusterfuzzlite/build.sh $SRC/