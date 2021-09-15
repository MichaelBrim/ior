/* TODO - Copyright Notice
 *
 * Implementation of abstract I/O interface for UnifyFS.
 *
 */

#include "ior.h"
#include "iordef.h"
#include "aiori.h"
#include "utilities.h"

#include <unifyfs/unifyfs_api.h>


/**************************** P R O T O T Y P E S ****************************/

static void UnifyFS_initialize(aiori_mod_opt_t*);
static void UnifyFS_finalize(aiori_mod_opt_t*);
static int UnifyFS_check_params(aiori_mod_opt_t*);

static int UnifyFS_access(const char*, int, aiori_mod_opt_t*);

static void UnifyFS_close(aiori_fd_t*, aiori_mod_opt_t*);

static aiori_fd_t* UnifyFS_create(char*, int, aiori_mod_opt_t*);

static void UnifyFS_fsync(aiori_fd_t*, aiori_mod_opt_t*);

static IOR_offset_t UnifyFS_get_file_size(aiori_mod_opt_t*, char*);

static option_help* UnifyFS_get_options(aiori_mod_opt_t**, aiori_mod_opt_t*);

static char* UnifyFS_get_version();

static int UnifyFS_mkdir(const char*, mode_t, aiori_mod_opt_t*);

static aiori_fd_t* UnifyFS_open(char*, int, aiori_mod_opt_t*);

static void UnifyFS_remove(char*, aiori_mod_opt_t*);

static int UnifyFS_rename(const char*, const char*, aiori_mod_opt_t*);

static int UnifyFS_rmdir(const char*, aiori_mod_opt_t*);

static int UnifyFS_stat(const char*, struct stat*, aiori_mod_opt_t*);

static int UnifyFS_statfs(const char*, ior_aiori_statfs_t*, aiori_mod_opt_t*);

static void UnifyFS_sync(aiori_mod_opt_t*);

static IOR_offset_t UnifyFS_xfer(int, aiori_fd_t*, IOR_size_t*, IOR_offset_t,
                                 IOR_offset_t, aiori_mod_opt_t*);
static void UnifyFS_xfer_hints(aiori_xfer_hint_t*);


/************************** D E C L A R A T I O N S **************************/

ior_aiori_t unifyfs_aiori = {
    .name           = "UnifyFS",
    .name_legacy    = NULL,
    .create         = UnifyFS_create,
    .open           = UnifyFS_open,
    .xfer_hints     = UnifyFS_xfer_hints,
    .xfer           = UnifyFS_xfer,
    .close          = UnifyFS_close,
    .remove         = UnifyFS_remove,
    .get_version    = UnifyFS_get_version,
    .fsync          = UnifyFS_fsync,
    .get_file_size  = UnifyFS_get_file_size,
    .statfs         = UnifyFS_statfs,
    .mkdir          = UnifyFS_mkdir,
    .rmdir          = UnifyFS_rmdir,
    .access         = UnifyFS_access,
    .stat           = UnifyFS_stat,
    .initialize	    = UnifyFS_initialize,
    .finalize       = UnifyFS_finalize,
    .rename         = UnifyFS_rename,
    .get_options    = UnifyFS_get_options,
    .check_params   = UnifyFS_check_params,
    .sync           = UnifyFS_sync,
    .enable_mdtest  = false,
};

/***************************** F U N C T I O N S *****************************/

static
void UnifyFS_initialize(aiori_mod_opt_t*)
{
    return;
}

static
void UnifyFS_finalize(aiori_mod_opt_t*)
{
    return;
}

static
int UnifyFS_check_params(aiori_mod_opt_t*)
{
    return 0;
}

static
int UnifyFS_access(const char*, int, aiori_mod_opt_t*)
{
    return 0;
}

static
void UnifyFS_close(aiori_fd_t*, aiori_mod_opt_t*)
{
    return;
}

static
aiori_fd_t* UnifyFS_create(char*, int, aiori_mod_opt_t*)
{
    return NULL;
}

static
void UnifyFS_fsync(aiori_fd_t*, aiori_mod_opt_t*)
{
    return;
}

static
IOR_offset_t UnifyFS_get_file_size(aiori_mod_opt_t*, char*)
{
    return 0;
}

static
option_help* UnifyFS_get_options(aiori_mod_opt_t**, aiori_mod_opt_t*)
{
    return NULL;
}

static
char* UnifyFS_get_version()
{
    return NULL;
}

static
int UnifyFS_mkdir(const char*, mode_t, aiori_mod_opt_t*)
{
    return 0;
}

static
aiori_fd_t* UnifyFS_open(char*, int, aiori_mod_opt_t*)
{
    return NULL;
}

static
void UnifyFS_remove(char*, aiori_mod_opt_t*)
{
    return;
}

static
int UnifyFS_rename(const char*, const char*, aiori_mod_opt_t*)
{
    return 0;
}

static
int UnifyFS_rmdir(const char*, aiori_mod_opt_t*)
{
    return 0;
}

static
int UnifyFS_stat(const char*, struct stat*, aiori_mod_opt_t*)
{
    return 0;
}

static
int UnifyFS_statfs(const char*, ior_aiori_statfs_t*, aiori_mod_opt_t*)
{
    return 0;
}

static
void UnifyFS_sync(aiori_mod_opt_t*)
{
    return;
}

static
IOR_offset_t UnifyFS_xfer(int, aiori_fd_t*, IOR_size_t*, IOR_offset_t,
                          IOR_offset_t, aiori_mod_opt_t*)
{
    return 0;
}

static
void UnifyFS_xfer_hints(aiori_xfer_hint_t*)
{
    return;
}
