/* speed.exe 00729060 FUN_00729060; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

undefined4 FUN_00729060(int param_1,float *param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  
  fVar1 = *param_2 - *(float *)(param_1 + 0xa0);
  fVar3 = param_2[1] - *(float *)(param_1 + 0xa4);
  fVar2 = param_2[2] - *(float *)(param_1 + 0xa8);
  if (fVar1 * *(float *)(param_1 + 0xb0) +
      fVar3 * *(float *)(param_1 + 0xb4) + fVar2 * *(float *)(param_1 + 0xb8) < -param_3) {
    return 0;
  }
  *param_4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  uVar4 = FUN_007c4b80();
  return uVar4;
}

