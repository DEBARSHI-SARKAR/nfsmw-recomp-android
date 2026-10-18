/* speed.exe 0086252f FUN_0086252f; analysis pseudocode, not buildable source.
 * calls 007edc2a FUN_007edc2a
 * calls 0086233d FUN_0086233d
 * calls 007edb59 FUN_007edb59
 * calls 007edabb FUN_007edabb
 * calls 007eda45 FUN_007eda45
 * calls 007edb85 FUN_007edb85
 */

void FUN_0086252f(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  
  iVar1 = FUN_007eda45(*(undefined4 *)(param_3 + 0x1c));
  *(int *)(param_3 + 0x20) = iVar1;
  if (iVar1 == 0) {
    FUN_0086233d();
  }
  else {
    if (*(int *)(param_3 + 0x10) == 0) {
      if (*(int *)(param_3 + 0x14) == 0) {
        uVar3 = *(uint *)(param_3 + 0x28);
        if (DAT_00907700 < *(uint *)(param_3 + 0x28)) {
          uVar3 = DAT_00907700;
        }
        uVar2 = FUN_007edb85(iVar1,*(undefined4 *)(param_3 + 0x24),*(undefined4 *)(param_3 + 0x2c),
                             uVar3,99,param_3);
        *(undefined4 *)(param_3 + 0x1c) = uVar2;
        if (*(int *)(param_3 + 0x1c) == 0) {
          return;
        }
        pcVar4 = FUN_008623a8;
      }
      else {
        uVar2 = FUN_007edc2a(iVar1,99,param_3);
        *(undefined4 *)(param_3 + 0x1c) = uVar2;
        if (*(int *)(param_3 + 0x1c) == 0) {
          return;
        }
        pcVar4 = FUN_00862432;
      }
    }
    else {
      uVar2 = FUN_007edb59(iVar1,99,param_3);
      *(undefined4 *)(param_3 + 0x1c) = uVar2;
      if (*(int *)(param_3 + 0x1c) == 0) {
        return;
      }
      pcVar4 = FUN_00862390;
    }
    FUN_007edabb(*(undefined4 *)(param_3 + 0x1c),pcVar4);
  }
  return;
}

