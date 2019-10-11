Christopher Shorter
HW2-1

1. 
Step 1: see main.c for the source code and PE_Project.exe for the original executable

The directions for steps 2-3 aren't super clear, because files start unpacked/uncompressed and 
are compressed by UPX. So basically, I built the executable (creating an unpacked version), ran 
UPX on it (creating a packed version), and then encrypted that packed version using a tool called AxCrypt that I found online.

Step 2: Unpacked Version - PE_Project.exe (before using UPX)
DLL Name : KERNEL32.dll
---------
API Name :
---------
DeleteCriticalSection
EnterCriticalSection
GetCurrentProcess
GetCurrentProcessId
GetCurrentThreadId
GetLastError
GetStartupInfoA
GetSystemTimeAsFileTime
GetTickCount
InitializeCriticalSection
LeaveCriticalSection
QueryPerformanceCounter
SetUnhandledExceptionFilter
Sleep
TerminateProcess
TlsGetValue
UnhandledExceptionFilter
VirtualProtect
VirtualQuery
-=-=-=-=-=-

DLL Name : msvcrt.dll
---------
API Name :
---------
__dllonexit
__getmainargs
__initenv
__lconv_init
__set_app_type
__setusermatherr
_access
_acmdln
_amsg_exit
_cexit
_fmode
_initterm
_iob
_lock
_onexit
_unlock
abort
calloc
exit
fclose
fgetc
fopen
fprintf
free
fwrite
malloc
memcpy
putchar
signal
sprintf
strlen
strncmp
vfprintf
-=-=-=-=-=-

Step 3: Packed Version - PE_Packed.exe (after using UPX)
DLL Name : KERNEL32.DLL
---------
API Name :
---------
LoadLibraryA
ExitProcess
GetProcAddress
VirtualProtect
-=-=-=-=-=-

DLL Name : msvcrt.dll
---------
API Name :
---------
_iob
-=-=-=-=-=-

Step 4:
I ran the anti-malware scan on both PE_Project and PE_Packed, and both returned a few services that detected malware. 
So, I found a tool online called AxCrypt that encrypts selected files, and created a new version of the executable 
named PE_Packed-Encrypted-exe.axx (it added the axx thing and you have to pay for the tool to retain normal file 
extensions). When I ran the anti-malware scan again none of the services detected it.

See the included screenshots with the results to all of the anti-malware tests.
