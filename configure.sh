#! /usr/bin/bash

declare -r script_dir="$(dirname -- $(readlink -f ${BASH_SOURCE[0]}))"

cmake \
    -DCMAKE_EXPORT_COMPILE_COMMANDS:BOOL=TRUE \
    -DCMAKE_BUILD_TYPE:STRING=Debug \
    -DCMAKE_C_COMPILER:FILEPATH=/usr/bin/clang-12 \
    -DCMAKE_CXX_COMPILER:FILEPATH=/usr/bin/clang++-12 \
    -H"${script_dir}" \
    -B"${script_dir}/build" \
    -G "Ninja"
