/* speed.exe 00455960 FUN_00455960; analysis pseudocode, not buildable source.
 * calls 00454cc0 FUN_00454cc0
 */

uint __thiscall FUN_00455960(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 != 0) {
    uVar3 = FUN_00454cc0(param_2);
    if (uVar3 < *(uint *)(iVar1 + 0x20)) {
      uVar3 = *(int *)(iVar1 + 0x1c) + uVar3 * 0xc;
      uVar2 = *(uint *)(uVar3 + 4);
      if (uVar2 != uVar3) {
        return (uVar2 == uVar3) - 1 & uVar2;
      }
    }
  }
  return 0;
}

