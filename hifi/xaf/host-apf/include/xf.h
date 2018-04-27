/*******************************************************************************
* Copyright (C) 2018 Cadence Design Systems, Inc.
* 
* Permission is hereby granted, free of charge, to any person obtaining
* a copy of this software and associated documentation files (the
* "Software"), to use this Software with Cadence processor cores only and 
* not with any other processors and platforms, subject to
* the following conditions:
* 
* The above copyright notice and this permission notice shall be included
* in all copies or substantial portions of the Software.
* 
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

******************************************************************************/

#ifdef  __XF_H
#error  "xf.h included more than once"
#endif

#define __XF_H

/*******************************************************************************
 * Common runtime framework
 ******************************************************************************/

/* ...target configuration */
#include "xf-config.h"

/* ...platform run-time */
#include "xf-runtime.h"

/* ...debugging facility */
#include "xf-debug.h"

/* ...API prototypes */
#include "xf-proto.h"

/* ...standard opcodes */
#include "xf-opcode.h"

/* ...platform-specific IPC layer */
#include "xf-ipc.h"

/* ...proxy definitions */
#include "xf-proxy.h"

