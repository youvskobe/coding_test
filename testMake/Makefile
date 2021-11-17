CC = g++ 

Target = lzyTest
OBJS = $(addsuffix .o,$(basename $(wildcard *.cpp)))
DEPS = $(addsuffix .d,$(basename $(wildcard *.cpp)))

$(Target):$(OBJS)
	$(CC) $? -o $@

%.o:%.cpp
	$(CC) -c $< -o $@

%.d:%.cpp
	set -e; rm -f $@;
	$(CC) $< -MM -o $@ > $@.$$$$; \
	sed 's/$*\.o[ :]*/$*\.o $*\.d : /g' < $@.$$$$ > $@; \
	rm -f $@.$$$$

-include $(DEPS)
