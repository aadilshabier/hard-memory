FROM alpine:3.20

# C compiler and extras
RUN apk add --no-cache gcc musl-dev

# Beoh'm GC
RUN apk add --no-cache gc gc-dev

COPY ./src /src

WORKDIR /src
