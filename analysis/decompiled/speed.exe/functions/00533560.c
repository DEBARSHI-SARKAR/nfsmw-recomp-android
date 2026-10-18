/* speed.exe 00533560 FUN_00533560; analysis pseudocode, not buildable source.
 * calls 00460dd0 FUN_00460dd0
 * calls 00520260 FUN_00520260
 * calls 00525940 FUN_00525940
 */

void __fastcall FUN_00533560(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x158) + 0xc))();
  if (iVar1 != 0) {
    uVar2 = FUN_00520260(iVar1);
    *(undefined4 *)(param_1 + 0x158) = uVar2;
    FUN_00525940(iVar1,0,0,0);
    iVar1 = FUN_00460dd0(iVar1,*(undefined4 *)(param_1 + 0x160));
    if (iVar1 == 0) {
      if (DAT_0091ca68 != (undefined4 *)0x0) {
        (**(code **)*DAT_0091ca68)(1);
      }
      DAT_0091ca68 = (undefined4 *)0x0;
    }
  }
  return;
}

