/* speed.exe 00620b90 FUN_00620b90; analysis pseudocode, not buildable source.
 * calls 005ca910 FUN_005ca910
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00620b90(short *param_1,int param_2)

{
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_10 = (float)(int)*param_1 * _DAT_00896ab8;
  local_c = (float)(int)param_1[1] * _DAT_00896ab8;
  local_8 = (float)(int)param_1[2] * _DAT_00896ab8;
  local_4 = (float)(int)param_1[3] * _DAT_00896ab8;
  FUN_005ca910(&local_10,param_2);
  *(float *)(param_2 + 0x30) = (float)(int)param_1[4] * _DAT_00890d60;
  *(float *)(param_2 + 0x34) = (float)(int)param_1[5] * _DAT_00890d60;
  *(float *)(param_2 + 0x38) = (float)(int)param_1[6] * _DAT_00890d60;
  *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
  return;
}

