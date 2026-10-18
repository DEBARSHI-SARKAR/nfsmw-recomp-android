/* speed.exe 005466d0 FUN_005466d0; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 005b8550 FUN_005b8550
 * calls 005b5b70 FUN_005b5b70
 * calls 005881f0 FUN_005881f0
 * calls 005b7580 FUN_005b7580
 * calls 005938a0 FUN_005938a0
 * calls 0052cf40 FUN_0052cf40
 * calls 00591d90 FUN_00591d90
 * calls 00588100 FUN_00588100
 * calls 00572070 FUN_00572070
 * calls 00652ad0 _malloc
 */

undefined4 * __thiscall FUN_005466d0(undefined4 *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087004c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005938a0(param_2,1,8,0);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089e630;
  param_1[0xb] = &PTR_LAB_0089e624;
  *(undefined1 *)(param_1 + 0x38) = 1;
  if (0 < (int)(param_1[0x14] * param_1[0x13])) {
    param_2 = 1;
    do {
      pcVar7 = (char *)param_1[4];
      uVar3 = FUN_00573140("INFRACTION_TYPE_%d",param_2);
      if (pcVar7 == (char *)0x0) {
LAB_005467c4:
        local_18 = 0;
      }
      else {
        pcVar4 = pcVar7;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (pcVar4 == pcVar7 + 1) goto LAB_005467c4;
        if (DAT_0091d218 < 1) {
          iVar5 = FUN_005b5b70(pcVar7);
          if (iVar5 == 0) {
            iVar5 = FUN_005b7580(pcVar7);
            if (iVar5 == 0) goto LAB_005467c4;
            goto LAB_005467a6;
          }
        }
        else {
          FUN_00572070();
          iVar5 = FUN_00591d90(pcVar7);
LAB_005467a6:
          if (iVar5 == 0) goto LAB_005467c4;
        }
        local_18 = FUN_005b8550(uVar3);
        if ((local_18 == 0) || (*(int *)(local_18 + 0x18) != 2)) goto LAB_005467c4;
      }
      pcVar7 = (char *)param_1[4];
      uVar3 = FUN_00573140("UNSERVED_QTY_%d",param_2);
      if (pcVar7 == (char *)0x0) {
LAB_00546853:
        local_14 = 0;
      }
      else {
        pcVar4 = pcVar7;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (pcVar4 == pcVar7 + 1) goto LAB_00546853;
        if (DAT_0091d218 < 1) {
          iVar5 = FUN_005b5b70(pcVar7);
          if (iVar5 == 0) {
            iVar5 = FUN_005b7580(pcVar7);
            if (iVar5 == 0) goto LAB_00546853;
            goto LAB_00546839;
          }
        }
        else {
          FUN_00572070();
          iVar5 = FUN_00591d90(pcVar7);
LAB_00546839:
          if (iVar5 == 0) goto LAB_00546853;
        }
        local_14 = FUN_005b8550(uVar3);
        if ((local_14 == 0) || (*(int *)(local_14 + 0x18) != 2)) goto LAB_00546853;
      }
      pcVar7 = (char *)param_1[4];
      uVar3 = FUN_00573140("TOTAL_QTY_%d",param_2);
      if (pcVar7 == (char *)0x0) {
LAB_005468e6:
        iVar5 = 0;
      }
      else {
        pcVar4 = pcVar7;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (pcVar4 == pcVar7 + 1) goto LAB_005468e6;
        if (DAT_0091d218 < 1) {
          iVar5 = FUN_005b5b70(pcVar7);
          if (iVar5 == 0) {
            iVar5 = FUN_005b7580(pcVar7);
            if (iVar5 == 0) goto LAB_005468e6;
            goto LAB_005468cc;
          }
        }
        else {
          FUN_00572070();
          iVar5 = FUN_00591d90(pcVar7);
LAB_005468cc:
          if (iVar5 == 0) goto LAB_005468e6;
        }
        iVar5 = FUN_005b8550(uVar3);
        if ((iVar5 == 0) || (*(int *)(iVar5 + 0x18) != 2)) goto LAB_005468e6;
      }
      puVar6 = _malloc(0x20);
      local_4._0_1_ = 1;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        FUN_00588100(local_18);
        *puVar6 = &PTR_FUN_0089c2c8;
        puVar6[5] = local_18;
        puVar6[6] = local_14;
        puVar6[7] = iVar5;
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_005881f0(puVar6);
      bVar2 = param_2 < (int)(param_1[0x13] * param_1[0x14]);
      param_2 = param_2 + 1;
    } while (bVar2);
  }
  FUN_0052cf40();
  ExceptionList = local_c;
  return param_1;
}

