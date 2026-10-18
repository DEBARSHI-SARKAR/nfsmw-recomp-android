/* speed.exe 008623a8 FUN_008623a8; analysis pseudocode, not buildable source.
 * calls 007edb59 FUN_007edb59
 * calls 007edabb FUN_007edabb
 * calls 007eda45 FUN_007eda45
 * calls 007edb85 FUN_007edb85
 */

void FUN_008623a8(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  uVar1 = FUN_007eda45(*(undefined4 *)(param_3 + 0x1c));
  *(int *)(param_3 + 0x2c) = *(int *)(param_3 + 0x2c) + uVar1;
  *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + uVar1;
  if ((uVar1 < DAT_00907700) || (*(int *)(param_3 + 0x10) != 0)) {
    uVar2 = FUN_007edb59(*(undefined4 *)(param_3 + 0x20),99,param_3);
    *(undefined4 *)(param_3 + 0x1c) = uVar2;
    if (*(int *)(param_3 + 0x1c) == 0) {
      return;
    }
    pcVar3 = FUN_00862390;
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
    if (*(int *)(param_3 + 0x1c) == 0) {
      return;
    }
    pcVar3 = FUN_008623a8;
  }
  FUN_007edabb(*(undefined4 *)(param_3 + 0x1c),pcVar3);
  return;
}

