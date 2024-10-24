# Memory is Hard
Accompanying code for the talk: "Memory is Hard: Garbage Collectors, Address Sanitizers and more".

Slides from the talk: <https://docs.google.com/presentation/d/1VtyHZmjjSG2YGPZaVrRzX_tS793DIGF-ktNPk102wx4/edit?usp=sharing>

## Instructions for Docker Image
The Docker image is only required for the Garbage Collection examples if you do not have `gc`/`libgc` already installed on your system. Everything can be ran by just compiliing the files using the provided `build.sh`.

1. Build Docker Image

``` shell
$ docker build -t hard-memory .
```

2. Run the container

``` shell
$ docker run -it hard-memory
```

3. `cd` into any of the directories, and run `build.sh`, then run the files
