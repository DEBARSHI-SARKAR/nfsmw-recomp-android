/* speed.exe 00653e20 FUN_00653e20; analysis pseudocode, not buildable source.
 * calls 00653b10 FUN_00653b10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00653e20(int param_1,float param_2,float param_3,char param_4,char param_5)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x7c);
  fVar1 = param_2 - *(float *)(param_1 + 0x80);
  *(float *)(param_1 + 0x7c) = param_2;
  if (param_5 == '\0') {
    _param_5 = (_DAT_008933d4 * fVar1 + *(float *)(param_1 + 0x80)) * param_3;
  }
  else {
    _param_5 = 0.0;
  }
  if (param_4 == '\0') {
    _param_4 = fVar1 / param_3;
  }
  else {
    _param_4 = 0.0;
  }
  FUN_00653b10(param_3);
  FUN_00653b10(_param_5);
  FUN_00653b10(_param_4);
  return;
}

