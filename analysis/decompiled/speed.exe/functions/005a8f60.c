/* speed.exe 005a8f60 FUN_005a8f60; analysis pseudocode, not buildable source.
 * calls 005a5d40 FUN_005a5d40
 * calls 005a5e40 FUN_005a5e40
 * calls 00588d60 FUN_00588d60
 * calls 005a5e70 FUN_005a5e70
 * calls 00589900 FUN_00589900
 * calls 00589870 FUN_00589870
 */

void __fastcall FUN_005a8f60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_00589900();
  iVar1 = *(int *)(param_1 + 0xac);
  if (iVar1 == 0x2711) {
    uVar2 = FUN_00588d60(*(undefined4 *)(param_1 + 0x34));
    uVar3 = FUN_00588d60(*(undefined4 *)(param_1 + 0x38));
    FUN_00589870(*(undefined4 *)(param_1 + 0x10c),*(int *)(param_1 + 0x104) + -1,uVar3,uVar2);
    return;
  }
  if (iVar1 == 10000) {
    FUN_005a5e70();
    return;
  }
  if (iVar1 == -10000) {
    FUN_005a5e40();
    return;
  }
  FUN_005a5d40(iVar1);
  return;
}

