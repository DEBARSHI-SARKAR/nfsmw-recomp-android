/* speed.exe 00567510 FUN_00567510; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00567510(float *param_1,float *param_2,int param_3)

{
  *param_2 = (*param_1 - *(float *)(param_3 + 0xac)) / *(float *)(param_3 + 0xb4);
  param_2[1] = (*(float *)(param_3 + 0xb0) - param_1[1]) / *(float *)(param_3 + 0xb4) +
               _DAT_0089096c;
  return;
}

