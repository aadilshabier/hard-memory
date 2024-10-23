set -xe

cc -I /usr/include/gc gc_example.c /usr/lib/libgc.so -o gc_example
