all: copy reset

# copy executable in the root folder
copy: integral
	cp src/integral ./integral

# create the executable
integral:
	make -C src/

# remove useless files
reset:
	make -C src/ reset