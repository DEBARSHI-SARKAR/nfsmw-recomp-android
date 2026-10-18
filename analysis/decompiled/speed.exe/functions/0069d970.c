/* speed.exe 0069d970 FUN_0069d970; analysis pseudocode, not buildable source.
 * calls 00671330 FUN_00671330
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_0069d970(int param_1,float param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  float fVar1;
  
  FUN_00671330(1);
  fVar1 = _DAT_00890cd4;
  if (_DAT_00890cd4 < param_2) {
    fVar1 = param_2;
  }
  *(float *)(param_1 + 0xc4) = fVar1;
  *(int *)(param_1 + 0xf8) = param_3;
  *(undefined4 *)(param_1 + 0x100) = param_4;
  *(int *)(param_1 + 0x10c) = param_3 >> 1;
  *(undefined4 *)(param_1 + 0x104) = param_5;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xec) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x110) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x120) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x124) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x128) = 0x3f800000;
  *(undefined4 *)(param_1 + 300) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x138) = 1;
  return param_1;
}

