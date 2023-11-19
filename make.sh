#! /usr/bin/sh

(
    cd build;
    ( test -f Makefile ) || { echo >&2 "Makefile not found. Run ./cmake_configure.sh first."; exit 1; }
    make -j
)