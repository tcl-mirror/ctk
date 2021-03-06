/*
 * patchlevel.h (CTk) --
 *
 * This file does nothing except define a "patch level" for CTk.
 * The patch level has the form "X.YpZ" where X.Y is the base
 * release, and Z is a serial number that is used to sequence
 * patches for a given release.  Thus 4.0p1 is the first patch
 * to release 4.0, 4.0p2 is the patch that follows 4.0p1, and
 * so on.  The "pZ" is omitted in an original new release, and
 * it is replaced with "aZ" or "bZ" for alpha and beta releases,
 * respectively (e.g. 4.0b1 is the first beta release of CTk 4.0).
 * The patch level ensures that patches are applied in the correct
 * order and only to appropriate sources.
 *
 * Copyright (c) 1994 Sun Microsystems, Inc.
 *
 * See the file "license.terms" for information on usage and redistribution
 * of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 * @(#) $Id: ctk.shar,v 1.50 1996/01/15 14:47:16 andrewm Exp andrewm $
 */

#define CTK_PATCH_LEVEL "4.0"
