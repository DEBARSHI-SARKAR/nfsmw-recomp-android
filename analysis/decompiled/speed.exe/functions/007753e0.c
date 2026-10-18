/* speed.exe 007753e0 FUN_007753e0; analysis pseudocode, not buildable source.
 * calls 005d2d30 FUN_005d2d30
 * calls 005d0c70 FUN_005d0c70
 * calls 00773fd0 FUN_00773fd0
 * calls 005d2e60 FUN_005d2e60
 */

void __thiscall FUN_007753e0(int param_1,int param_2)

{
  float10 fVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((*(byte *)(param_2 + 0xb) & 1) == 0) {
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(float *)(param_1 + 0xbc) = *(float *)(param_1 + 200) - *(float *)(param_1 + 0xd4);
    *(float *)(param_1 + 0xc0) = *(float *)(param_1 + 0xcc) - *(float *)(param_1 + 0xd8);
    *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0xd0) - *(float *)(param_1 + 0xdc);
    FUN_00773fd0(param_1 + 0xd4,param_1 + 200,param_2,*(undefined4 *)(param_1 + 0x90),param_1 + 0x98
                );
    if (*(char *)(param_1 + 0x55) != '\0') {
      FUN_00773fd0(param_1 + 0x104,param_1 + 0xf8,param_2,*(undefined4 *)(param_1 + 0x90),
                   param_1 + 0xa4);
      FUN_00773fd0(param_1 + 0x134,param_1 + 0x128,param_2,*(undefined4 *)(param_1 + 0x90),
                   param_1 + 0xb0);
    }
  }
  else {
    FUN_005d0c70(*(undefined4 *)(param_1 + 0x90),&local_30);
    *(undefined4 *)(param_1 + 0x98) = local_30;
    *(undefined4 *)(param_1 + 0x9c) = local_2c;
    *(undefined4 *)(param_1 + 0xa0) = local_28;
    FUN_005d2d30(*(undefined4 *)(param_1 + 0x90),&local_30);
    *(undefined4 *)(param_1 + 0xbc) = local_30;
    *(undefined4 *)(param_1 + 0xc0) = local_2c;
    *(undefined4 *)(param_1 + 0xc4) = local_28;
    fVar1 = (float10)FUN_005d2e60(*(undefined4 *)(param_1 + 0x90));
    *(float *)(param_1 + 0x94) = (float)fVar1;
    if (*(char *)(param_1 + 0x55) != '\0') {
      FUN_005d0c70(*(undefined4 *)(param_1 + 0x90),&local_20);
      FUN_005d0c70(*(undefined4 *)(param_1 + 0x90),&local_10);
      *(undefined4 *)(param_1 + 0xa4) = local_20;
      *(undefined4 *)(param_1 + 0xa8) = local_1c;
      *(undefined4 *)(param_1 + 0xac) = local_18;
      *(undefined4 *)(param_1 + 0xb0) = local_10;
      *(undefined4 *)(param_1 + 0xb4) = local_c;
      *(undefined4 *)(param_1 + 0xb8) = local_8;
      return;
    }
  }
  return;
}

