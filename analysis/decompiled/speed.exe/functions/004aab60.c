/* speed.exe 004aab60 FUN_004aab60; analysis pseudocode, not buildable source.
 */

float10 __thiscall FUN_004aab60(int param_1,float *param_2)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  fVar2 = (float10)*(float *)(iVar1 + 0x40) - (float10)*param_2;
  fVar3 = (float10)*(float *)(iVar1 + 0x44) - (float10)param_2[1];
  fVar4 = (float10)*(float *)(iVar1 + 0x48) - (float10)param_2[2];
  return SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
}

