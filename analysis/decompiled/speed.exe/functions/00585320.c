/* speed.exe 00585320 FUN_00585320; analysis pseudocode, not buildable source.
 * calls 005848b0 FUN_005848b0
 */

void __thiscall FUN_00585320(uint *param_1,ushort param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  uVar2 = (uint)param_2;
  if (*param_1 < uVar2) {
    *param_1 = uVar2;
  }
  param_1 = param_1 + uVar2 * 0x2c + 4;
  FUN_005848b0(*(undefined4 *)(param_3 + 0x2c),param_1,&local_10,*(undefined2 *)(param_3 + 0x20),
               0x3f800000);
  if (local_10 < 1) {
    local_10 = 0;
  }
  else if (0xff < local_10) {
    local_10 = 0xff;
  }
  *(char *)((int)param_1 + 0xab) = (char)local_10;
  if (local_c < 1) {
    local_c = 0;
  }
  else if (0xff < local_c) {
    local_c = 0xff;
  }
  *(char *)((int)param_1 + 0xaa) = (char)local_c;
  if (local_8 < 1) {
    local_8 = 0;
  }
  else if (0xff < local_8) {
    local_8 = 0xff;
  }
  *(char *)((int)param_1 + 0xa9) = (char)local_8;
  if (local_4 < 1) {
    local_4 = 0;
  }
  else if (0xff < local_4) {
    local_4 = 0xff;
  }
  *(char *)(param_1 + 0x2a) = (char)local_4;
  if (param_1[0x28] != param_3) {
    param_1[0x28] = param_3;
    param_1[0x29] = 0;
    for (iVar1 = *(int *)(param_3 + 100); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    }
  }
  return;
}

