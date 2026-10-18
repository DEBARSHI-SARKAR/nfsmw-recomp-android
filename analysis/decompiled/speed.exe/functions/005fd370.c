/* speed.exe 005fd370 FUN_005fd370; analysis pseudocode, not buildable source.
 * calls 004546c0 FUN_004546c0
 * calls 005fac80 FUN_005fac80
 * calls 005e7ff0 FUN_005e7ff0
 * calls 00459040 FUN_00459040
 * calls 00452430 FUN_00452430
 * calls 00454810 FUN_00454810
 * calls 005da0f0 FUN_005da0f0
 * calls 00452bd0 FUN_00452bd0
 * calls 005fbd90 FUN_005fbd90
 * calls 005e5330 FUN_005e5330
 * calls 00454c30 FUN_00454c30
 * calls 00652ad0 _malloc
 * calls 005e8070 FUN_005e8070
 * calls 005d29d0 FUN_005d29d0
 * calls 006269b0 FUN_006269b0
 * calls 005fa780 FUN_005fa780
 * calls 005f9ba0 FUN_005f9ba0
 */

void __fastcall FUN_005fd370(int param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int local_64;
  undefined4 local_60;
  undefined1 local_5c [12];
  int *local_50;
  int local_4c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087604a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)(param_1 + 0x1c) != '\0') {
    ExceptionList = &local_c;
    cVar3 = FUN_005fac80();
    if (cVar3 == '\0') {
      *(undefined1 *)(param_1 + 0x1c) = 0;
    }
    else {
      piVar4 = (int *)FUN_00454810(0xfd945479,0);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)FUN_006269b0(4);
      }
      local_64 = *piVar4;
      puVar5 = (undefined4 *)FUN_00454810(0x7c7cf20f,0);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)FUN_006269b0(4);
      }
      local_60 = *puVar5;
      FUN_005e8070(&local_64);
      FUN_005e7ff0(&local_60);
    }
  }
  piVar4 = *(int **)(param_1 + 0xc);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 0)) {
    FUN_005fa780(piVar4);
  }
  piVar4 = *(int **)(param_1 + 0x10);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 0)) {
    FUN_005fa780(piVar4);
  }
  iVar6 = FUN_005da0f0();
  bVar2 = false;
  if ((*(int *)(DAT_0091e000 + 0x1964) != 2) && (cVar3 = FUN_005fbd90(), cVar3 != '\0')) {
    bVar2 = true;
    iVar6 = 0;
  }
  if (*(int *)(param_1 + 0x18) != iVar6) {
    uVar12 = 0;
    if (!bVar2) {
      uVar12 = FUN_005da0f0();
      uVar13 = 0;
      if (uVar12 != 0) {
        do {
          piVar4 = (int *)FUN_00454810(0x5839fa1a,uVar13);
          if (piVar4 == (int *)0x0) {
            piVar4 = (int *)FUN_006269b0(4);
          }
          local_4c[uVar13] = *piVar4;
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar12);
      }
    }
    uVar13 = *(uint *)(param_1 + 0x18);
    if (uVar12 < uVar13) {
      if (uVar12 == 0) {
        if (uVar13 != 0) {
          piVar4 = local_4c;
          for (uVar12 = uVar13; uVar12 != 0; uVar12 = uVar12 - 1) {
            *piVar4 = -0x60c4773b;
            piVar4 = piVar4 + 1;
          }
        }
      }
      else if (uVar12 < uVar13) {
        uVar1 = *(uint *)(param_1 + 0x18);
        uVar10 = uVar12;
        do {
          uVar11 = uVar10 + 1;
          local_4c[uVar10] = local_4c[uVar10 % uVar12];
          uVar10 = uVar11;
        } while (uVar11 < uVar1);
      }
    }
    FUN_00459040(0x5839fa1a,uVar13);
    FUN_004546c0(local_5c,0x5839fa1a);
    uVar12 = 0;
    local_4 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        iVar6 = local_4c[uVar12];
        if (local_50 == (int *)0x0) {
          piVar4 = (int *)FUN_00454c30(uVar12);
LAB_005fd531:
          if (piVar4 != (int *)0x0) {
            *piVar4 = iVar6;
          }
        }
        else {
          piVar4 = local_50;
          if (uVar12 == 0) goto LAB_005fd531;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(uint *)(param_1 + 0x18));
    }
    local_4 = 0xffffffff;
    FUN_00452bd0();
  }
  iVar6 = *(int *)(param_1 + 0x20);
  if (iVar6 != -1) {
    if (iVar6 == 0) {
      FUN_00459040(0x3918e889,1);
      FUN_004546c0(local_5c,0x3918e889);
      local_4 = 1;
      if ((local_50 != (int *)0x0) || (local_50 = (int *)FUN_00454c30(0), local_50 != (int *)0x0)) {
        *(undefined1 *)local_50 = 0;
      }
    }
    else {
      FUN_00459040(0xe4211f4f,1);
      FUN_004546c0(local_5c,0xe4211f4f);
      local_4 = 2;
      if ((local_50 != (int *)0x0) || (local_50 = (int *)FUN_00454c30(0), local_50 != (int *)0x0)) {
        *local_50 = iVar6;
      }
    }
    local_4 = 0xffffffff;
    FUN_00452bd0();
  }
  local_64 = FUN_005d29d0(0x40,0);
  local_4 = 3;
  if (local_64 == 0) {
    uVar7 = 0;
  }
  else {
    local_60 = FUN_00452430();
    uVar7 = FUN_005f9ba0(&local_60);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = uVar7;
  uVar7 = FUN_00452430();
  iVar8 = FUN_005e5330(uVar7);
  iVar6 = *(int *)(param_1 + 0x14);
  pvVar9 = _malloc(iVar8 * 8);
  *(byte *)(iVar6 + 0x18) = *(byte *)(iVar6 + 0x18) | 4;
  *(void **)(iVar6 + 0x1c) = pvVar9;
  *(undefined2 *)(iVar6 + 0x1a) = 0;
  ExceptionList = local_c;
  return;
}

