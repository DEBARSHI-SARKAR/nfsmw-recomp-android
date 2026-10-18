/* speed.exe 00456b20 FUN_00456b20; analysis pseudocode, not buildable source.
 * calls 00454cc0 FUN_00454cc0
 * calls 00456660 FUN_00456660
 */

undefined4 __thiscall FUN_00456b20(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_1 + 8);
  piVar1 = (int *)(iVar2 + 0x1c);
  uVar3 = FUN_00454cc0(param_2);
  if ((uVar3 < *(uint *)(iVar2 + 0x20)) &&
     (iVar2 = *piVar1 + uVar3 * 0xc, *(int *)(iVar2 + 4) != iVar2)) {
    uVar4 = FUN_00456660(piVar1,uVar3);
    return uVar4;
  }
  return 0;
}

