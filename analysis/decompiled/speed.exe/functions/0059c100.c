/* speed.exe 0059c100 FUN_0059c100; analysis pseudocode, not buildable source.
 * calls 0059c0b0 FUN_0059c0b0
 * calls 0045d380 FUN_0045d380
 * calls 00588d60 FUN_00588d60
 * calls 0059bff0 FUN_0059bff0
 */

void __fastcall FUN_0059c100(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x2c) != param_1 + 0x2c) {
    iVar3 = *(int *)(param_1 + 0x34);
    if ((iVar3 == 0) && (*(int *)(param_1 + 0x4c) == 0)) {
      FUN_0059c0b0();
      return;
    }
    uVar4 = *(uint *)(param_1 + 0x10c);
    iVar1 = *(int *)(param_1 + 0x104);
    if (uVar4 < iVar1 - 1U) {
      uVar2 = FUN_00588d60(iVar3);
      if (uVar2 <= iVar1 - uVar4) {
        *(int *)(param_1 + 0x38) = iVar3;
        FUN_0059bff0();
        *(undefined1 *)(param_1 + 0x11f) = 0;
        return;
      }
    }
    uVar4 = (iVar1 - uVar4) - 1;
    iVar3 = FUN_0045d380(((int)uVar4 < 0) - 1 & uVar4);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + -4;
    }
    *(int *)(param_1 + 0x38) = iVar3;
    FUN_0059bff0();
    *(undefined1 *)(param_1 + 0x11f) = 0;
  }
  return;
}

