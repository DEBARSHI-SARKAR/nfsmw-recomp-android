/* speed.exe 005335d0 FUN_005335d0; analysis pseudocode, not buildable source.
 * calls 00460dd0 FUN_00460dd0
 * calls 007a0f50 FUN_007a0f50
 * calls 00520260 FUN_00520260
 * calls 00525940 FUN_00525940
 */

void __fastcall FUN_005335d0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = (**(code **)(*(int *)(param_1 + 0x158) + 0x10))();
  uVar2 = FUN_00520260(uVar1);
  *(undefined4 *)(param_1 + 0x158) = uVar2;
  FUN_00525940(uVar1,0,0,0);
  iVar3 = FUN_00460dd0(uVar1,*(undefined4 *)(param_1 + 0x15c));
  if (iVar3 == 0) {
    FUN_007a0f50();
    if (DAT_0091ca68 != (undefined4 *)0x0) {
      (**(code **)*DAT_0091ca68)(1);
    }
    DAT_0091ca68 = (undefined4 *)0x0;
  }
  return;
}

