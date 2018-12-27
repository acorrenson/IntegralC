all: runtest

# perform all tests
runtest: src/integral integral
	test_it

# copy executable in the root folder
integral: src/integral
	cp src/integral ./integral

# create the executable
src/integral:
	make -C src/

# remove useless files
reset:
	make -C src/ reset

