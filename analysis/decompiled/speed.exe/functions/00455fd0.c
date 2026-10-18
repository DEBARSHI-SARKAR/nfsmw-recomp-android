/* speed.exe 00455fd0 FUN_00455fd0; analysis pseudocode, not buildable source.
 * calls 00454cc0 FUN_00454cc0
 * calls 00454db0 FUN_00454db0
 */

uint FUN_00455fd0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(DAT_0090dcbc + 4);
  if (param_1 != 0) {
    uVar4 = FUN_00454db0(param_1);
    if (uVar4 < *(uint *)(iVar1 + 0xc)) {
      iVar1 = *(int *)(iVar1 + 8) + uVar4 * 0xc;
      iVar2 = *(int *)(iVar1 + 4);
      if (((iVar2 != iVar1) && (iVar2 != iVar1)) && (iVar2 != 0)) {
        iVar1 = *(int *)(iVar2 + 8);
        if (param_2 != 0) {
          uVar4 = FUN_00454cc0(param_2);
          if (uVar4 < *(uint *)(iVar1 + 0x20)) {
            uVar4 = *(int *)(iVar1 + 0x1c) + uVar4 * 0xc;
            uVar3 = *(uint *)(uVar4 + 4);
            if (uVar3 != uVar4) {
              return (uVar3 == uVar4) - 1 & uVar3;
            }
          }
        }
      }
    }
  }
  return 0;
}

