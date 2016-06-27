CC       = clang++
CFLAGS   = -O3 -Wall -std=c11
LIBS     =

LD       = $(CC)
LDFLAGS  = $(CFLAGS)

TESTS = main BloomFilter # threads

all: $(TESTS)

%: %.o
	$(LD) $(LDFLAGS) $< $(LIBS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	-rm -f *.o
	-rm -f $(TESTS)
	-rm -rf *.dSYM
