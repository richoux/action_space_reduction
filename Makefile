EXEC=action_space_reduction

# Compiler flags
MYFLAGS=
CXXFIRSTFLAGS= -O3 -W -Wall -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-result
#CXXFIRSTFLAGSDEBUG= -g -O0 -DDEBUG -W -Wall -Wextra -Wno-sign-compare -Wno-unused-parameter -fsanitize=address -v -da -Q
CXXFIRSTFLAGSDEBUG= -g -O0 -DDEBUG -W -Wall -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-result
CXXFIRSTFLAGSINFO= -g -O2 -W -Wall -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-result
#LDFLAGSDEBUG=-pthread -lghost_staticd -fsanitize=address -static-libasan
LDFLAGSDEBUG=-pthread -lghost_staticd -lprotobuf
LDFLAGSINFO=-pthread -lghost -lprotobuf

UNAME_S := $(shell uname -s)
ifeq ($(UNAME_S),Linux)
	CXX=g++
	CXXFLAGS= -std=c++20 $(CXXFIRSTFLAGS) $(MYFLAGS)
	CXXFLAGSDEBUG= -std=c++20 $(CXXFIRSTFLAGSDEBUG) $(MYFLAGS)
	CXXFLAGSINFO= -std=c++20 $(CXXFIRSTFLAGSINFO) $(MYFLAGS)
	LDFLAGS=-pthread -lghost_static -lprotobuf
endif
ifeq ($(UNAME_S),Darwin)
	CXX=clang++
	CXXFLAGS= -std=c++20  -stdlib=libc++ $(CXXFIRSTFLAGS) $(MYFLAGS)
	CXXFLAGSDEBUG= -std=c++20  -stdlib=libc++ $(CXXFIRSTFLAGSDEBUG) $(MYFLAGS)
	LDFLAGS=-pthread -lghost_static -lprotobuf -lc++ -lc++abi
endif

# Directories
SRCDIR=src
HPPDIR=src
OBJDIR=obj
BINDIR=bin

# Files
SOURCES=$(foreach sdir, $(SRCDIR), $(wildcard $(sdir)/*.cpp))
OBJECTS=$(patsubst %.cpp, $(OBJDIR)/%.o, $(notdir $(SOURCES)))

vpath %.cpp $(SRCDIR)

# Reminder, 'cause it is easy to forget makefile's fucked-up syntax...
# $@ is what triggered the rule, ie the target before :
# $^ is the whole dependencies list, ie everything after :
# $< is the first item in the dependencies list

# Rules

all: $(BINDIR)/$(EXEC)

debug: CXXFLAGS=$(CXXFLAGSDEBUG)
debug: LDFLAGS=$(LDFLAGSDEBUG)
debug: $(BINDIR)/$(EXEC)

info: CXXFLAGS=$(CXXFLAGSINFO)
info: LDFLAGS=$(LDFLAGSINFO)
info: $(BINDIR)/$(EXEC)

$(BINDIR)/$(EXEC): $(OBJECTS) $(OBJDIR)/asr.pb.o
	$(CXX) -o $@ $^ $(LDFLAGS)

$(OBJDIR)/%.o: %.cpp
	$(CXX) $(CXXFLAGS) -I$(HPPDIR) -I./protobuf_code -c $< -o $@

$(OBJDIR)/asr.pb.o: protobuf_code/asr.pb.cc
	$(CXX) $(CXXFLAGS) -I$(HPPDIR) -I./protobuf_code -c $< -o $@

.PHONY: clean

clean:
	rm -fr core $(BINDIR)/$(EXEC) $(OBJDIR)/*.o 
