/* speed.exe 005b9b30 FUN_005b9b30; analysis pseudocode, not buildable source.
 * calls 005ae080 FUN_005ae080
 * calls 005b2d80 FUN_005b2d80
 * calls 005ae030 FUN_005ae030
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_005b9b30(int param_1,int param_2,int param_3,float *param_4,undefined4 *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  iVar4 = FUN_005ae030(param_2);
  if (iVar4 == -1) {
    return 0;
  }
  iVar5 = FUN_005ae080(param_3);
  if (iVar5 == -1) {
    return 0;
  }
  fVar1 = (float)*(int *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x60) < 0) {
    fVar1 = fVar1 + _DAT_00891214;
  }
  fVar1 = *(float *)(param_1 + 0x84) / fVar1;
  fVar3 = (float)*(int *)(param_1 + 100);
  if (*(int *)(param_1 + 100) < 0) {
    fVar3 = fVar3 + _DAT_00891214;
  }
  fVar3 = *(float *)(param_1 + 0x88) / fVar3;
  fVar2 = (float)iVar4 * fVar1;
  *param_4 = fVar2;
  param_4[2] = fVar2 + fVar1;
  fVar1 = (float)iVar5 * fVar3;
  param_4[1] = fVar1;
  param_4[3] = fVar1 + fVar3;
  iVar5 = FUN_005ae080(param_3);
  iVar4 = *(int *)(param_1 + 0x60);
  iVar6 = FUN_005ae030(param_2);
  puVar9 = (undefined4 *)((iVar5 * iVar4 + iVar6) * 0x30 + *(int *)(param_1 + 0x8c));
  puVar10 = param_5;
  for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  iVar4 = *(int *)(param_1 + 0x6c);
  if (param_2 < 0) {
    if (iVar4 < 2) {
      param_2 = 0;
    }
    else {
      param_2 = iVar4 - -param_2 % iVar4;
    }
  }
  else {
    param_2 = param_2 % iVar4;
  }
  iVar5 = *(int *)(param_1 + 0x70);
  if (param_3 < 0) {
    if (iVar5 < 2) {
      param_3 = 0;
    }
    else {
      param_3 = iVar5 - -param_3 % iVar5;
    }
  }
  else {
    param_3 = param_3 % iVar5;
  }
  if ((((iVar4 == *(int *)(param_1 + 0x60)) || (param_2 == *(int *)(param_1 + 0x7c))) &&
      ((iVar5 == *(int *)(param_1 + 100) || (param_3 == *(int *)(param_1 + 0x80))))) &&
     ((*(byte *)(param_1 + 0x68) & 0x14) == 0)) {
    uVar7 = FUN_005b2d80();
    *param_5 = uVar7;
  }
  return 1;
}

