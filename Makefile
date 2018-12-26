all: test

# copy executable in the root folder
integral: src/integral
	cp src/integral ./integral

# create the executable
src/integral:
	make -C src/

# remove useless files
reset:
	make -C src/ reset

test: integral
	./integral < input_test.txt
