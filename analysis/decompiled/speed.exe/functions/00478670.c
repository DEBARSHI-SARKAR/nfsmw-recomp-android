/* speed.exe 00478670 FUN_00478670; analysis pseudocode, not buildable source.
 * calls 0046e410 FUN_0046e410
 * calls 0045d380 FUN_0045d380
 * calls 00460d20 FUN_00460d20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00478670(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0046e410();
  if ((iVar1 != 0) && (iVar3 = 0, 0 < *(int *)(iVar1 + 8))) {
    do {
      iVar2 = FUN_0045d380(iVar3);
      if (iVar2 == iVar1 + 0xc) {
        iVar2 = 0;
      }
      iVar2 = FUN_00460d20(param_1,iVar2 + 0x17);
      if (iVar2 == 0) {
        iVar3 = FUN_0045d380(iVar3);
        if (iVar3 == iVar1 + 0xc) {
          iVar3 = 0;
        }
        return (float10)*(float *)(iVar3 + 0x10);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar1 + 8));
  }
  return (float10)_DAT_00890da8;
}

