// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"
#define WIN32_LEAN_AND_MEAN /* prevent winsock.h to be included in windows.h */
#include <stdio.h>
#include <tchar.h>
#include <Windows.h>
#include <wininet.h>

#include <winsock2.h>
#include <ws2tcpip.h>

#pragma comment(lib,"ws2_32.lib") //Winsock Library
#pragma comment( lib, "wininet")

// TODO: reference additional headers your program requires here
