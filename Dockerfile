FROM debian:buster-slim as builder
RUN apt-get update && \
    apt-get install -y gcc g++ make libc6-dbg && \
    rm -rf /var/lib/apt/lists/*
RUN g++ main.cpp bad_code.cpp -o mayhemtest

# Set to fuzz!
ENTRYPOINT []
CMD ["/mayhemtest", "@@"]
