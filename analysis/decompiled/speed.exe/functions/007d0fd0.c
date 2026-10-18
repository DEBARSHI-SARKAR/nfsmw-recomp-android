/* speed.exe 007d0fd0 __lock; analysis pseudocode, not buildable source.
 * calls 007d0eb0 __mtinitlocknum
 * calls 007c4240 __amsg_exit
 * calls EXTERNAL:00000056 EnterCriticalSection
 */

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2003 Debug */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if (*(int *)(&DAT_00906990 + _File * 8) == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_00906990 + _File * 8));
  return;
}

