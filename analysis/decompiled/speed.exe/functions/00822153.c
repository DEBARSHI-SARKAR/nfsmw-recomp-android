/* speed.exe 00822153 FUN_00822153; analysis pseudocode, not buildable source.
 * calls 0081f7cb FUN_0081f7cb
 * calls 0081f1e2 FUN_0081f1e2
 * calls 008223c3 FUN_008223c3
 */

undefined4 FUN_00822153(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  if (DAT_009c2188 == '\0') {
    return 0xfffffff6;
  }
  iVar1 = 0x2000;
  if ((0x2000 < param_2) || (iVar1 = 0x800, param_2 < 0x800)) {
    param_2 = iVar1;
  }
  iVar1 = FUN_0081f7cb(param_1);
  if (-1 < iVar1) {
    local_8 = -1;
    iVar2 = FUN_008223c3(iVar1,&local_8);
    while (iVar2 != 0) {
      *(short *)(local_8 * 0x90 + 0x6e + DAT_009c21f4) = (short)param_2;
      FUN_0081f1e2(local_8,param_2);
      iVar2 = FUN_008223c3(iVar1,&local_8);
    }
  }
  return 0;
}

