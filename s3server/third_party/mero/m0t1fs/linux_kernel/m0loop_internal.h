/* -*- C -*- */
/*
 * COPYRIGHT 2012 XYRATEX TECHNOLOGY LIMITED
 *
 * THIS DRAWING/DOCUMENT, ITS SPECIFICATIONS, AND THE DATA CONTAINED
 * HEREIN, ARE THE EXCLUSIVE PROPERTY OF XYRATEX TECHNOLOGY
 * LIMITED, ISSUED IN STRICT CONFIDENCE AND SHALL NOT, WITHOUT
 * THE PRIOR WRITTEN PERMISSION OF XYRATEX TECHNOLOGY LIMITED,
 * BE REPRODUCED, COPIED, OR DISCLOSED TO A THIRD PARTY, OR
 * USED FOR ANY PURPOSE WHATSOEVER, OR STORED IN A RETRIEVAL SYSTEM
 * EXCEPT AS ALLOWED BY THE TERMS OF XYRATEX LICENSES AND AGREEMENTS.
 *
 * YOU SHOULD HAVE RECEIVED A COPY OF XYRATEX'S LICENSE ALONG WITH
 * THIS RELEASE. IF NOT PLEASE CONTACT A XYRATEX REPRESENTATIVE
 * http://www.xyratex.com/contact
 *
 * Original author: Andriy Tkachuk <andriy_tkachuk@xyratex.com>
 * Original creation date: 11/14/2012
 */

#pragma once

#ifndef __MERO_M0T1FS_M0LOOP_INTERNAL_H__
#define __MERO_M0T1FS_M0LOOP_INTERNAL_H__

enum {
	IOV_ARR_SIZE = BIO_MAX_PAGES * 100
};

int accumulate_bios(struct loop_device *lo, struct bio_list *bios,
		    struct iovec *iovecs, loff_t *ppos, unsigned *psize);

#endif /* __MERO_M0T1FS_M0LOOP_INTERNAL_H__ */