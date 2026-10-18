/* speed.exe 006c6450 FUN_006c6450; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 0045f490 FUN_0045f490
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c6450(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  local_40 = *(float *)(DAT_009b392c + 0x30);
  if (_DAT_0089096c <= local_40) {
    local_40 = 1.0;
  }
  local_3c = *(float *)(DAT_009b392c + 0x34);
  if (_DAT_0089096c <= local_3c) {
    local_3c = 1.0;
  }
  local_38 = *(float *)(DAT_009b392c + 0x38);
  if (_DAT_0089096c <= local_38) {
    local_38 = 1.0;
  }
  local_34 = *(undefined4 *)(DAT_009b392c + 0x3c);
  iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0x74);
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x40) != '\0')) {
    (**(code **)(**(int **)(param_1 + 0x48) + 0x88))(*(int **)(param_1 + 0x48),iVar1,&local_40);
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0x44) + 0x40c) != 0) {
    local_30 = *(float *)(DAT_009b392c + 0x180);
    local_2c = *(float *)(DAT_009b392c + 0x184);
    local_28 = *(float *)(DAT_009b392c + 0x188);
    FUN_0045f490(&local_30,&local_30);
    local_20 = local_30 * _DAT_00890da8;
    local_1c = local_2c * _DAT_00890da8;
    local_14 = 0;
    local_18 = local_28 * _DAT_00890da8;
    (**(code **)(**(int **)(param_1 + 0x48) + 0x88))
              (*(int **)(param_1 + 0x48),*(undefined4 *)(*(int *)(param_1 + 0x44) + 0xf9c),&local_20
              );
    uVar2 = FUN_007c4b80();
    if (0xfe < uVar2) {
      uVar2 = 0xff;
    }
    uVar3 = FUN_007c4b80();
    if (0xfe < uVar3) {
      uVar3 = 0xff;
    }
    uVar4 = FUN_007c4b80();
    if (0xfe < uVar4) {
      uVar4 = 0xff;
    }
    (**(code **)(**(int **)(param_1 + 0x48) + 0x68))
              (*(int **)(param_1 + 0x48),*(undefined4 *)(*(int *)(param_1 + 0x44) + 0x40c),
               ((uVar2 | 0xffffff00) << 8 | uVar3 & 0xff) << 8 | uVar4 & 0xff);
  }
  return;
}

