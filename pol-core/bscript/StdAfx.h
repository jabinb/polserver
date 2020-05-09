/** @file
 *
 * @par History
 *
 * @note stdafx.h : include file for standard system include files,
 *       or project specific include files that are used frequently, but
 *       are changed infrequently
 */


#if !defined( _BSCRIPT_STDAFX_H )
#define _BSCRIPT_STDAFX_H

// Copied from clib/StdAfx.h
//    - except Header_Windows.h which does not play well with ANTLR.

// System Includes
#include <assert.h>
#include <atomic>
#include <cstring>
#include <deque>
#include <iostream>
#include <map>
#include <memory>
#include <mutex>
#include <queue>
#include <set>
#include <stack>
#include <stddef.h>
#include <stdlib.h>
#include <string>
#include <thread>
#include <vector>

// 3rd Party Includes
#include <format/format.h>
#include <boost/algorithm/string/case_conv.hpp>
#include <boost/any.hpp>
#include <boost/flyweight.hpp>

// Project Includes (be really really carefull what to include!)

// explicit included since needed anyway for later includes
#include "../clib/compilerspecifics.h"
#include "../clib/Debugging/LogSink.h"
#include "../clib/message_queue.h"

#include "../clib/fixalloc.h"
#include "../clib/logfacility.h"
#include "../clib/passert.h"
#include "../clib/rawtypes.h"
#include "../clib/refptr.h"
#include "../clib/spinlock.h"
#include "../clib/strutil.h"
#include "../clib/weakptr.h"

// unique to bscript:
#include "bobject.h"
#include "token.h"
#include "tokens.h"

#endif
