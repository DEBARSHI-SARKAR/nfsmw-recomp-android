/* speed.exe 00660160 FUN_00660160; analysis pseudocode, not buildable source.
 * calls 00660100 FUN_00660100
 */

int FUN_00660160(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = 0x20 - (char)param_1;
  iVar1 = FUN_00660100(param_1,param_2);
  return (iVar1 << (bVar2 & 0x1f)) >> (bVar2 & 0x1f);
}

