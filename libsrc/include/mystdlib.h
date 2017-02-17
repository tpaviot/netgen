#ifndef FILE_MYSTDLIB
#define FILE_MYSTDLIB

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif


#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>


#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cctype>
#include <ctime>
#include <cstring>
#include <climits>
#include <algorithm>
#include <memory>
#include <thread>
#include <mutex>


#include <new>
#include <string>
#include <typeinfo>

#ifdef PARALLEL
// #undef SEEK_SET
// #undef SEEK_CUR
// #undef SEEK_END
#include <mpi.h>
#include <unistd.h>  // for usleep (only for parallel)
#endif



/*
#ifdef METIS
namespace metis { extern "C" {
#include <metis.h>
} }
#endif
*/



#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif


using namespace std;

#endif

