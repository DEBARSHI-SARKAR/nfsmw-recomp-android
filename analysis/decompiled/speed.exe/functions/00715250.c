/* speed.exe 00715250 FUN_00715250; analysis pseudocode, not buildable source.
 * calls 0070feb0 FUN_0070feb0
 * calls 00712180 FUN_00712180
 * calls 00713750 FUN_00713750
 * calls 005d0370 FUN_005d0370
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00715250(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int *local_24;
  undefined **local_20;
  undefined4 *local_18;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = DAT_00993cc8;
  puStack_8 = &LAB_00880138;
  local_c = ExceptionList;
  if (((*(int *)(DAT_00993cc8 + 0x138) == 1) ||
      (ExceptionList = &local_c, *(int *)(DAT_00993cc8 + 0x138) == 0x29a)) &&
     (ExceptionList = &local_c, (*(uint *)(param_1 + 0x4c) & 0x20) != 0)) {
    ExceptionList = &local_c;
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xffffffdf;
  }
  local_24 = (int *)(DAT_00925ae8 - *(int *)(iVar2 + 0x21c));
  if ((_DAT_00890968 < (float)(int)local_24 * _DAT_00890984) &&
     ((*(byte *)(param_1 + 0x4c) & 0x20) != 0)) {
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    local_20 = &PTR_FUN_008b2658;
    local_4 = 0;
    if (*(int *)(iVar2 + 0x5c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar2 + 0x60) - *(int *)(iVar2 + 0x5c) >> 3;
    }
    FUN_00712180(iVar5);
    iVar5 = *(int *)(iVar2 + 0x5c);
    if (iVar5 != *(int *)(iVar2 + 0x60)) {
      do {
        piVar1 = *(int **)(iVar5 + 4);
        local_24 = piVar1;
        cVar4 = (**(code **)(*piVar1 + 0x60))();
        if ((cVar4 != '\0') && (cVar4 = (**(code **)(*piVar1 + 0x70))(), cVar4 != '\0')) {
          FUN_00713750(&local_24);
        }
        iVar5 = iVar5 + 8;
      } while (iVar5 != *(int *)(iVar2 + 0x60));
    }
    puVar3 = local_18;
    if (local_18 != (undefined4 *)0x0) {
      uVar6 = local_14 - (int)local_18 >> 2;
      if (1 < uVar6) {
        FUN_0070feb0(local_18,local_14,uVar6);
      }
      if (uVar6 != 0) {
        (**(code **)(*(int *)*puVar3 + 0xd8))();
        *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xffffffdf;
      }
    }
    local_4 = 0xffffffff;
    if (puVar3 != (undefined4 *)0x0) {
      FUN_005d0370(puVar3,(local_10 - (int)puVar3 >> 2) << 2,0);
    }
  }
  ExceptionList = local_c;
  return;
}

