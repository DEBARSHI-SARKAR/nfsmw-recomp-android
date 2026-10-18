/* speed.exe 00524aa0 FUN_00524aa0; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 00516af0 FUN_00516af0
 */

uint FUN_00524aa0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    iVar1 = FUN_00516af0(param_1);
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar1 = FUN_005b8550(param_2);
      uVar2 = 0;
      if ((((iVar1 != 0) && (uVar2 = *(uint *)(iVar1 + 0x54), uVar2 != 0)) &&
          (*(int *)(uVar2 + 0x30) == param_3)) && (*(int *)(uVar2 + 0x10) <= *(int *)(uVar2 + 0xc)))
      {
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
    }
  }
  return uVar2 & 0xffffff00;
}

