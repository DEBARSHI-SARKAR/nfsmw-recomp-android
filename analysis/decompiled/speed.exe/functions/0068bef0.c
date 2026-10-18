/* speed.exe 0068bef0 FUN_0068bef0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0068bef0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  int iVar12;
  
  pfVar11 = (float *)(**(code **)(*(int *)(param_1 + 0x48) + 0x20))();
  fVar1 = *param_2;
  fVar2 = *pfVar11;
  fVar3 = param_2[1];
  fVar4 = pfVar11[1];
  fVar5 = param_2[2];
  fVar6 = pfVar11[2];
  pfVar11 = (float *)(**(code **)(*(int *)(param_1 + 0x50) + 0x98))();
  fVar7 = pfVar11[2];
  fVar8 = pfVar11[1];
  fVar9 = *pfVar11;
  (**(code **)(*(int *)(param_1 + 0x50) + 0x9c))();
  pfVar11 = (float *)(**(code **)(*(int *)(param_1 + 0x50) + 0x98))();
  fVar10 = *pfVar11 * param_2[3] + pfVar11[1] * param_2[4] + pfVar11[2] * param_2[5];
  if (fVar10 < _DAT_00890968) {
    fVar10 = -fVar10;
  }
  if (_DAT_00890968 < (fVar1 - fVar2) * fVar9 + (fVar3 - fVar4) * fVar8 + (fVar5 - fVar6) * fVar7) {
    if (fVar10 < _DAT_00891058) {
      return *(int *)(param_1 + 0x188) + 0x18;
    }
    return *(int *)(param_1 + 0x188) + 0x30;
  }
  iVar12 = *(int *)(param_1 + 0x188);
  if (fVar10 >= _DAT_00891058) {
    iVar12 = iVar12 + 0x48;
  }
  return iVar12;
}

