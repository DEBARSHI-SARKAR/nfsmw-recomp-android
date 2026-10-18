/* speed.exe 0081d0e6 FUN_0081d0e6; analysis pseudocode, not buildable source.
 * calls 0081c131 FUN_0081c131
 * calls 00822153 FUN_00822153
 */

undefined4 FUN_0081d0e6(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (DAT_009c2188 == '\0') {
    return 0xfffffff6;
  }
  iVar1 = 0x2000;
  if ((0x2000 < param_2) || (iVar1 = 0x800, param_2 < 0x800)) {
    param_2 = iVar1;
  }
  iVar1 = FUN_0081c131(param_1);
  if (iVar1 == 0) {
    return 0xfffffff8;
  }
  *(short *)(iVar1 + 0xfa) = (short)param_2;
  FUN_00822153(*(undefined4 *)(iVar1 + 4),param_2);
  return 0;
}

