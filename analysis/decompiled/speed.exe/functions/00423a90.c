/* speed.exe 00423a90 FUN_00423a90; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 * calls 005d59f0 FUN_005d59f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00423a90(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  float *pfVar9;
  int *piVar10;
  float local_1c;
  
  piVar10 = (int *)**(int **)(param_3 + 4);
  local_1c = 0.0;
  if (piVar10 != *(int **)(param_3 + 4)) {
    do {
      if ((*(int *)(piVar10[2] + 0x14) != 0) &&
         (piVar8 = (int *)FUN_005d59f0(&LAB_004039f0), piVar8 != (int *)0x0)) {
        pfVar9 = (float *)(**(code **)(*piVar8 + 0x20))();
        fVar3 = pfVar9[1];
        fVar4 = pfVar9[2];
        fVar5 = *param_2 - *pfVar9;
        fVar1 = param_2[1];
        fVar2 = param_2[2];
        fVar6 = param_2[2] - fVar4;
        fVar7 = param_2[1] - fVar3;
        fVar6 = _DAT_0089096c / (fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5);
        *param_1 = fVar5 * fVar6 + *param_1;
        param_1[1] = fVar6 * (fVar1 - fVar3) + param_1[1];
        param_1[2] = (fVar2 - fVar4) * fVar6 + param_1[2];
        local_1c = local_1c + _DAT_0089096c;
      }
      piVar10 = (int *)*piVar10;
    } while (piVar10 != (int *)*(int *)(param_3 + 4));
    if (_DAT_00890968 < local_1c) {
      local_1c = _DAT_0089096c / local_1c;
      *param_1 = local_1c * *param_1;
      param_1[1] = local_1c * param_1[1];
      param_1[2] = local_1c * param_1[2];
      FUN_0040fe20(param_1,param_1);
    }
  }
  return;
}

