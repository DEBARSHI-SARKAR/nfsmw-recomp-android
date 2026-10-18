/* speed.exe 006ece90 FUN_006ece90; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 */

float10 __thiscall FUN_006ece90(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  
  fVar1 = *param_2 - *(float *)(param_1 + 100);
  fVar2 = param_2[1] - *(float *)(param_1 + 0x68);
  fVar3 = param_2[2] - *(float *)(param_1 + 0x6c);
  fVar5 = (float10)FUN_005c5e80(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
  fVar1 = (float)(fVar5 * (float10)*(float *)(param_1 + 0x70));
  fVar2 = *param_2 - *(float *)(param_1 + 0x74);
  fVar4 = param_2[1] - *(float *)(param_1 + 0x78);
  fVar3 = param_2[2] - *(float *)(param_1 + 0x7c);
  fVar5 = (float10)FUN_005c5e80(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
  if ((float10)fVar1 < fVar5) {
    fVar5 = (float10)fVar1;
  }
  return fVar5;
}

