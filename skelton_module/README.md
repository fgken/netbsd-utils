# NetBSD's module
This is a skelton program of Loadable Kernel Module for NetBSD.

# Build and load module

```sh
# On NetBSD
cp -r /path/to/netbsd-src/sys /usr/src/sys
cp -r /path/to/netbsd-src/common /usr/src/common
make
modload /path/to/skelton.kmod
modunload skelton
```
