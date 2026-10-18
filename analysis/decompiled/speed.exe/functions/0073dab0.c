/* speed.exe 0073dab0 FUN_0073dab0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0073dab0(float param_1,int param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)_DAT_0089096c - (float10)param_1;
  return (float10)param_1 * (float10)param_1 * (float10)param_1 *
         (float10)*(float *)(param_2 + 0x34) +
         fVar1 * fVar1 * fVar1 * (float10)*(float *)(param_2 + 4) +
         ((float10)param_1 * (float10)*(float *)(param_2 + 0x24) +
         fVar1 * (float10)*(float *)(param_2 + 0x14)) * fVar1 * (float10)param_1 *
         (float10)_DAT_008959e4;
}

