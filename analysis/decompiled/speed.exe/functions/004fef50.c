/* speed.exe 004fef50 FUN_004fef50; analysis pseudocode, not buildable source.
 * calls 00486610 FUN_00486610
 * calls 005cfa60 FUN_005cfa60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fef50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 float *param_5,float *param_6)

{
  float fVar1;
  undefined1 local_40 [64];
  
  FUN_005cfa60(local_40,(float)*(ushort *)(param_1 + 0x6a) * _DAT_00894958,*param_4,param_4[1],
               param_4[2]);
  FUN_00486610(param_3,local_40,param_5);
  FUN_00486610(param_2,local_40,param_6);
  fVar1 = *(float *)(param_1 + 0xc);
  *param_6 = *param_6 * fVar1;
  param_6[1] = param_6[1] * fVar1;
  param_6[2] = param_6[2] * fVar1;
  fVar1 = *(float *)(param_1 + 0xc);
  *param_5 = *param_5 * fVar1;
  param_5[1] = param_5[1] * fVar1;
  param_5[2] = param_5[2] * fVar1;
  return;
}

