/* speed.exe 00455bc0 FUN_00455bc0; analysis pseudocode, not buildable source.
 * calls 00454db0 FUN_00454db0
 */

uint __thiscall FUN_00455bc0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (param_2 != 0) {
    uVar3 = FUN_00454db0(param_2);
    if (uVar3 < *(uint *)(iVar1 + 0xc)) {
      uVar3 = *(int *)(iVar1 + 8) + uVar3 * 0xc;
      uVar2 = *(uint *)(uVar3 + 4);
      if (uVar2 != uVar3) {
        return (uVar2 == uVar3) - 1 & uVar2;
      }
    }
  }
  return 0;
}

