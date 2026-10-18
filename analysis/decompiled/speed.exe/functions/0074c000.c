/* speed.exe 0074c000 FUN_0074c000; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 0074bc20 FUN_0074bc20
 * calls 0073e2f0 FUN_0073e2f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0074c000(int *param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  float10 fVar11;
  int *local_c;
  int *local_4;
  
  if (DAT_0092c678 != (int *)0x0) {
    cVar5 = (**(code **)(*DAT_0092c678 + 4))();
    bVar3 = true;
    if (cVar5 != '\0') goto LAB_0074c027;
  }
  bVar3 = false;
LAB_0074c027:
  local_c = (int *)0x0;
  local_4 = (int *)0x0;
  puVar10 = DAT_0092d87c;
  piVar9 = (int *)0x0;
  if (DAT_0092d87c != DAT_0092d87c + DAT_0092d884) {
    do {
      piVar1 = (int *)*puVar10;
      iVar8 = *(int *)(param_2 + 4);
      iVar7 = (**(code **)(*piVar1 + 0x2c))();
      piVar9 = local_c;
      if (iVar7 == iVar8) {
        iVar8 = (**(code **)(*piVar1 + 4))();
        if (iVar8 != 0) {
          piVar9 = (int *)FUN_005d59f0(&LAB_004037e0);
          local_4 = (int *)FUN_005d59f0(&LAB_00404020);
        }
        break;
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 != DAT_0092d87c + DAT_0092d884);
  }
  if (DAT_009885c8 == 0) {
    if ((bVar3) || (DAT_00911054 != '\0')) {
      iVar8 = param_1[0x74];
      if (*(int *)(iVar8 + 0xc) != 0x3f800000) {
        *(undefined4 *)(iVar8 + 0xc) = 0x3f800000;
        *(undefined4 *)(iVar8 + 4) = DAT_008f8308;
      }
    }
    else {
      iVar8 = param_1[0x74];
      if (*(float *)(iVar8 + 0xc) != _DAT_00890968) {
        *(undefined4 *)(iVar8 + 0xc) = 0;
        *(undefined4 *)(iVar8 + 4) = DAT_008f8308;
      }
    }
  }
  else {
    iVar8 = param_1[0x74];
    if (iVar8 != 0) {
      *(undefined4 *)(iVar8 + 8) = 0;
      *(undefined4 *)(iVar8 + 0xc) = 0;
      *(undefined4 *)(iVar8 + 4) = 0;
    }
  }
  if (*param_1 == 0) {
    local_c = (int *)0x0;
    uVar6 = 0;
    if (piVar9 != (int *)0x0) {
      fVar11 = (float10)(**(code **)(*piVar9 + 4))();
      local_c = (int *)(float)fVar11;
      uVar6 = (**(code **)(*piVar9 + 0x28))();
    }
    FUN_0074bc20(param_2,local_c,uVar6);
    param_1[0x79] = (int)local_c;
  }
  else {
    FUN_0073e2f0();
  }
  if (local_4 != (int *)0x0) {
    cVar5 = (**(code **)(*local_4 + 0x20))();
    fVar4 = _DAT_0089096c;
    fVar2 = _DAT_00890968;
    if (cVar5 != '\0') {
      iVar8 = param_1[0x75];
      *(undefined4 *)(iVar8 + 8) = 0x3f800000;
      *(undefined4 *)(iVar8 + 0xc) = 0x3f800000;
      *(undefined4 *)(iVar8 + 4) = 0;
      fVar2 = fVar4;
    }
    iVar8 = param_1[0x75];
    if (*(float *)(iVar8 + 0xc) != fVar2) {
      *(float *)(iVar8 + 0xc) = fVar2;
      *(undefined4 *)(iVar8 + 4) = DAT_008f8308;
      return;
    }
  }
  return;
}

