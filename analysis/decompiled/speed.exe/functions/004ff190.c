/* speed.exe 004ff190 FUN_004ff190; analysis pseudocode, not buildable source.
 * calls 0045da70 FUN_0045da70
 * calls 0045d9e0 FUN_0045d9e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_004ff190(int *param_1,float param_2,float param_3,float *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  float10 fVar11;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  iVar10 = (int)param_3;
  if ((DAT_008f86ec == '\0') || ((*(uint *)((int)param_3 + 0x18) >> 4 & 1) == 0)) {
    return 0;
  }
  *param_4 = 0.0;
  iVar1 = *(int *)(*(int *)((int)param_3 + 0x7c) + 8);
  param_3 = *(float *)(iVar1 + 0xf4);
  if (*(char *)(iVar1 + 0x113) != '\0') {
    fVar11 = (float10)FUN_0045da70(param_3);
    param_3 = (float)fVar11;
  }
  iVar1 = *(int *)(*(int *)(iVar10 + 0x7c) + 8);
  fVar2 = *(float *)(iVar1 + 0xb8);
  fVar3 = *(float *)(iVar1 + 0xcc);
  fVar4 = *(float *)(iVar1 + 0xd8);
  fVar5 = *(float *)(iVar1 + 0xd0);
  if ((*(char *)(*(int *)(*(int *)(iVar10 + 0x7c) + 8) + 0x112) == '\0') &&
     ((*(uint *)(iVar10 + 0x18) >> 0x16 & 1) == 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if ((_DAT_00890968 < param_3) || (param_3 < _DAT_00890968)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if ((((_DAT_00890968 < fVar2) || (fVar2 < _DAT_00890968)) || (_DAT_00890968 < fVar3)) ||
     (fVar3 < _DAT_00890968)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if (((_DAT_00890968 < fVar4) || (fVar4 < _DAT_00890968)) ||
     ((_DAT_00890968 < fVar5 || (fVar5 < _DAT_00890968)))) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  if (((bVar7) && (!bVar6)) && (!bVar9)) {
    bVar7 = false;
  }
  switch(*param_1 + -1) {
  case 0:
    if (bVar8) {
      *param_1 = 2;
      param_1[1] = (int)(param_3 - param_2);
      return 0;
    }
    if (bVar7) {
      *param_1 = 3;
      fVar11 = (float10)FUN_0045d9e0(fVar3,&DAT_008f3214);
      fVar11 = (fVar11 + (float10)fVar2) - (float10)param_2;
      param_1[1] = (int)(float)fVar11;
      if ((float10)_DAT_00890968 <= fVar11) {
        return 1;
      }
      param_1[1] = 0;
      return 1;
    }
    *param_1 = 5;
    param_1[1] = 0;
    return 1;
  case 1:
    param_2 = (float)param_1[1] - param_2;
    bVar6 = param_2 < _DAT_00890968;
    bVar8 = param_2 == _DAT_00890968;
    param_1[1] = (int)param_2;
    if (bVar6 != bVar8) {
      *param_4 = param_2;
      if (!bVar7) {
        *param_1 = 5;
        param_1[1] = 0;
        return 1;
      }
LAB_004ff47f:
      *param_1 = 3;
      FUN_0045d9e0(fVar3,&DAT_008f3214);
      param_1[1] = (int)(float)(extraout_ST0_00 + (float10)fVar2 + (float10)(float)param_1[1]);
      return 1;
    }
    break;
  case 2:
    fVar2 = (float)param_1[1] - param_2;
    bVar8 = fVar2 < _DAT_00890968;
    bVar7 = fVar2 == _DAT_00890968;
    param_1[1] = (int)fVar2;
    if (bVar8 == bVar7) {
      return 1;
    }
    *param_4 = fVar2 + param_2;
    if (!bVar6) {
      *param_1 = 4;
      FUN_0045d9e0(fVar5,&DAT_008f3214);
      param_1[1] = (int)(float)(extraout_ST0 + (float10)fVar4 + (float10)(float)param_1[1]);
      return 1;
    }
    *param_1 = 6;
    param_1[1] = 0;
    return 1;
  case 3:
    param_2 = (float)param_1[1] - param_2;
    bVar6 = param_2 < _DAT_00890968;
    bVar8 = param_2 == _DAT_00890968;
    param_1[1] = (int)param_2;
    if (bVar6 != bVar8) {
      *param_4 = param_2;
      goto LAB_004ff47f;
    }
    break;
  case 4:
    return 1;
  default:
    return 0;
  }
  return 0;
}

