/* speed.exe 004559b0 FUN_004559b0; analysis pseudocode, not buildable source.
 * calls 00454cc0 FUN_00454cc0
 */

uint __thiscall FUN_004559b0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((param_2 != 0) && (uVar3 = FUN_00454cc0(param_2), uVar3 < *(uint *)(iVar1 + 0x20))) {
    uVar3 = *(int *)(iVar1 + 0x1c) + uVar3 * 0xc;
    uVar2 = *(uint *)(uVar3 + 4);
    if ((uVar2 != uVar3) && ((uVar2 != uVar3 && (uVar2 != 0)))) {
      return uVar2;
    }
  }
  uVar3 = FUN_00454cc0(0xeec2271a);
  if (uVar3 < *(uint *)(iVar1 + 0x20)) {
    iVar1 = *(int *)(iVar1 + 0x1c);
    uVar2 = *(uint *)(iVar1 + 4 + uVar3 * 0xc);
    uVar3 = iVar1 + uVar3 * 0xc;
    if (uVar2 != uVar3) {
      return (uVar2 == uVar3) - 1 & uVar2;
    }
  }
  return 0;
}

