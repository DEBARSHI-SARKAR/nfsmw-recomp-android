/* speed.exe 00690560 FUN_00690560; analysis pseudocode, not buildable source.
 * calls 00671330 FUN_00671330
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_00690560(int param_1,float param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  float fVar1;
  
  FUN_00671330(0);
  fVar1 = _DAT_00890cd4;
  if (_DAT_00890cd4 < param_2) {
    fVar1 = param_2;
  }
  *(float *)(param_1 + 0xc4) = fVar1;
  *(int *)(param_1 + 0xec) = param_3;
  *(int *)(param_1 + 0xfc) = param_3 >> 1;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0xf4) = param_4;
  *(undefined4 *)(param_1 + 0xf8) = param_5;
  *(undefined4 *)(param_1 + 0x108) = 1;
  return param_1;
}

