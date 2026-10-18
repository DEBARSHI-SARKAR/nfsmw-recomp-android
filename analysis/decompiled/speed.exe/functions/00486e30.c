/* speed.exe 00486e30 FUN_00486e30; analysis pseudocode, not buildable source.
 * calls 00401670 FUN_00401670
 */

void __thiscall FUN_00486e30(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_18;
  float local_14;
  float local_10;
  
  FUN_00401670(param_1 + 0x8c,param_1,&local_18);
  fVar1 = *(float *)(param_1 + 0xb4);
  fVar2 = *(float *)(param_1 + 0xb8);
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  *param_3 = *param_2 - (local_18 + *(float *)(param_1 + 0xb0));
  param_3[1] = fVar3 - (local_14 + fVar1);
  param_3[2] = fVar4 - (local_10 + fVar2);
  return;
}

