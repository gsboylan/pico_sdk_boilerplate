#! /usr/bin/sh

command -v cmake >/dev/null 2>&1 || { echo >&2 "I require cmake but it's not installed.  Aborting."; exit 1; }

cmake -S . -B ./build
