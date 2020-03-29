// -*- mode: c++ -*-
/***************************************************************************
 *  include/stxxl/bits/config.h.in
 *
 *  Template file processed by cmake to set all define switches for this build
 *  according to the cmake build options.
 *
 *  Part of the STXXL. See http://stxxl.sourceforge.net
 *
 *  Copyright (C) 2012-2013 Timo Bingmann <tb@panthema.net>
 *
 *  Distributed under the Boost Software License, Version 1.0.
 *  (See accompanying file LICENSE_1_0.txt or copy at
 *  http://www.boost.org/LICENSE_1_0.txt)
 **************************************************************************/

#ifndef STXXL_CONFIG_HEADER
#define STXXL_CONFIG_HEADER

// the STXXL library version variables
#define STXXL_VERSION_MAJOR 1
#define STXXL_VERSION_MINOR 0
#define STXXL_VERSION_PATCH 0
#define STXXL_VERSION_STRING "1.0.0"
#define STXXL_VERSION_PHASE "foo"

// if this is a git repository, add the refspec and commit sha
//#cmakedefine STXXL_VERSION_GIT_REFSPEC "${STXXL_VERSION_GIT_REFSPEC}"
//#cmakedefine STXXL_VERSION_GIT_SHA1 "${STXXL_VERSION_GIT_SHA1}"

#ifndef STXXL_DEBUG_ASSERTIONS
//#cmakedefine STXXL_DEBUG_ASSERTIONS ${STXXL_DEBUG_ASSERTIONS}
#endif
// default: off
// cmake:   option
// effect:  enable more costly assertions and checks for debugging the library

//#cmakedefine STXXL_DIRECT_IO_OFF ${STXXL_DIRECT_IO_OFF}
#define STXXL_DIRECT_IO_OFF 0
// default: 0/1 (platform dependent)
// cmake:   detection of platform and flag
// effect:  disables use of O_DIRECT flag on unsupported platforms

//#cmakedefine STXXL_HAVE_MMAP_FILE ${STXXL_HAVE_MMAP_FILE }
#define STXXL_HAVE_MMAP_FILE 1
// default: 0/1 (platform dependent)
// used in: io/mmap_file.h/cpp
// effect:  enables/disables memory mapped file implementation

//#cmakedefine STXXL_HAVE_LINUXAIO_FILE ${STXXL_HAVE_LINUXAIO_FILE }
#define STXXL_HAVE_LINUXAIO_FILE 0
// default: 0/1 (platform dependent)
// used in: io/linuxaio_file.h/cpp
// effect:  enables/disables Linux AIO file implementation

//#cmakedefine STXXL_POSIX_THREADS ${STXXL_POSIX_THREADS }
#define STXXL_POSIX_THREADS 1
// default: off
// cmake:   detection of pthreads by cmake
// effect:  uses POSIX thread and mutexes on linux

//#cmakedefine STXXL_STD_THREADS ${STXXL_STD_THREADS }
#define STXXL_STD_THREADS 0
// default: off
// cmake:   detection of <thread> and <mutex>
// effect:  uses std thread and mutex on windows or (forced on linux)

//#cmakedefine STXXL_WINDOWS ${STXXL_WINDOWS }
#define STXXL_WINDOWS 0
// default: off
// cmake:   detection of ms windows platform (32- or 64-bit)
// effect:  enables windows-specific api calls (mingw or msvc)

//#cmakedefine STXXL_MSVC ${STXXL_MSVC }
#define STXXL_MSVC 0
// default: off
// cmake:   detection of ms visual c++ via CMake (contains version number)
// effect:  enables msvc-specific headers and macros

//#cmakedefine STXXL_HAVE_CXX11_RANGE_FOR_LOOP ${STXXL_HAVE_CXX11_RANGE_FOR_LOOP
//}
#define STXXL_HAVE_CXX11_RANGE_FOR_LOOP 1
// default: off
// run-time: detection C++11 support for "for (auto i : obj) { }"
// effect:  enables some C++11 construct (currently only allowed in examples)

//#cmakedefine STXXL_HAVE_SYNC_ADD_AND_FETCH ${STXXL_HAVE_SYNC_ADD_AND_FETCH }
#define STXXL_HAVE_SYNC_ADD_AND_FETCH 1
// default: off
// cmake:   detection of __sync_add_and_fetch() intrinsic
// effect:  enables use of atomics in counting_ptr

//#cmakedefine STXXL_PARALLEL ${STXXL_PARALLEL }
#define STXXL_PARALLEL 0
// default: on/off (depends on compiler and platform)
// cmake:   -DUSE_PARALLEL=ON
// effect:  enable parallelized algorithms using OpenMP like multiway_merge and
// sort

//#cmakedefine STXXL_WITH_GNU_PARALLEL ${STXXL_WITH_GNU_PARALLEL }
#define STXXL_WITH_GNU_PARALLEL 0
// default: off
// cmake:   -DUSE_GNU_PARALLEL=ON
// effect:  explicitly enables use of __gnu_parallel algorithms

#define STXXL_BOOST_CONFIG 0
#define STXXL_BOOST_FILESYSTEM 0
#define STXXL_BOOST_RANDOM 0
#define STXXL_BOOST_THREADS 0
#define STXXL_BOOST_TIMESTAMP 0
/*
#cmakedefine STXXL_BOOST_CONFIG ${STXXL_BOOST_CONFIG }
#cmakedefine STXXL_BOOST_FILESYSTEM ${STXXL_BOOST_FILESYSTEM }
#cmakedefine STXXL_BOOST_RANDOM ${STXXL_BOOST_RANDOM }
#cmakedefine STXXL_BOOST_THREADS ${STXXL_BOOST_THREADS }
#cmakedefine STXXL_BOOST_TIMESTAMP ${STXXL_BOOST_TIMESTAMP }*/
// default: off
// cmake:   -DUSE_BOOST=ON
// effect:  enables use of boost libraries in different parts of STXXL.

#if STXXL_BOOST_CONFIG
#include <boost/config.hpp>
#endif

//#cmakedefine STXXL_STD_RANDOM ${STXXL_STD_RANDOM }
#define STXXL_STD_RANDOM 1
// default: off
// cmake:   detection of <random>
// effect:  uses std random generator on windows or (forced on linux)

//#cmakedefine STXXL_HAVE_MALLINFO_PROTO ${STXXL_HAVE_MALLINFO_PROTO }
#define STXXL_HAVE_MALLINFO_PROTO 0
// default: off
// cmake:   detection of mallinfo() function in <malloc.h>
// effect:  used by stxxl_tool/mallinfo for malloc stats

//#cmakedefine STXXL_HAVE_MLOCK_PROTO ${STXXL_HAVE_MLOCK_PROTO }
#define STXXL_HAVE_MLOCK_PROTO 0
// default: off
// cmake:   detection of mlock() function in <sys/mman.h>
// effect:  used by stxxl_tool/mlock for locking physical pages

//#cmakedefine STXXL_WITH_VALGRIND ${STXXL_WITH_VALGRIND }
#define STXXL_WITH_VALGRIND 1
// default: off
// cmake:   option USE_VALGRIND=ON
// effect:  run all tests with valgrind and pre-initialize some memory buffers

#endif  // !STXXL_CONFIG_HEADER
