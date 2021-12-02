#include "configargs.h"

#define GCCPLUGIN_VERSION_MAJOR   11
#define GCCPLUGIN_VERSION_MINOR   0
#define GCCPLUGIN_VERSION_PATCHLEVEL   1
#define GCCPLUGIN_VERSION  (GCCPLUGIN_VERSION_MAJOR*1000 + GCCPLUGIN_VERSION_MINOR)

static char basever[] = "11.0.1";
static char datestamp[] = "20210310";
static char devphase[] = "experimental";
static char revision[] = "[master revision 5987d8a79cda1069c774e5c302d5597310270026]";

/* FIXME plugins: We should make the version information more precise.
   One way to do is to add a checksum. */

static struct plugin_gcc_version gcc_version = {basever, datestamp,
						devphase, revision,
						configuration_arguments};
