/* speed.exe 005c5ec0 FUN_005c5ec0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c5ec0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = *param_1;
  fVar3 = (float10)_DAT_008a2f94;
  fVar2 = (float10)fsin((float10)fVar1 * fVar3);
  *param_2 = (float)fVar2;
  fVar3 = (float10)fcos((float10)fVar1 * fVar3);
  *param_3 = (float)fVar3;
  return;
}

