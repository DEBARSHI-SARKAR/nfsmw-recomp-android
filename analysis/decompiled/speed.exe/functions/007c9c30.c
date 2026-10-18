/* speed.exe 007c9c30 __vscprintf; analysis pseudocode, not buildable source.
 * calls 007d1390 __output
 * calls 007d2670 __CrtDbgReport
 */

/* Library Function - Single Match
    __vscprintf
   
   Library: Visual Studio 2003 Debug */

int __cdecl __vscprintf(char *_Format,va_list _ArgList)

{
  code *pcVar1;
  int iVar2;
  undefined4 local_2c [8];
  undefined4 *local_c;
  
  local_c = local_2c;
  if (_Format == (char *)0x0) {
    iVar2 = __CrtDbgReport(2,"vsprintf.c",0x88,0,"format != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  local_c[1] = 0x7fffffff;
  local_c[3] = 0x42;
  local_c[2] = 0;
  *local_c = 0;
  iVar2 = __output(local_c,_Format,_ArgList);
  return iVar2;
}

