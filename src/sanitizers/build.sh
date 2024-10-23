#!/bin/sh

set -e

compile() {
	echo "$1 $2"
	for source in $1; do
		exec=$(basename "$source" ".c")
		set -x
		cc $2 -o "$exec" "$source"
		set +x
	done
}

# AddressSanitizer
CFLAGS=-fsanitize=address
source_files="dangling.c double-free.c leak.c null-deref.c out-of-bounds.c uninitialized-mem.c"

echo $source_files

compile "$source_files" $CFLAGS

# ThreadSanitizer
CFLAGS=-fsanitize=thread
source_files="race-condition.c"

compile $source_files $CFLAGS
