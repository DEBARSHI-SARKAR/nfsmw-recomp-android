/* speed.exe 006c6300 FUN_006c6300; analysis pseudocode, not buildable source.
 * calls 0045f490 FUN_0045f490
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c6300(int param_1)

{
  int iVar1;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  
  local_40 = _DAT_009018c4 * *(float *)(DAT_009b392c + 0x20);
  if (_DAT_0089096c <= local_40) {
    local_40 = 1.0;
  }
  local_3c = _DAT_009018c4 * *(float *)(DAT_009b392c + 0x24);
  if (_DAT_0089096c <= local_3c) {
    local_3c = 1.0;
  }
  local_38 = _DAT_009018c4 * *(float *)(DAT_009b392c + 0x28);
  if (_DAT_0089096c <= local_38) {
    local_38 = 1.0;
  }
  local_34 = *(undefined4 *)(DAT_009b392c + 0x2c);
  iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0x204);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + 0x48) + 0x88))(*(int **)(param_1 + 0x48),iVar1,&local_40);
  }
  if ((*(char *)(param_1 + 0x40) == '\0') && (*(int *)(*(int *)(param_1 + 0x44) + 0xf9c) != 0)) {
    local_30 = *(float *)(DAT_009b392c + 0x180);
    local_2c = *(float *)(DAT_009b392c + 0x184);
    local_28 = *(float *)(DAT_009b392c + 0x188);
    FUN_0045f490(&local_30,&local_30);
    fStack_20 = local_30 * _DAT_00890da8;
    fStack_1c = local_2c * _DAT_00890da8;
    uStack_14 = 0;
    fStack_18 = local_28 * _DAT_00890da8;
    (**(code **)(**(int **)(param_1 + 0x48) + 0x88))
              (*(int **)(param_1 + 0x48),*(undefined4 *)(*(int *)(param_1 + 0x44) + 0xf9c),
               &fStack_20);
  }
  return;
}

