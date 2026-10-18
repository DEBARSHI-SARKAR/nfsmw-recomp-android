/* speed.exe 004fc530 FUN_004fc530; analysis pseudocode, not buildable source.
 * calls 006bd900 FUN_006bd900
 * calls 006be140 FUN_006be140
 * calls 006bd920 FUN_006bd920
 * calls 0045f590 FUN_0045f590
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004fc530(int param_1,int param_2,int param_3,float *param_4)

{
  float fVar1;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined1 local_50 [76];
  
  FUN_006be140(local_50,param_2);
  if (param_4 == (float *)0x0) goto LAB_004fc653;
  local_60 = *param_4 - *(float *)(param_2 + 0x30);
  local_5c = param_4[1] - *(float *)(param_2 + 0x34);
  local_54 = 1.0;
  local_58 = param_4[2] - *(float *)(param_2 + 0x38);
  FUN_006bd920(&local_60,local_50,&local_60);
  local_64 = _DAT_00899c58;
  if (DAT_00925e90 == 3) {
    local_64 = _DAT_00899c5c;
  }
  fVar1 = SQRT(local_60 * local_60 + local_5c * local_5c + local_58 * local_58 + local_54 * local_54
              );
  if (_DAT_00899c58 <= fVar1) {
    if (fVar1 <= local_64) goto LAB_004fc5fb;
  }
  else {
    local_64 = 2.78;
    fVar1 = local_64;
LAB_004fc5fb:
    local_64 = fVar1;
  }
  local_54 = 0.0;
  FUN_0045f590(&local_60,&local_60);
  *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
  local_58 = local_64 * local_58;
  *(float *)(param_1 + 0xd8) = local_58;
  *(float *)(param_1 + 0xd0) = local_64 * local_60;
  *(float *)(param_1 + 0xd4) = local_64 * local_5c;
LAB_004fc653:
  if ((param_3 != 0) && (param_4 != (float *)0x0)) {
    FUN_006bd900(param_1 + 0xf0,param_2,param_3);
    *(undefined4 *)(param_1 + 0xfc) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x11c) = 0;
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0xd0);
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0xd4);
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0xd8);
    *(undefined4 *)(param_1 + 300) = 0;
  }
  return 1;
}

