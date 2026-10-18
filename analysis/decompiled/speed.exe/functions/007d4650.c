/* speed.exe 007d4650 __chvalidator; analysis pseudocode, not buildable source.
 * calls 007d2670 __CrtDbgReport
 */

/* Library Function - Single Match
    __chvalidator
   
   Library: Visual Studio 2003 Debug */

uint __chvalidator(int param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  if (0x100 < param_1 + 1U) {
    iVar2 = __CrtDbgReport(2,"isctype.c",0x38,0,"(unsigned)(c + 1) <= 256");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(ushort *)(PTR_DAT_00907294 + param_1 * 2) & param_2;
}

