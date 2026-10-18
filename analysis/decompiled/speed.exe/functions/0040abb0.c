/* speed.exe 0040abb0 FUN_0040abb0; analysis pseudocode, not buildable source.
 * calls 007c5250 _qsort
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040abb0(void *param_1,size_t param_2,float param_3)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  size_t sVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float local_c [3];
  
  sVar4 = param_2;
  _qsort(param_1,param_2,0xc,(_PtFuncCompare *)&LAB_0040ab70);
  iVar7 = 0;
  iVar5 = 0;
  fVar3 = _DAT_00890e98;
  if (3 < (int)param_2) {
    pfVar6 = (float *)((int)param_1 + 0x10);
    do {
      fVar2 = pfVar6[-3];
      if (fVar2 < _DAT_00890968) {
        fVar2 = -fVar2;
      }
      if (fVar2 < fVar3) {
        iVar7 = iVar5;
        fVar3 = fVar2;
      }
      fVar2 = *pfVar6;
      if (fVar2 < _DAT_00890968) {
        fVar2 = -fVar2;
      }
      if (fVar2 < fVar3) {
        iVar7 = iVar5 + 1;
        fVar3 = fVar2;
      }
      fVar2 = pfVar6[3];
      if (fVar2 < _DAT_00890968) {
        fVar2 = -fVar2;
      }
      if (fVar2 < fVar3) {
        iVar7 = iVar5 + 2;
        fVar3 = fVar2;
      }
      fVar2 = pfVar6[6];
      if (fVar2 < _DAT_00890968) {
        fVar2 = -fVar2;
      }
      if (fVar2 < fVar3) {
        iVar7 = iVar5 + 3;
        fVar3 = fVar2;
      }
      iVar5 = iVar5 + 4;
      pfVar6 = pfVar6 + 0xc;
    } while (iVar5 < (int)(param_2 - 3));
  }
  if (iVar5 < (int)param_2) {
    pfVar6 = (float *)((int)param_1 + iVar5 * 0xc + 4);
    do {
      fVar2 = *pfVar6;
      if (fVar2 < _DAT_00890968) {
        fVar2 = -fVar2;
      }
      if (fVar2 < fVar3) {
        iVar7 = iVar5;
        fVar3 = fVar2;
      }
      iVar5 = iVar5 + 1;
      pfVar6 = pfVar6 + 3;
    } while (iVar5 < (int)param_2);
  }
  fVar3 = (float)(int)param_2;
  param_2 = 0;
  fVar2 = (float)_DAT_00890ea0;
  if (0 < (int)sVar4) {
    do {
      fVar8 = (float10)(int)param_2 * (float10)(fVar2 / fVar3) * (float10)_DAT_0089096c;
      fVar9 = (float10)fsin(fVar8);
      local_c[1] = 0.0;
      puVar1 = (undefined4 *)((int)param_1 + ((int)(param_2 + iVar7) % (int)sVar4) * 0xc);
      local_c[0] = (float)(fVar9 * (float10)param_3);
      fVar8 = (float10)fcos(fVar8);
      local_c[2] = (float)(fVar8 * (float10)param_3);
      (**(code **)(*(int *)*puVar1 + 0x50))(local_c);
      (**(code **)(*(int *)*puVar1 + 0x48))(&DAT_0090d6f0);
      (**(code **)(*(int *)*puVar1 + 0x1c))();
      param_2 = param_2 + 1;
    } while ((int)param_2 < (int)sVar4);
  }
  return;
}

