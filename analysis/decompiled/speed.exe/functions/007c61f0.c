/* speed.exe 007c61f0 __scprintf; analysis pseudocode, not buildable source.
 * calls 007d1390 __output
 * calls 007d2670 __CrtDbgReport
 */

/* Library Function - Single Match
    __scprintf
   
   Library: Visual Studio 2003 Debug */

int __cdecl __scprintf(char *_Format,...)

{
  code *pcVar1;
  int iVar2;
  undefined4 local_30 [8];
  undefined4 *local_10;
  undefined1 *local_8;
  
  local_10 = local_30;
  local_8 = &stack0x00000008;
  if (_Format == (char *)0x0) {
    iVar2 = __CrtDbgReport(2,"sprintf.c",0x91,0,"format != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  local_10[1] = 0x7fffffff;
  local_10[3] = 0x42;
  local_10[2] = 0;
  *local_10 = 0;
  iVar2 = __output(local_10,_Format,local_8);
  return iVar2;
}

