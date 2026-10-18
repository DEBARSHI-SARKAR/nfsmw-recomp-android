/* speed.exe 00593480 FUN_00593480; analysis pseudocode, not buildable source.
 * calls 0045d3a0 FUN_0045d3a0
 * calls 00524920 FUN_00524920
 * calls 00573bc0 FUN_00573bc0
 * calls 00593250 FUN_00593250
 * calls 00510680 FUN_00510680
 */

void __thiscall FUN_00593480(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 8) != param_1 + 8) && (*(int *)(param_1 + 0x10) != param_1 + 0x10)) {
    iVar4 = *(int *)(param_1 + 0x1c);
    if (param_2 == -1) {
      if (0 < iVar4) {
        iVar4 = iVar4 - *(int *)(param_1 + 0x20);
      }
    }
    else if (param_2 == 1) {
      iVar1 = FUN_0045d3a0(0);
      iVar2 = *(int *)(param_1 + 0x20);
      if (iVar4 / iVar2 < ((iVar1 + -1) / iVar2 - *(int *)(param_1 + 0x24)) + 1) {
        iVar4 = iVar4 + iVar2;
      }
    }
    if (iVar4 != *(int *)(param_1 + 0x1c)) {
      *(int *)(param_1 + 0x1c) = iVar4;
      if (*(int *)(param_1 + 0x18) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x18) + 4;
      }
      iVar2 = FUN_0045d3a0(iVar4);
      iVar4 = *(int *)(param_1 + 0x1c);
      if ((iVar4 <= iVar2 + -1) &&
         (iVar2 = FUN_00510680(),
         iVar2 < *(int *)(param_1 + 0x24) * *(int *)(param_1 + 0x20) + iVar4)) {
        uVar3 = FUN_00510680(iVar4);
        uVar3 = FUN_00573bc0(uVar3,iVar4);
        FUN_00593250(*(undefined4 *)(param_1 + 0x18),uVar3);
        return;
      }
      FUN_00524920(*(undefined4 *)(param_1 + 0x2c),0x6745352,0x16a259,1);
    }
  }
  return;
}

