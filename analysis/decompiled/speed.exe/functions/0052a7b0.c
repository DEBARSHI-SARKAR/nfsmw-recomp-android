/* speed.exe 0052a7b0 FUN_0052a7b0; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 005b7580 FUN_005b7580
 * calls 00652ad0 _malloc
 * calls 00591d90 FUN_00591d90
 * calls 005b8550 FUN_005b8550
 * calls 005881f0 FUN_005881f0
 * calls 005b5b70 FUN_005b5b70
 * calls 00588100 FUN_00588100
 * calls 00572070 FUN_00572070
 */

void __fastcall FUN_0052a7b0(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int local_20;
  int local_1c;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086ef38;
  local_c = ExceptionList;
  if (0 < *(int *)(param_1 + 0x50)) {
    local_20 = 1;
    ExceptionList = &local_c;
    do {
      pcVar7 = *(char **)(param_1 + 0x10);
      uVar3 = FUN_00573140("KEY_TEXT_%d",local_20);
      if (pcVar7 == (char *)0x0) {
LAB_0052a883:
        local_14 = 0;
      }
      else {
        pcVar4 = pcVar7;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (pcVar4 == pcVar7 + 1) goto LAB_0052a883;
        if (DAT_0091d218 < 1) {
          iVar5 = FUN_005b5b70(pcVar7);
          if (iVar5 == 0) {
            iVar5 = FUN_005b7580(pcVar7);
            if (iVar5 == 0) goto LAB_0052a883;
            goto LAB_0052a865;
          }
        }
        else {
          FUN_00572070();
          iVar5 = FUN_00591d90(pcVar7);
LAB_0052a865:
          if (iVar5 == 0) goto LAB_0052a883;
        }
        local_14 = FUN_005b8550(uVar3);
        if ((local_14 == 0) || (*(int *)(local_14 + 0x18) != 2)) goto LAB_0052a883;
      }
      pcVar7 = *(char **)(param_1 + 0x10);
      uVar3 = FUN_00573140("KEY_BOX_P%d",local_20);
      if (pcVar7 == (char *)0x0) {
LAB_0052a90c:
        local_1c = 0;
      }
      else {
        pcVar4 = pcVar7;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (pcVar4 == pcVar7 + 1) goto LAB_0052a90c;
        if (DAT_0091d218 < 1) {
          iVar5 = FUN_005b5b70(pcVar7);
          if (iVar5 == 0) {
            iVar5 = FUN_005b7580(pcVar7);
            if (iVar5 == 0) goto LAB_0052a90c;
            goto LAB_0052a8f8;
          }
        }
        else {
          FUN_00572070();
          iVar5 = FUN_00591d90(pcVar7);
LAB_0052a8f8:
          if (iVar5 == 0) goto LAB_0052a90c;
        }
        local_1c = FUN_005b8550(uVar3);
        if (local_1c == 0) goto LAB_0052a90c;
      }
      pcVar7 = *(char **)(param_1 + 0x10);
      uVar3 = FUN_00573140("KEY_TEXT_P%d",local_20);
      if (pcVar7 == (char *)0x0) {
LAB_0052a99f:
        iVar5 = 0;
      }
      else {
        pcVar4 = pcVar7;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (pcVar4 == pcVar7 + 1) goto LAB_0052a99f;
        if (DAT_0091d218 < 1) {
          iVar5 = FUN_005b5b70(pcVar7);
          if (iVar5 == 0) {
            iVar5 = FUN_005b7580(pcVar7);
            if (iVar5 == 0) goto LAB_0052a99f;
            goto LAB_0052a985;
          }
        }
        else {
          FUN_00572070();
          iVar5 = FUN_00591d90(pcVar7);
LAB_0052a985:
          if (iVar5 == 0) goto LAB_0052a99f;
        }
        iVar5 = FUN_005b8550(uVar3);
        if ((iVar5 == 0) || (*(int *)(iVar5 + 0x18) != 2)) goto LAB_0052a99f;
      }
      puVar6 = _malloc(0x1c);
      local_4 = 0;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        FUN_00588100(local_1c);
        *puVar6 = &PTR_FUN_0089c23c;
        puVar6[5] = local_14;
        puVar6[6] = iVar5;
      }
      local_4 = 0xffffffff;
      FUN_005881f0(puVar6);
      pcVar7 = *(char **)(param_1 + 0x10);
      uVar3 = FUN_00573140("KEY_BOX_S%d",local_20);
      if (pcVar7 == (char *)0x0) {
LAB_0052aa79:
        local_1c = 0;
      }
      else {
        pcVar4 = pcVar7;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (pcVar4 == pcVar7 + 1) goto LAB_0052aa79;
        if (DAT_0091d218 < 1) {
          iVar5 = FUN_005b5b70(pcVar7);
          if (iVar5 == 0) {
            iVar5 = FUN_005b7580(pcVar7);
            if (iVar5 == 0) goto LAB_0052aa79;
            goto LAB_0052aa65;
          }
        }
        else {
          FUN_00572070();
          iVar5 = FUN_00591d90(pcVar7);
LAB_0052aa65:
          if (iVar5 == 0) goto LAB_0052aa79;
        }
        local_1c = FUN_005b8550(uVar3);
        if (local_1c == 0) goto LAB_0052aa79;
      }
      pcVar7 = *(char **)(param_1 + 0x10);
      uVar3 = FUN_00573140("KEY_TEXT_S%d",local_20);
      if (pcVar7 == (char *)0x0) {
LAB_0052ab0f:
        iVar5 = 0;
      }
      else {
        pcVar4 = pcVar7;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (pcVar4 == pcVar7 + 1) goto LAB_0052ab0f;
        if (DAT_0091d218 < 1) {
          iVar5 = FUN_005b5b70(pcVar7);
          if (iVar5 == 0) {
            iVar5 = FUN_005b7580(pcVar7);
            if (iVar5 == 0) goto LAB_0052ab0f;
            goto LAB_0052aaf5;
          }
        }
        else {
          FUN_00572070();
          iVar5 = FUN_00591d90(pcVar7);
LAB_0052aaf5:
          if (iVar5 == 0) goto LAB_0052ab0f;
        }
        iVar5 = FUN_005b8550(uVar3);
        if ((iVar5 == 0) || (*(int *)(iVar5 + 0x18) != 2)) goto LAB_0052ab0f;
      }
      puVar6 = _malloc(0x1c);
      local_4 = 1;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        FUN_00588100(local_1c);
        *puVar6 = &PTR_FUN_0089c23c;
        puVar6[5] = local_14;
        puVar6[6] = iVar5;
      }
      local_4 = 0xffffffff;
      FUN_005881f0(puVar6);
      bVar2 = local_20 < *(int *)(param_1 + 0x50);
      local_20 = local_20 + 1;
    } while (bVar2);
  }
  ExceptionList = local_c;
  return;
}

