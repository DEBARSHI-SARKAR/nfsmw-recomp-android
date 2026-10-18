/* speed.exe 00593560 FUN_00593560; analysis pseudocode, not buildable source.
 * calls 0045d3a0 FUN_0045d3a0
 * calls 0045d380 FUN_0045d380
 * calls 00593410 FUN_00593410
 * calls 00593250 FUN_00593250
 */

void __thiscall FUN_00593560(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_0045d3a0(0);
  if (iVar2 == 0) {
    FUN_00593410();
  }
  iVar2 = FUN_0045d3a0(0);
  if (param_2 < iVar2) {
    iVar2 = *(int *)(param_1 + 0x24) * *(int *)(param_1 + 0x20);
    iVar3 = 0;
    if (iVar2 + -1 < param_2) {
      iVar1 = *(int *)(param_1 + 0x20);
      iVar3 = ((((param_2 / iVar1) * iVar1 - iVar2) + 1) / iVar1 + 1) * iVar1;
      if (iVar1 == 1) {
        iVar3 = iVar3 + -1;
      }
    }
    iVar2 = FUN_0045d3a0(0);
    if ((param_2 < iVar2) && (iVar2 = FUN_0045d380(param_2), iVar2 != 0)) {
      iVar2 = iVar2 + -4;
    }
    else {
      iVar2 = 0;
    }
    FUN_00593250(iVar2,iVar3);
    FUN_00593410();
    return;
  }
  return;
}

