#! /usr/bin/bash

pushd ./build
ctest -j$(nproc) \
    -M Experimental \
    --output-on-failure \
    --progress \
    -T Test
popd
