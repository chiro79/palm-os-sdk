/******************************************************************************
 *
 * Copyright (c) 1999-2000 Palm, Inc. or its subsidiaries.
 * All rights reserved.
 *
 * File: PalmOptErrorCheckLevel.Debug
 *
 * Release: Palm OS SDK 4.0 (63220)
 *
 *****************************************************************************/

#ifndef __PALMOPTERRORCHECKLEVEL_H__
#define __PALMOPTERRORCHECKLEVEL_H__

#include <BuildDefines.h>

	#ifdef ERROR_CHECK_LEVEL_OK_TO_REDEFINE
		#undef ERROR_CHECK_LEVEL_OK_TO_REDEFINE
		#undef ERROR_CHECK_LEVEL
	#endif

	#ifndef ERROR_CHECK_LEVEL
		#define ERROR_CHECK_LEVEL ERROR_CHECK_FULL
	#endif

#endif
