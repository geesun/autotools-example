if DEBUG
bin_PROGRAMS = helloworld debug 
debug_SOURCES=src/debug.c 
else
bin_PROGRAMS = helloworld
endif

if DEBUG
helloworld_SOURCES = src/helloworld.c  \
					 src/hello-debug.c
else
helloworld_SOURCES = src/helloworld.c 
endif

scripts:
	mkdir -p scripts
	echo "#!/bin/sh " > scripts/hello.sh
	echo "echo ""hello world"" " >> scripts/hello.sh

all-local: scripts

clean-local:
	rm -rf scripts/
