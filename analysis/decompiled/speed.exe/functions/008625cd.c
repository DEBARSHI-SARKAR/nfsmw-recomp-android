/* speed.exe 008625cd FUN_008625cd; analysis pseudocode, not buildable source.
 * calls 0086233d FUN_0086233d
 * calls 007edabb FUN_007edabb
 * calls 007eda45 FUN_007eda45
 * calls 007edb85 FUN_007edb85
 */

void FUN_008625cd(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_007eda45(*(undefined4 *)(param_3 + 0x1c));
  *(int *)(param_3 + 0x2c) = *(int *)(param_3 + 0x2c) + uVar1;
  *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + uVar1;
  if ((uVar1 < DAT_00907700) || (*(int *)(param_3 + 0x10) != 0)) {
    FUN_0086233d();
  }
  else {
    *(int *)(param_3 + 0x24) = *(int *)(param_3 + 0x24) + uVar1;
    *(int *)(param_3 + 0x28) = *(int *)(param_3 + 0x28) - uVar1;
    uVar1 = *(uint *)(param_3 + 0x28);
    if (DAT_00907700 < *(uint *)(param_3 + 0x28)) {
      uVar1 = DAT_00907700;
    }
    uVar2 = FUN_007edb85(*(undefined4 *)(param_3 + 0x20),*(undefined4 *)(param_3 + 0x24),
                         *(undefined4 *)(param_3 + 0x2c),uVar1,99,param_3);
    *(undefined4 *)(param_3 + 0x1c) = uVar2;
    if (*(int *)(param_3 + 0x1c) != 0) {
      FUN_007edabb(*(undefined4 *)(param_3 + 0x1c),FUN_008625cd);
    }
  }
  return;
}

