/* speed.exe 0041db60 FUN_0041db60; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041db60(float *param_1,int *param_2,int *param_3,float param_4)

{
  int *piVar1;
  float10 fVar2;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    if (((*param_2 != 0) && (piVar1 = (int *)FUN_005d59f0(&LAB_00403700), piVar1 != (int *)0x0)) &&
       (fVar2 = (float10)(**(code **)(*piVar1 + 0x74))(), (float10)_DAT_00890968 < fVar2)) {
      if ((float10)param_4 <= fVar2) {
        fVar2 = (float10)param_4;
      }
      param_4 = (float)fVar2;
    }
    param_2 = param_2 + 1;
  } while (param_2 != param_3);
  *param_1 = param_4;
  return;
}

