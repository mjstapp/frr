# Ubuntu 24.04

This builds an ubuntu 24.04 container for dev / test

# Build

```
docker build -t frr-ubuntu24:latest --build-arg=UBUNTU_VERSION=24.04 -f docker/ubuntu-ci/Dockerfile .
```

# Run

```
docker run -d --init --privileged --name frr-ubuntu24 --mount type=bind,source=/lib/modules,target=/lib/modules frr-ubuntu24:latest
```

# Running full topotest (container stops at end)

```
docker run --init -it --privileged --name frr-ubuntu24 \
    -v /lib/modules:/lib/modules frr-ubuntu24:latest \
    bash -c 'cd /home/frr/frr/tests/topotests; sudo pytest -nauto --dist=loadfile'
```

# Extract results from the above run into `run-results` dir and analyze

```
tests/topotests/analyze.py -C frr-ubuntu24 -Ar run-results
```

# Extract coverage from a stopped container into host FRR source tree

```
docker export frr-ubuntu24 | tar --strip=3 --wildcards -vx '*.gc??'
lcov -b $(pwd) --capture --directory . --output-file=coverage.info
```

# make check

```
docker exec frr-ubuntu24 bash -c 'cd ~/frr ; make check'
```

# interactive bash

```
docker exec -it frr-ubuntu24 bash
```

# Run a specific topotest

```
docker exec frr-ubuntu24 bash -c 'cd ~/frr/tests/topotests ; sudo pytest ospf_topo1/test_ospf_topo1.py'
```

# stop & remove container

```
docker stop frr-ubuntu24 ; docker rm frr-ubuntu24
```

# remove image

```
docker rmi frr-ubuntu24:latest
```
