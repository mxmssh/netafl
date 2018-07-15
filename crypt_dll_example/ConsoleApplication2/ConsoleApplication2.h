// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the CONSOLEAPPLICATION2_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// CONSOLEAPPLICATION2_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef CONSOLEAPPLICATION2_EXPORTS
#define CONSOLEAPPLICATION2_API extern "C" __declspec(dllexport)
#else
#define CONSOLEAPPLICATION2_API __declspec(dllimport)
#endif

CONSOLEAPPLICATION2_API char* APIENTRY encrypt_buffer(char *buf, int buf_size);
CONSOLEAPPLICATION2_API void APIENTRY free_buffer(char *buf);
