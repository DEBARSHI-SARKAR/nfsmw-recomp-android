/* speed.exe 00714ee0 FUN_00714ee0; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00452940 FUN_00452940
 * calls 004bac70 FUN_004bac70
 * calls 0070feb0 FUN_0070feb0
 * calls 00712180 FUN_00712180
 * calls 00713750 FUN_00713750
 * calls 005d0370 FUN_005d0370
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00714ee0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void **ppvVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *local_3c;
  int *piStack_38;
  undefined **local_34;
  undefined4 *local_2c;
  int local_28;
  int local_24;
  undefined **ppuStack_20;
  undefined4 *puStack_18;
  int iStack_14;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  iVar2 = DAT_00993cc8;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00880120;
  local_c = ExceptionList;
  if ((*(int *)(DAT_00993cc8 + 0x1d4) != 1) && (*(int *)(DAT_00993cc8 + 0x1d4) != 0)) {
    ExceptionList = &local_c;
    (**(code **)(*param_1 + 0xc))(999);
    ExceptionList = pvStack_10;
    return;
  }
  if (*(int *)(DAT_00993cc8 + 0xdc) == 0) {
    return;
  }
  ppvVar5 = &local_c;
  if (DAT_00992230 != 0) {
    if ((*(uint *)(DAT_00992230 + 0x28) >> 3 & 1) != 0) {
      return;
    }
    ExceptionList = &local_c;
    cVar6 = FUN_004bac70();
    ppvVar5 = ExceptionList;
    if (cVar6 == '\0') {
      ExceptionList = local_c;
      return;
    }
  }
  ExceptionList = ppvVar5;
  local_2c = (undefined4 *)0x0;
  local_28 = 0;
  local_24 = 0;
  local_34 = &PTR_FUN_008b2658;
  local_4 = 0;
  if (*(int *)(iVar2 + 0x5c) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(iVar2 + 0x60) - *(int *)(iVar2 + 0x5c) >> 3;
  }
  FUN_00712180(iVar7);
  iVar7 = *(int *)(iVar2 + 0x5c);
  if (iVar7 != *(int *)(iVar2 + 0x60)) {
    do {
      piVar1 = *(int **)(iVar7 + 4);
      local_3c = piVar1;
      cVar6 = (**(code **)(*piVar1 + 0x60))();
      if ((cVar6 != '\0') && (cVar6 = (**(code **)(*piVar1 + 0x70))(), cVar6 != '\0')) {
        FUN_00713750(&local_3c);
      }
      iVar7 = iVar7 + 8;
    } while (iVar7 != *(int *)(iVar2 + 0x60));
  }
  iVar7 = local_28;
  puVar3 = local_2c;
  if ((local_2c != (undefined4 *)0x0) && (1 < (uint)(local_28 - (int)local_2c >> 2))) {
    (**(code **)(*param_1 + 0xc))(0x14d);
    goto LAB_0071521d;
  }
  iVar8 = FUN_00452940();
  if (iVar8 == 0) {
    FUN_006269b0(4);
  }
  piStack_38 = *(int **)(*(int *)(iVar2 + 0x184) + 0xac);
  if (puVar3 == (undefined4 *)0x0) {
LAB_007150a2:
    local_3c = (int *)(DAT_00925ae8 - *(int *)(iVar2 + 0x218));
    if ((float)(int)local_3c * _DAT_00890984 < (float)piStack_38) {
LAB_00715204:
      (**(code **)(*param_1 + 0xc))(0x14d);
    }
    else {
      puStack_18 = (undefined4 *)0x0;
      iStack_14 = 0;
      pvStack_10 = (void *)0x0;
      ppuStack_20 = &PTR_FUN_008b2658;
      local_4 = CONCAT31(local_4._1_3_,1);
      if (*(int *)(iVar2 + 0x5c) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(iVar2 + 0x60) - *(int *)(iVar2 + 0x5c) >> 3;
      }
      FUN_00712180(iVar7);
      iVar7 = *(int *)(iVar2 + 0x5c);
      if (iVar7 != *(int *)(iVar2 + 0x60)) {
        do {
          piStack_38 = *(int **)(iVar7 + 4);
          cVar6 = (**(code **)(*piStack_38 + 0x60))();
          if (cVar6 != '\0') {
            FUN_00713750(&piStack_38);
          }
          iVar7 = iVar7 + 8;
        } while (iVar7 != *(int *)(iVar2 + 0x60));
      }
      puVar4 = puStack_18;
      if ((puStack_18 != (undefined4 *)0x0) &&
         (uVar9 = iStack_14 - (int)puStack_18 >> 2, uVar9 != 0)) {
        if (1 < uVar9) {
          FUN_0070feb0(puStack_18,iStack_14,uVar9);
        }
        piVar1 = (int *)*puVar4;
        cVar6 = (**(code **)(*piVar1 + 0x1a0))();
        if (cVar6 == '\0') {
          (**(code **)(*piVar1 + 0xd4))();
          if (((*(int **)(iVar2 + 0xe0) != (int *)0x0) &&
              (cVar6 = (**(code **)(**(int **)(iVar2 + 0xe0) + 0x70))(), cVar6 != '\0')) &&
             (cVar6 = (**(code **)(**(int **)(iVar2 + 0xe0) + 0x60))(), cVar6 != '\0')) {
            (**(code **)(**(int **)(iVar2 + 0xe0) + 0x118))();
            (**(code **)(**(int **)(iVar2 + 0xe0) + 0x8c))();
          }
        }
        else {
          (**(code **)(**(int **)(iVar2 + 0xe0) + 0xd4))();
        }
      }
      (**(code **)(*param_1 + 0xc))(3);
      local_4 = local_4 & 0xffffff00;
      if (puVar4 != (undefined4 *)0x0) {
        FUN_005d0370(puVar4,((int)pvStack_10 - (int)puVar4 >> 2) * 4,0);
      }
    }
  }
  else {
    iVar7 = iVar7 - (int)puVar3 >> 2;
    if (((iVar7 != 1) || ((*(uint *)(iVar2 + 0x54) >> 5 & 1) != 0)) ||
       (*(float *)(iVar2 + 0x13c) < *(float *)(*(int *)(iVar2 + 0x184) + 0xa8))) {
      if (iVar7 == 0) goto LAB_007150a2;
      goto LAB_00715204;
    }
    (**(code **)(*(int *)*puVar3 + 200))();
    (**(code **)(*param_1 + 0xc))(0x14d);
  }
  if (puVar3 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return;
  }
LAB_0071521d:
  local_4 = 0xffffffff;
  FUN_005d0370(puVar3,(local_24 - (int)puVar3 >> 2) << 2,0);
  ExceptionList = local_c;
  return;
}

