#!/bin/bash
gcc -g -static -O3 -lpthread -pthread src/*.c -o loader
