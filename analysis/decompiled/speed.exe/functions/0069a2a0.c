/* speed.exe 0069a2a0 FUN_0069a2a0; analysis pseudocode, not buildable source.
 * calls 006e7a90 FUN_006e7a90
 * calls 005ca910 FUN_005ca910
 * calls 006e7aa0 FUN_006e7aa0
 * calls 0068a480 FUN_0068a480
 * calls 007c8f30 __allshl
 * calls 006e7ab0 FUN_006e7ab0
 * calls 006f0ab0 FUN_006f0ab0
 * calls 0069a0f0 FUN_0069a0f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0069a2a0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  undefined4 uVar8;
  int iVar9;
  float10 fVar10;
  undefined8 uVar11;
  float fStack_228;
  float fStack_224;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  undefined4 uStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  undefined1 auStack_1ec [64];
  undefined1 auStack_1ac [64];
  undefined1 auStack_16c [352];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087c266;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (((*(ushort *)(**(int **)(param_2 + 0x60) + 0x1e) |
       *(ushort *)(**(int **)(param_1 + 0x60) + 0x1e)) & 0x4000) != 0) {
    ExceptionList = &pvStack_c;
    iVar5 = (**(code **)(*(int *)(param_2 + 0x48) + 0x10))();
    iVar6 = (**(code **)(*(int *)(param_1 + 0x48) + 0x10))();
    if (iVar5 == iVar6) {
      ExceptionList = pvStack_c;
      return;
    }
  }
  piVar1 = (int *)(param_1 + 0x48);
  iVar5 = (**(code **)(*(int *)(param_1 + 0x48) + 0xc))();
  piVar2 = (int *)(param_2 + 0x48);
  iVar6 = (**(code **)(*(int *)(param_2 + 0x48) + 0xc))();
  pfVar7 = (float *)(**(code **)(*piVar2 + 0x20))();
  fStack_218 = *pfVar7;
  fStack_214 = pfVar7[1];
  fStack_210 = pfVar7[2];
  fVar10 = (float10)(**(code **)(*piVar2 + 0x14))();
  if ((float10)_DAT_008910f0 <= fVar10) {
    fStack_228 = (float)fVar10;
  }
  else {
    fStack_228 = 0.25;
  }
  fVar10 = (float10)(**(code **)(*piVar1 + 0x14))();
  if ((float10)_DAT_008910f0 <= fVar10) {
    fStack_224 = (float)fVar10;
  }
  else {
    fStack_224 = 0.25;
  }
  pfVar7 = (float *)(**(code **)(*piVar1 + 0x20))();
  if ((*pfVar7 - fStack_218) * (*pfVar7 - fStack_218) +
      (pfVar7[1] - fStack_214) * (pfVar7[1] - fStack_214) +
      (pfVar7[2] - fStack_210) * (pfVar7[2] - fStack_210) <
      (fStack_224 + fStack_228) * (fStack_224 + fStack_228)) {
    if (((*(byte *)(**(int **)(param_1 + 0x60) + 0x1e) & 0x80) == 0) ||
       ((*(byte *)(**(int **)(param_2 + 0x60) + 0x1e) & 0x80) == 0)) {
      iVar9 = (**(code **)(*piVar2 + 0xc))();
      puVar3 = &DAT_009378d0 + iVar5 * 6 + (iVar9 + 0x40U >> 6) * 2;
      uVar11 = __allshl();
      *puVar3 = *puVar3 | (uint)uVar11;
      puVar3[1] = puVar3[1] | (uint)((ulonglong)uVar11 >> 0x20);
      iVar5 = (**(code **)(*piVar1 + 0xc))();
      puVar3 = &DAT_009378d0 + iVar6 * 6 + (iVar5 + 0x40U >> 6) * 2;
      uVar11 = __allshl();
      *puVar3 = *puVar3 | (uint)uVar11;
      puVar3[1] = puVar3[1] | (uint)((ulonglong)uVar11 >> 0x20);
    }
    else {
      FUN_006e7a90();
      uStack_4 = 0;
      FUN_006e7a90();
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      uVar8 = (**(code **)(*piVar1 + 0x44))();
      FUN_005ca910(uVar8,auStack_1ec);
      uVar8 = (**(code **)(*piVar2 + 0x44))();
      FUN_005ca910(uVar8,auStack_1ac);
      uStack_20c = (**(code **)(*piVar1 + 0x20))();
      fStack_1f8 = fStack_224;
      fStack_1f4 = fStack_224;
      fVar10 = (float10)FUN_0069a0f0();
      fStack_1f0 = (float)(fVar10 * (float10)fStack_224);
      fStack_208 = fStack_228;
      fStack_200 = fStack_228;
      fStack_204 = fStack_228;
      fVar10 = (float10)FUN_0069a0f0();
      fStack_200 = (float)(fVar10 * (float10)fStack_200);
      FUN_006e7ab0(auStack_1ec,uStack_20c,&fStack_1f8);
      FUN_006e7ab0(auStack_1ac,&fStack_218,&fStack_208);
      cVar4 = FUN_006f0ab0(auStack_16c);
      if (cVar4 != '\0') {
        uVar8 = (**(code **)(*piVar2 + 0xc))();
        FUN_0068a480(uVar8);
        uVar8 = (**(code **)(*piVar1 + 0xc))();
        FUN_0068a480(uVar8);
      }
      uStack_4 = uStack_4 & 0xffffff00;
      FUN_006e7aa0();
      uStack_4 = 0xffffffff;
      FUN_006e7aa0();
    }
  }
  ExceptionList = pvStack_c;
  return;
}

