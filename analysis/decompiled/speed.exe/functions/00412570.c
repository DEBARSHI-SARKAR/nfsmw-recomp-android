/* speed.exe 00412570 FUN_00412570; analysis pseudocode, not buildable source.
 * calls 0077bba0 FUN_0077bba0
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00412570(int param_1,float param_2)

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
  int iVar11;
  float *pfVar12;
  float10 fVar13;
  float fStack_34;
  
  iVar11 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x48))();
  if (*(char *)(iVar11 + 0x2c0) != '\0') {
    return (float10)_DAT_00890968;
  }
  fVar1 = *(float *)(iVar11 + 0x98);
  fVar2 = *(float *)(iVar11 + 0x9c);
  fVar3 = *(float *)(iVar11 + 0xa0);
  pfVar12 = (float *)(**(code **)(**(int **)(param_1 + 0x54) + 0x20))();
  fVar4 = *pfVar12;
  fVar5 = pfVar12[1];
  fVar6 = pfVar12[2];
  fVar1 = fVar1 - fVar4;
  fVar2 = fVar2 - fVar5;
  fVar7 = *(float *)(iVar11 + 0xbc);
  fVar8 = *(float *)(iVar11 + 0xc0);
  fVar9 = *(float *)(iVar11 + 0xc4);
  fVar3 = fVar3 - fVar6;
  fVar13 = (float10)FUN_005c5e80(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  fVar1 = fVar1 * fVar7 + fVar8 * fVar2 + fVar9 * fVar3;
  if (fVar1 < param_2) {
    FUN_0077bba0(ABS(param_2 - fVar1),&DAT_008a2fb4,0);
  }
  if (*(char *)(param_1 + 0x6c) == '\x01') {
    do {
      fVar8 = *(float *)(iVar11 + 0x98) - fVar4;
      fVar2 = *(float *)(iVar11 + 0xbc);
      fVar3 = *(float *)(iVar11 + 0xc0);
      fVar9 = *(float *)(iVar11 + 0x9c) - fVar5;
      fVar7 = *(float *)(iVar11 + 0xc4);
      fVar10 = *(float *)(iVar11 + 0xa0) - fVar6;
      fVar13 = (float10)FUN_005c5e80(fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10);
      if ((fVar1 <= fVar8 * fVar2 + fVar3 * fVar9 + fVar7 * fVar10) ||
         (FUN_0077bba0(param_2,&DAT_008a2fb4,0), *(char *)(iVar11 + 0x50) == '\0')) break;
    } while (*(char *)(iVar11 + 0x2c0) == '\0');
    *(undefined1 *)(param_1 + 0x6c) = 0;
  }
  fStack_34 = (float)fVar13;
  return (float10)fStack_34;
}

