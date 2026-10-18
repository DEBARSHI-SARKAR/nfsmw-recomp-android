/* speed.exe 007407c0 FUN_007407c0; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 00486bd0 FUN_00486bd0
 * calls 00401670 FUN_00401670
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007407c0(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  float fVar1;
  undefined1 uVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int *piVar9;
  undefined4 uVar10;
  float10 fVar11;
  undefined1 *puVar12;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [64];
  
  piVar4 = (int *)FUN_005d59f0(&LAB_00403f90);
  if (piVar4 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar4 + 8))();
    param_1[3] = *(undefined4 *)(iVar5 + 4);
    param_1[7] = *(undefined4 *)(iVar5 + 0x14);
    param_1[0xb] = *(undefined4 *)(iVar5 + 0x18);
    param_1[0x18] = *(undefined4 *)(iVar5 + 0x1c);
    piVar4 = (int *)FUN_005d59f0(&LAB_00404020);
    if ((piVar4 == (int *)0x0) ||
       (fVar11 = (float10)(**(code **)(*piVar4 + 0x1c))(), fVar11 <= (float10)_DAT_00890968)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined1 *)(iVar5 + 0x21);
    }
    *(undefined1 *)((int)param_1 + 0x71) = uVar2;
  }
  piVar4 = (int *)FUN_005d59f0(&LAB_00404010);
  if (piVar4 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar4 + 4))();
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    else if (7 < iVar5) {
      iVar5 = 7;
    }
    *(char *)((int)param_1 + 0x72) = (char)iVar5;
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  piVar4 = (int *)FUN_005d59f0(&LAB_00404040);
  if (piVar4 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar4 + 8))();
    if (iVar5 != 0) {
      iVar5 = (**(code **)(*piVar4 + 0x4c))();
      iVar6 = (**(code **)(*piVar4 + 8))();
      if (iVar6 <= iVar5) goto LAB_00740895;
    }
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
LAB_00740895:
  piVar4 = (int *)(**(code **)(*param_2 + 0x50))();
  puVar7 = (undefined4 *)(**(code **)(*piVar4 + 0x20))();
  *param_1 = *puVar7;
  param_1[1] = puVar7[1];
  param_1[2] = puVar7[2];
  pfVar8 = (float *)(**(code **)(*piVar4 + 0x24))();
  param_1[4] = *pfVar8;
  param_1[5] = pfVar8[1];
  param_1[6] = pfVar8[2];
  puVar7 = (undefined4 *)(**(code **)(*piVar4 + 0x44))();
  param_1[0xc] = *puVar7;
  param_1[0xd] = puVar7[1];
  param_1[0xe] = puVar7[2];
  param_1[0xf] = puVar7[3];
  puVar7 = (undefined4 *)(**(code **)(*piVar4 + 0x28))();
  param_1[0x10] = *puVar7;
  param_1[0x11] = puVar7[1];
  param_1[0x12] = puVar7[2];
  piVar9 = (int *)FUN_005d59f0(&LAB_004039c0);
  if (piVar9 != (int *)0x0) {
    fVar1 = (float)param_1[4];
    if (((float)param_1[6] * (float)param_1[6] +
         (float)param_1[5] * (float)param_1[5] + fVar1 * fVar1 <= _DAT_0089096c) ||
       (cVar3 = (**(code **)(*piVar9 + 0x40))(), cVar3 != '\0')) {
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
    }
    else {
      fVar11 = (float10)(**(code **)(*piVar4 + 0x1c))();
      fVar1 = (float)fVar11;
      pfVar8 = (float *)(**(code **)(*piVar9 + 0x8c))();
      param_1[8] = fVar1 * *pfVar8;
      param_1[9] = fVar1 * pfVar8[1];
      param_1[10] = fVar1 * pfVar8[2];
    }
    puVar7 = (undefined4 *)(**(code **)(*piVar9 + 0x70))();
    uStack_4c = *puVar7;
    uStack_48 = puVar7[1];
    uStack_44 = puVar7[2];
    puVar12 = auStack_40;
    uVar10 = (**(code **)(*piVar9 + 0xa4))(puVar12);
    FUN_00486bd0(uVar10,puVar12);
    uVar10 = (**(code **)(*piVar9 + 0x90))();
    FUN_00401670(uVar10,auStack_40,&uStack_4c);
    param_1[0x14] = uStack_4c;
    param_1[0x15] = uStack_48;
    param_1[0x16] = uStack_44;
  }
  param_1[0x19] = 0x41555555;
  param_1[0x1a] = 0x3f800000;
  param_1[0x1b] = param_3;
  return;
}

