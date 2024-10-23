# Memory is Hard

## Instructions

1. Build Docker Image

``` shell
$ docker build -t hard-memory .
```

2. Run the container

``` shell
$ docker run -it \
	--mount type=bind,source=$(pwd)/src,target=/src \
	hard-memory
```

3. 
