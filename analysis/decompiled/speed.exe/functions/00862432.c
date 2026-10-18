/* speed.exe 00862432 FUN_00862432; analysis pseudocode, not buildable source.
 * calls 007edb59 FUN_007edb59
 * calls 007edabb FUN_007edabb
 * calls 007eda45 FUN_007eda45
 * calls 007edb85 FUN_007edb85
 */

void FUN_00862432(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  char *local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  char *local_24;
  uint *local_20;
  uint local_1c;
  undefined4 local_18;
  uint *local_14;
  uint local_10 [3];
  
  uVar1 = FUN_007eda45(*(undefined4 *)(param_3 + 0x1c));
  if (*(int *)(param_3 + 0x10) == 0) {
    local_10[2] = 0;
    local_10[0] = *(uint *)(param_3 + 0x28) >> 6 & 4;
    local_14 = local_10;
    local_1c = *(uint *)(param_3 + 0x28) >> 9 & 2;
    local_20 = &local_1c;
    *(undefined4 *)(param_3 + 0x28) = uVar1;
    local_2c = &local_28;
    local_18 = DAT_00907704;
    local_38 = &local_34;
    local_40 = 6;
    local_3c = 0x13f;
    local_34 = 5;
    local_30 = "d:\\packages\\realcore\\6.24.00\\source\\file\\cmn\\hlafile.cpp";
    local_28 = 1;
    local_24 = "ASYNCFILE BUF";
    local_10[1] = 1;
    uVar1 = (**(code **)*DAT_009076dc)(uVar1,&local_40);
    *(undefined4 *)(param_3 + 0x14) = uVar1;
    *(undefined4 *)(param_3 + 0x2c) = uVar1;
    uVar2 = *(uint *)(param_3 + 0x28);
    if (DAT_00907700 < *(uint *)(param_3 + 0x28)) {
      uVar2 = DAT_00907700;
    }
    uVar1 = FUN_007edb85(*(undefined4 *)(param_3 + 0x20),*(undefined4 *)(param_3 + 0x24),uVar1,uVar2
                         ,99,param_3);
    *(undefined4 *)(param_3 + 0x1c) = uVar1;
    if (*(int *)(param_3 + 0x1c) == 0) {
      return;
    }
    pcVar3 = FUN_008623a8;
  }
  else {
    uVar1 = FUN_007edb59(*(undefined4 *)(param_3 + 0x20),99,param_3);
    *(undefined4 *)(param_3 + 0x1c) = uVar1;
    if (*(int *)(param_3 + 0x1c) == 0) {
      return;
    }
    pcVar3 = FUN_00862390;
  }
  FUN_007edabb(*(undefined4 *)(param_3 + 0x1c),pcVar3);
  return;
}

