/* speed.exe 0074a320 FUN_0074a320; analysis pseudocode, not buildable source.
 * calls 0045da70 FUN_0045da70
 * calls 0045f490 FUN_0045f490
 */

void __thiscall FUN_0074a320(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float *pfVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  float10 fVar13;
  float10 fVar14;
  float local_50;
  float local_4c;
  float local_48;
  float local_28;
  
  fVar13 = (float10)FUN_0045da70(*(undefined4 *)(param_1 + 0x3870));
  fVar1 = (float)fVar13;
  fVar13 = (float10)FUN_0045da70(DAT_009031f0);
  fVar14 = (float10)FUN_0045da70(0x41200000);
  fVar2 = (float)fVar14;
  local_50 = *(float *)(param_1 + 0x3840) - *(float *)(param_1 + 0x3830);
  local_4c = *(float *)(param_1 + 0x3844) - *(float *)(param_1 + 0x3834);
  local_48 = *(float *)(param_1 + 0x3848) - *(float *)(param_1 + 0x3838);
  local_28 = local_48;
  FUN_0045f490(&local_50,&local_50);
  fVar3 = *(float *)(param_1 + 0x250);
  fVar4 = *(float *)(param_1 + 0x254);
  pfVar9 = (float *)(*(int *)(param_1 + 0x298) * 0x10 + param_2);
  fVar5 = *(float *)(param_1 + 0x3830);
  fVar6 = *(float *)(param_1 + 0x3834);
  pfVar9[2] = local_48 * fVar1 + *(float *)(param_1 + 0x3838) + fVar2 * *(float *)(param_1 + 600);
  *pfVar9 = fVar2 * fVar3 + local_50 * fVar1 + fVar5;
  pfVar9[1] = local_4c * fVar1 + fVar6 + fVar2 * fVar4;
  iVar10 = *(int *)(param_1 + 0x298) * 0x10;
  *(float *)(iVar10 + 8 + param_2) = *(float *)(iVar10 + 8 + param_2) - (float)fVar13;
  puVar11 = (undefined4 *)(*(int *)(param_1 + 0x298) * 0x10 + param_2);
  puVar12 = (undefined4 *)(*(int *)(param_1 + 0x29c) * 0x10 + param_2);
  uVar7 = puVar11[1];
  uVar8 = puVar11[2];
  *puVar12 = *puVar11;
  puVar12[1] = uVar7;
  puVar12[2] = uVar8;
  return;
}

