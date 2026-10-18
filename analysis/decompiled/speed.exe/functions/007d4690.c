/* speed.exe 007d4690 __chvalidator_mt; analysis pseudocode, not buildable source.
 * calls 007d2670 __CrtDbgReport
 */

/* Library Function - Single Match
    __chvalidator_mt
   
   Library: Visual Studio 2003 Debug */

uint __chvalidator_mt(int param_1,int param_2,uint param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  if (0x100 < param_2 + 1U) {
    iVar2 = __CrtDbgReport(2,"isctype.c",0x44,0,"(unsigned)(c + 1) <= 256");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(ushort *)(*(int *)(param_1 + 0x48) + param_2 * 2) & param_3;
}

