set -e

CFLAGS="-Wall -Wextra"

set -x

cc $CFLAGS -I /usr/include/gc gc_example.c /usr/lib/libgc.so -o gc_example
