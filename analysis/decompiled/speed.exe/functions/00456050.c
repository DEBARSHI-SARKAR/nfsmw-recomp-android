/* speed.exe 00456050 FUN_00456050; analysis pseudocode, not buildable source.
 * calls 00454db0 FUN_00454db0
 * calls 004559b0 FUN_004559b0
 */

undefined4 FUN_00456050(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(DAT_0090dcbc + 4);
  if (param_1 != 0) {
    uVar3 = FUN_00454db0(param_1);
    if (uVar3 < *(uint *)(iVar1 + 0xc)) {
      iVar1 = *(int *)(iVar1 + 8) + uVar3 * 0xc;
      iVar2 = *(int *)(iVar1 + 4);
      if (((iVar2 != iVar1) && (iVar2 != iVar1)) && (iVar2 != 0)) {
        uVar4 = FUN_004559b0(param_2);
        return uVar4;
      }
    }
  }
  return 0;
}

