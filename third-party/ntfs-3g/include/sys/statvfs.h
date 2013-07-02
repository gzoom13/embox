/*
 * statvfs.h
 *
 *  Created on: 2 juil. 2013
 *      Author: fsulima
 */

#ifndef STATVFS_H_
#define STATVFS_H_

struct statvfs {
   unsigned long  f_bsize;    /* file system block size */
   unsigned long  f_frsize;   /* fragment size */
   fsblkcnt_t     f_blocks;   /* size of fs in f_frsize units */
   fsblkcnt_t     f_bfree;    /* # free blocks */
   fsblkcnt_t     f_bavail;   /* # free blocks for unprivileged users */
   fsfilcnt_t     f_files;    /* # inodes */
   fsfilcnt_t     f_ffree;    /* # free inodes */
   fsfilcnt_t     f_favail;   /* # free inodes for unprivileged users */
   unsigned long  f_fsid;     /* file system ID */
   unsigned long  f_flag;     /* mount flags */
   unsigned long  f_namemax;  /* maximum filename length */
};

#endif /* STATVFS_H_ */
