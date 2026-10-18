/* speed.exe 00423cf0 FUN_00423cf0; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 * calls 005d59f0 FUN_005d59f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00423cf0(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float *pfVar5;
  int *piVar6;
  float local_10;
  
  piVar6 = (int *)**(int **)(param_3 + 4);
  local_10 = 0.0;
  if (piVar6 != *(int **)(param_3 + 4)) {
    do {
      if ((*(int *)(piVar6[2] + 0x14) != 0) &&
         (piVar4 = (int *)FUN_005d59f0(&LAB_004039f0), piVar4 != (int *)0x0)) {
        pfVar5 = (float *)(**(code **)(*piVar4 + 0x20))();
        fVar2 = pfVar5[1];
        fVar3 = pfVar5[2];
        *param_1 = *pfVar5 + *param_1;
        param_1[1] = fVar2 + param_1[1];
        param_1[2] = fVar3 + param_1[2];
        local_10 = local_10 + _DAT_0089096c;
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)*(int *)(param_3 + 4));
    if (_DAT_00890968 < local_10) {
      local_10 = _DAT_0089096c / local_10;
      fVar2 = *param_1;
      *param_1 = local_10 * fVar2;
      fVar3 = param_1[1];
      param_1[1] = local_10 * fVar3;
      fVar1 = param_1[2];
      param_1[2] = local_10 * fVar1;
      *param_1 = local_10 * fVar2 - *param_2;
      param_1[1] = local_10 * fVar3 - param_2[1];
      param_1[2] = local_10 * fVar1 - param_2[2];
      FUN_0040fe20(param_1,param_1);
    }
  }
  return;
}

