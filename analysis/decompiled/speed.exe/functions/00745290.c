/* speed.exe 00745290 FUN_00745290; analysis pseudocode, not buildable source.
 * calls 00503c00 FUN_00503c00
 * calls 007451d0 FUN_007451d0
 * calls 00444fe0 FUN_00444fe0
 * calls 0050af90 FUN_0050af90
 * calls 00503a90 FUN_00503a90
 * calls 004ff180 FUN_004ff180
 * calls 00401ae0 FUN_00401ae0
 * calls 00503bc0 FUN_00503bc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00745290(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 *param_6)

{
  int iVar1;
  float10 fVar2;
  undefined1 local_50 [48];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  fVar2 = (float10)FUN_00401ae0(param_2,*(undefined4 *)(param_1 + 0xc),
                                *(undefined4 *)(param_1 + 0x10));
  if (fVar2 < (float10)_DAT_00890968 == (fVar2 == (float10)_DAT_00890968)) {
    if (*param_1 != '\0') {
      FUN_007451d0();
    }
    if (*(int *)(param_1 + 8) == 0) {
      return;
    }
    if ((float)fVar2 <= _DAT_00890968) {
      return;
    }
    FUN_00444fe0(local_50,param_4);
    local_20 = *param_6;
    local_1c = param_6[1];
    local_18 = param_6[2];
    local_14 = 0x3f800000;
    FUN_00503bc0(local_50);
    FUN_00503c00(param_3);
    *(float *)(*(int *)(param_1 + 8) + 0x68) = (float)fVar2;
    FUN_0050af90(param_5);
    iVar1 = FUN_00503a90();
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    }
    if (*(int *)(param_1 + 0x14) < 0xb) {
      return;
    }
    iVar1 = *(int *)(param_1 + 8);
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      return;
    }
  }
  *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 0x80000;
  FUN_004ff180();
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  *param_1 = '\x01';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  return;
}

