// ConsoleApplication2.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "ConsoleApplication2.h"

// This is an example of an exported function.
CONSOLEAPPLICATION2_API char * APIENTRY encrypt_buffer(char *buf, int buf_size)
{
	char *new_buf = (char *)malloc(buf_size + 1);

	for (int i = 0; i < buf_size; i++)
		new_buf[i] = buf[i] + 0x1;
	return new_buf;
}

// This is an example of an exported function.
CONSOLEAPPLICATION2_API void APIENTRY free_buffer(char *buf)
{
	free(buf);
}