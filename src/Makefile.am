bin_PROGRAMS = mercury
mercury_SOURCES = mercury.cpp
noinst_LIBRARIES = librcu.a 
librcu_a_SOURCES = \
    reference_count.h \
    base_list.cpp \
    base_list.h

mercury_LDADD = librcu.a
