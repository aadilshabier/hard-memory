set -e

# CFLAGS="-Wall -Wextra"
CFLAGS=

source_files=$(find -name '*.c')

for source in $source_files; do
    exec=$(basename "$source" ".c")
	set -x
	cc $CFLAGS -o "$exec" "$source"
	set +x
done
