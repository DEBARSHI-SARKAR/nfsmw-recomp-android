/* speed.exe 00715b90 FUN_00715b90; analysis pseudocode, not buildable source.
 * calls 00712180 FUN_00712180
 * calls 00713750 FUN_00713750
 * calls 005d0370 FUN_005d0370
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00715b90(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  int *local_24;
  undefined **local_20;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008801a8;
  pvStack_c = ExceptionList;
  local_18 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_10 = 0;
  local_20 = &PTR_FUN_008b2658;
  local_4 = 0;
  if (*(int *)(param_1 + 0x5c) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c) >> 3;
  }
  ExceptionList = &pvStack_c;
  FUN_00712180(iVar4);
  iVar4 = *(int *)(param_1 + 0x5c);
  if (iVar4 != *(int *)(param_1 + 0x60)) {
    do {
      local_24 = *(int **)(iVar4 + 4);
      iVar5 = (**(code **)(*local_24 + 0x1d0))();
      if (0 < iVar5) {
        FUN_00713750(&local_24);
      }
      iVar4 = iVar4 + 8;
    } while (iVar4 != *(int *)(param_1 + 0x60));
  }
  puVar3 = local_14;
  puVar2 = local_18;
  if ((local_18 != (undefined4 *)0x0) && ((int)local_14 - (int)local_18 >> 2 != 0)) {
    fVar7 = (float10)(**(code **)(*(int *)*local_18 + 0x1dc))();
    local_24 = (int *)(float)fVar7;
    for (puVar6 = puVar2; puVar6 != puVar3; puVar6 = puVar6 + 1) {
      piVar1 = (int *)*puVar6;
      fVar7 = (float10)(**(code **)(*piVar1 + 0x1dc))();
      if (fVar7 < (float10)(float)local_24) {
        fVar7 = (float10)(**(code **)(*piVar1 + 0x1dc))();
        local_24 = (int *)(float)fVar7;
      }
    }
    local_4 = 0xffffffff;
    FUN_005d0370(puVar2,(local_10 - (int)puVar2 >> 2) << 2,0);
    ExceptionList = pvStack_c;
    return (float10)(float)local_24;
  }
  local_4 = 0xffffffff;
  if (local_18 != (undefined4 *)0x0) {
    FUN_005d0370(local_18,(local_10 - (int)local_18 >> 2) << 2,0);
  }
  ExceptionList = pvStack_c;
  return (float10)_DAT_00898864;
}

