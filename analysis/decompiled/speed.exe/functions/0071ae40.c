/* speed.exe 0071ae40 FUN_0071ae40; analysis pseudocode, not buildable source.
 * calls 007153b0 FUN_007153b0
 * calls 00713750 FUN_00713750
 * calls 005d0370 FUN_005d0370
 * calls 00712180 FUN_00712180
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0071ae40(void)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  float10 fVar8;
  byte bStack_25;
  int *local_24;
  undefined **local_20;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar5 = DAT_00993cc8;
  puStack_8 = &LAB_00880298;
  local_c = ExceptionList;
  if ((0 < *(short *)(DAT_00993cc8 + 0x148)) &&
     (local_24 = (int *)(DAT_00925ae8 - *(int *)(DAT_00993cc8 + 0x21c)),
     _DAT_00890d3c <= (float)(int)local_24 * _DAT_00890984)) {
    local_18 = (undefined4 *)0x0;
    local_14 = (undefined4 *)0x0;
    local_10 = 0;
    local_20 = &PTR_FUN_008b2658;
    local_4 = 0;
    if (*(int *)(DAT_00993cc8 + 0x5c) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(DAT_00993cc8 + 0x60) - *(int *)(DAT_00993cc8 + 0x5c) >> 3;
    }
    ExceptionList = &local_c;
    FUN_00712180(iVar3);
    iVar3 = *(int *)(iVar5 + 0x5c);
    if (iVar3 != *(int *)(iVar5 + 0x60)) {
      do {
        piVar4 = *(int **)(iVar3 + 4);
        local_24 = piVar4;
        cVar2 = (**(code **)(*piVar4 + 0x60))();
        if ((cVar2 != '\0') && (cVar2 = (**(code **)(*piVar4 + 0x70))(), cVar2 != '\0')) {
          FUN_00713750(&local_24);
        }
        iVar3 = iVar3 + 8;
      } while (iVar3 != *(int *)(iVar5 + 0x60));
    }
    puVar1 = local_18;
    if ((local_18 == (undefined4 *)0x0) || (uVar6 = (int)local_14 - (int)local_18 >> 2, uVar6 == 0))
    {
      if (local_18 == (undefined4 *)0x0) {
        ExceptionList = local_c;
        return;
      }
      iVar5 = local_10 - (int)local_18;
    }
    else {
      bStack_25 = 0;
      puVar7 = local_18;
      if (local_18 != local_14) {
        do {
          fVar8 = (float10)(**(code **)(*(int *)*puVar7 + 0x1e0))();
          if ((float10)_DAT_00890dbc < fVar8) {
            bStack_25 = bStack_25 + 1;
          }
          puVar7 = puVar7 + 1;
        } while (puVar7 != local_14);
      }
      if (((bStack_25 == uVar6) && ((*(uint *)(iVar5 + 0x54) >> 5 & 1) == 0)) &&
         (piVar4 = (int *)FUN_007153b0(0,0), piVar4 != (int *)0x0)) {
        (**(code **)(*piVar4 + 200))();
      }
      iVar5 = local_10 - (int)puVar1;
    }
    local_4 = 0xffffffff;
    FUN_005d0370(puVar1,(iVar5 >> 2) << 2,0);
  }
  ExceptionList = local_c;
  return;
}

