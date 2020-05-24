#define MAINPREFIX x
#define PREFIX 61st

#include "script_version.hpp"

#define VERSION     MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCH
#define VERSION_AR  MAJOR,MINOR,PATCH

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 1.96
#define REQUIRED_CBA_VERSION {3,12,2}

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(61ST - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(61ST - COMPONENT)
#endif
