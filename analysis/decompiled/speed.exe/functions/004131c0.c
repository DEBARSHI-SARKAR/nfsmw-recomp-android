/* speed.exe 004131c0 FUN_004131c0; analysis pseudocode, not buildable source.
 * calls 00410220 FUN_00410220
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004131c0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  float10 fVar7;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar4 = (**(code **)(**(int **)(param_1 + 0x48) + 100))();
  fStack_c = *(float *)(iVar4 + 0x10);
  fStack_8 = *(float *)(iVar4 + 0x14);
  fStack_4 = *(float *)(iVar4 + 0x18);
  if (*(int **)(iVar4 + 0x1c) == (int *)0x0) {
    pfVar6 = (float *)&DAT_008a2fb4;
  }
  else {
    piVar5 = (int *)(**(code **)(**(int **)(iVar4 + 0x1c) + 0x54))();
    pfVar6 = (float *)(**(code **)(*piVar5 + 0x24))();
  }
  fVar1 = *pfVar6;
  fVar2 = pfVar6[1];
  fVar3 = pfVar6[2];
  if (*(int **)(iVar4 + 0x1c) != (int *)0x0) {
    piVar5 = (int *)(**(code **)(**(int **)(iVar4 + 0x1c) + 0x54))();
    fVar7 = (float10)(**(code **)(*piVar5 + 0x30))();
    fStack_30 = fVar1;
    fStack_2c = fVar2;
    fStack_28 = fVar3;
    if ((float10)_DAT_00891080 <= fVar7) goto LAB_00413257;
  }
  fStack_30 = *(float *)(iVar4 + 0x20);
  fStack_2c = *(float *)(iVar4 + 0x24);
  fStack_28 = *(float *)(iVar4 + 0x28);
LAB_00413257:
  FUN_00410220(&fStack_30);
  fStack_1c = -fStack_30;
  fStack_18 = fStack_28;
  fStack_24 = fStack_28;
  uStack_20 = 0;
  fStack_14 = 0.0;
  fStack_10 = fStack_1c;
  FUN_00410220(&fStack_18);
  pfVar6 = (float *)(**(code **)(**(int **)(param_1 + 0x54) + 0x54))();
  fVar1 = *pfVar6;
  fVar2 = pfVar6[2];
  *param_2 = fVar2 * fStack_30 + fStack_18 * fVar1 + fStack_c;
  param_2[1] = fStack_2c * fVar2 + fStack_14 * fVar1 + fStack_8;
  param_2[2] = fVar2 * fStack_28 + fStack_10 * fVar1 + fStack_4;
  return;
}

