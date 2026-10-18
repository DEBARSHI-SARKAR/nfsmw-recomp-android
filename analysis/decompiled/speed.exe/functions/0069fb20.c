/* speed.exe 0069fb20 FUN_0069fb20; analysis pseudocode, not buildable source.
 * calls 0068d6a0 FUN_0068d6a0
 * calls 006903c0 FUN_006903c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0069fb20(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  float fVar1;
  float fVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  fVar1 = *(float *)(param_2 + 0x5c);
  if (*(float *)(param_2 + 0x5c) < *(float *)(param_2 + 0x7c)) {
    fVar1 = *(float *)(param_2 + 0x7c);
  }
  fVar2 = _DAT_0089096c - *(float *)(param_2 + 0x4c);
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  fVar1 = fVar1 * _DAT_00890dac + _DAT_008a0dbc;
  *(float *)(param_1 + 0x11c) = fVar1;
  fVar1 = fVar1 * *(float *)(param_2 + 0x8c);
  if (*(short *)(param_2 + 200) != 1) {
    fVar1 = fVar1 * *(float *)(*(int *)(param_1 + 0xb4) + 0x48);
  }
  FUN_0068d6a0(fVar1 * _DAT_0089095c,param_2,&local_20,&local_10);
  *param_3 = local_10;
  param_3[1] = local_c;
  param_3[2] = local_8;
  *param_4 = local_20;
  param_4[1] = local_1c;
  param_4[2] = local_18;
  *(undefined4 *)(param_1 + 0x108) = local_14;
  *(undefined4 *)(param_1 + 0x10c) = local_4;
  FUN_006903c0(param_2);
  return;
}

