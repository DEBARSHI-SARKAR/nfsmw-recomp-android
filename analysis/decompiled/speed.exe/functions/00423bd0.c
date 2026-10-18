/* speed.exe 00423bd0 FUN_00423bd0; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 * calls 005d59f0 FUN_005d59f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00423bd0(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float *pfVar5;
  int *piVar6;
  float10 fVar7;
  float local_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  piVar6 = (int *)**(int **)(param_3 + 4);
  local_10 = 0.0;
  if (piVar6 != *(int **)(param_3 + 4)) {
    do {
      if ((*(int *)(piVar6[2] + 0x14) != 0) &&
         (piVar4 = (int *)FUN_005d59f0(&LAB_004039f0), piVar4 != (int *)0x0)) {
        fVar7 = (float10)(**(code **)(*piVar4 + 0x2c))();
        if (fVar7 <= (float10)_DAT_0089096c) {
          (**(code **)(*piVar4 + 0x34))(&fStack_c);
        }
        else {
          pfVar5 = (float *)(**(code **)(*piVar4 + 0x24))();
          fStack_c = *pfVar5;
          fStack_8 = pfVar5[1];
          fStack_4 = pfVar5[2];
        }
        *param_1 = fStack_c + *param_1;
        param_1[1] = fStack_8 + param_1[1];
        param_1[2] = fStack_4 + param_1[2];
        local_10 = local_10 + _DAT_0089096c;
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)*(int *)(param_3 + 4));
    if (_DAT_00890968 < local_10) {
      local_10 = _DAT_0089096c / local_10;
      fVar1 = *param_1;
      *param_1 = local_10 * fVar1;
      fVar2 = param_1[1];
      param_1[1] = local_10 * fVar2;
      fVar3 = param_1[2];
      param_1[2] = local_10 * fVar3;
      *param_1 = local_10 * fVar1 - *param_2;
      param_1[1] = local_10 * fVar2 - param_2[1];
      param_1[2] = local_10 * fVar3 - param_2[2];
      FUN_0040fe20(param_1,param_1);
    }
  }
  return;
}

