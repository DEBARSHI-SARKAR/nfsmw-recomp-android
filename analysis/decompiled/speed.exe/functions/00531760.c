/* speed.exe 00531760 FUN_00531760; analysis pseudocode, not buildable source.
 * calls 00514cc0 FUN_00514cc0
 * calls 0056bc10 FUN_0056bc10
 * calls 005b8550 FUN_005b8550
 * calls 00514c70 FUN_00514c70
 * calls 005252d0 FUN_005252d0
 * calls 00516af0 FUN_00516af0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00531760(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  bool bVar9;
  undefined4 uVar10;
  
  piVar4 = (int *)(**(code **)(*(int *)*DAT_0092d87c + 4))();
  pfVar5 = (float *)(**(code **)(*piVar4 + 0x60))();
  fVar2 = *(float *)(*(int *)(param_1 + 0x15c) + 0x20) - pfVar5[2];
  fVar1 = *(float *)(*(int *)(param_1 + 0x15c) + 0x24) - -*pfVar5;
  bVar9 = *(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x3b) != '\x01';
  if (bVar9) {
    uVar10 = 0x867dcfd9;
  }
  else {
    uVar10 = 0x8569a26a;
  }
  uVar10 = FUN_0056bc10(uVar10);
  if (*(int *)(*(int *)(param_1 + 0x15c) + 0x2c) == 1) {
    if (((*(int *)(param_1 + 0x10) == 0) ||
        (iVar6 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar6 == 0)) ||
       (iVar6 = FUN_005b8550(0xfeeeb39b), iVar6 == 0)) {
      iVar6 = 0;
    }
    FUN_00514c70(iVar6);
  }
  else {
    fVar3 = _DAT_00891064;
    if (!bVar9) {
      fVar3 = _DAT_00894200;
    }
    FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xfeeeb39b,"%$.1f %s",
                 (double)(SQRT(fVar1 * fVar1 + fVar2 * fVar2) / fVar3),uVar10);
    if (((*(int *)(param_1 + 0x10) == 0) ||
        (iVar6 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar6 == 0)) ||
       (iVar6 = FUN_005b8550(0xfeeeb39b), iVar6 == 0)) {
      iVar6 = 0;
    }
    FUN_00514cc0(iVar6);
  }
  iVar6 = 0;
  piVar4 = &DAT_008f3abc;
  do {
    if (*piVar4 == *(int *)(*(int *)(param_1 + 0x15c) + 0x2c)) {
      puVar7 = &DAT_008f3ab8 + iVar6 * 0x14;
      goto LAB_005318c0;
    }
    piVar4 = piVar4 + 5;
    iVar6 = iVar6 + 1;
  } while ((int)piVar4 < 0x8f3c10);
  puVar7 = &DAT_008f3ab8;
LAB_005318c0:
  iVar6 = *(int *)(puVar7 + 0x10);
  if (iVar6 != 0) {
    if ((((*(int *)(param_1 + 0x10) != 0) &&
         (iVar8 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar8 != 0)) &&
        (iVar8 = FUN_005b8550(0x9a5ab124), iVar8 != 0)) &&
       ((*(int *)(iVar8 + 0x18) == 1 && (*(int *)(iVar8 + 0x24) != iVar6)))) {
      *(int *)(iVar8 + 0x24) = iVar6;
      *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) | 0x2400000;
    }
    if (((*(int *)(param_1 + 0x10) == 0) ||
        (iVar6 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar6 == 0)) ||
       (iVar6 = FUN_005b8550(0x9a5ab124), iVar6 == 0)) {
      iVar6 = 0;
    }
    FUN_00514cc0(iVar6);
    return;
  }
  if (((*(int *)(param_1 + 0x10) == 0) ||
      (iVar6 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar6 == 0)) ||
     (iVar6 = FUN_005b8550(0x9a5ab124), iVar6 == 0)) {
    iVar6 = 0;
  }
  FUN_00514c70(iVar6);
  return;
}

