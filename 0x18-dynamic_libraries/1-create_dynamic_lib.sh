#!/bin/bash
gcc *. -shared -o 4libc.so
LC_PRELOAD=$PWD/4libc.so

