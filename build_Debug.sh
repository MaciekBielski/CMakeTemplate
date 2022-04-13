#! /usr/bin/bash

cmake \
    --build $(pwd)/build \
    --config Debug \
    --target all \
    -j $(nproc)
