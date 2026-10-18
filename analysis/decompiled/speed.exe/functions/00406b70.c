/* speed.exe 00406b70 FUN_00406b70; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00406b70(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float fStack_28;
  
  iVar6 = (**(code **)(**(int **)(param_1 + 0x48) + 0x48))();
  pfVar7 = (float *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x20))();
  pfVar8 = (float *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x24))();
  fVar2 = -*(float *)(iVar6 + 0x1c);
  fVar1 = *(float *)(iVar6 + 0x20);
  fVar3 = *pfVar8 * fVar1 + pfVar8[2] * fVar2;
  fStack_28 = (*pfVar7 - *(float *)(iVar6 + 0xc)) * fVar1 +
              (pfVar7[2] - *(float *)(iVar6 + 0x10)) * fVar2 + _DAT_0089096c;
  if (fStack_28 < _DAT_00890cd4) {
    fStack_28 = 0.1;
  }
  fVar4 = -((*pfVar7 - *(float *)(iVar6 + 0x14)) * fVar1 +
           (pfVar7[2] - *(float *)(iVar6 + 0x18)) * fVar2) + _DAT_0089096c;
  if (fVar4 < _DAT_00890cd4) {
    fVar4 = _DAT_00890cd4;
  }
  fVar5 = -fVar3;
  if (-fVar3 < _DAT_00890968) {
    fVar5 = _DAT_00890968;
  }
  if (fVar3 < _DAT_00890968) {
    fVar3 = _DAT_00890968;
  }
  fVar5 = (fVar5 / fStack_28) * (fVar5 / fStack_28);
  fStack_28 = fVar5 + fVar5 + _DAT_00890634 / (fStack_28 * fStack_28);
  fVar3 = (fVar3 / fVar4) * (fVar3 / fVar4);
  fVar3 = fVar3 + fVar3 + _DAT_00890634 / (fVar4 * fVar4);
  if (_DAT_00890d40 < fStack_28) {
    fStack_28 = 27.777779;
  }
  if (_DAT_00890d40 < fVar3) {
    fVar3 = _DAT_00890d40;
  }
  fVar3 = -fVar3;
  *param_2 = fVar1 * fStack_28 + fVar1 * fVar3;
  param_2[1] = fStack_28 * 0.0 + fVar3 * 0.0;
  param_2[2] = fVar2 * fStack_28 + fVar2 * fVar3;
  return;
}

