/* speed.exe 005471b0 FUN_005471b0; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 005b8550 FUN_005b8550
 * calls 0052e750 FUN_0052e750
 * calls 005b5b70 FUN_005b5b70
 * calls 005881f0 FUN_005881f0
 * calls 005b7580 FUN_005b7580
 * calls 005938a0 FUN_005938a0
 * calls 00591d90 FUN_00591d90
 * calls 00588100 FUN_00588100
 * calls 00572070 FUN_00572070
 * calls 00652ad0 _malloc
 */

undefined4 * __thiscall FUN_005471b0(undefined4 *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int local_1c;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870100;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005938a0(param_2,1,10,0);
  *param_1 = &PTR_FUN_0089e6f0;
  param_1[0xb] = &PTR_LAB_0089e6e4;
  param_1[0x38] = *(undefined4 *)(param_2 + 8);
  local_4 = 0;
  param_1[0x39] = 0x10;
  if (0 < (int)(param_1[0x14] * param_1[0x13])) {
    param_2 = 1;
    do {
      pcVar7 = (char *)param_1[4];
      uVar3 = FUN_00573140("RANK_%d",param_2);
      if (pcVar7 == (char *)0x0) {
LAB_005472b3:
        local_1c = 0;
      }
      else {
        pcVar4 = pcVar7;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (pcVar4 == pcVar7 + 1) goto LAB_005472b3;
        if (DAT_0091d218 < 1) {
          iVar5 = FUN_005b5b70(pcVar7);
          if (iVar5 == 0) {
            iVar5 = FUN_005b7580(pcVar7);
            if (iVar5 == 0) goto LAB_005472b3;
            goto LAB_00547295;
          }
        }
        else {
          FUN_00572070();
          iVar5 = FUN_00591d90(pcVar7);
LAB_00547295:
          if (iVar5 == 0) goto LAB_005472b3;
        }
        local_1c = FUN_005b8550(uVar3);
        if ((local_1c == 0) || (*(int *)(local_1c + 0x18) != 2)) goto LAB_005472b3;
      }
      pcVar7 = (char *)param_1[4];
      uVar3 = FUN_00573140("PLAYER_NAME_%d",param_2);
      if (pcVar7 == (char *)0x0) {
LAB_00547348:
        local_18 = 0;
      }
      else {
        pcVar4 = pcVar7;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (pcVar4 == pcVar7 + 1) goto LAB_00547348;
        if (DAT_0091d218 < 1) {
          iVar5 = FUN_005b5b70(pcVar7);
          if (iVar5 == 0) {
            iVar5 = FUN_005b7580(pcVar7);
            if (iVar5 == 0) goto LAB_00547348;
            goto LAB_0054732a;
          }
        }
        else {
          FUN_00572070();
          iVar5 = FUN_00591d90(pcVar7);
LAB_0054732a:
          if (iVar5 == 0) goto LAB_00547348;
        }
        local_18 = FUN_005b8550(uVar3);
        if ((local_18 == 0) || (*(int *)(local_18 + 0x18) != 2)) goto LAB_00547348;
      }
      pcVar7 = (char *)param_1[4];
      uVar3 = FUN_00573140("VEHICLE_%d",param_2);
      if (pcVar7 == (char *)0x0) {
LAB_005473d7:
        local_14 = 0;
      }
      else {
        pcVar4 = pcVar7;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (pcVar4 == pcVar7 + 1) goto LAB_005473d7;
        if (DAT_0091d218 < 1) {
          iVar5 = FUN_005b5b70(pcVar7);
          if (iVar5 == 0) {
            iVar5 = FUN_005b7580(pcVar7);
            if (iVar5 == 0) goto LAB_005473d7;
            goto LAB_005473bd;
          }
        }
        else {
          FUN_00572070();
          iVar5 = FUN_00591d90(pcVar7);
LAB_005473bd:
          if (iVar5 == 0) goto LAB_005473d7;
        }
        local_14 = FUN_005b8550(uVar3);
        if ((local_14 == 0) || (*(int *)(local_14 + 0x18) != 2)) goto LAB_005473d7;
      }
      pcVar7 = (char *)param_1[4];
      uVar3 = FUN_00573140("TIME_%d",param_2);
      if (pcVar7 == (char *)0x0) {
LAB_0054746f:
        iVar5 = 0;
      }
      else {
        pcVar4 = pcVar7;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (pcVar4 == pcVar7 + 1) goto LAB_0054746f;
        if (DAT_0091d218 < 1) {
          iVar5 = FUN_005b5b70(pcVar7);
          if (iVar5 == 0) {
            iVar5 = FUN_005b7580(pcVar7);
            if (iVar5 == 0) goto LAB_0054746f;
            goto LAB_00547455;
          }
        }
        else {
          FUN_00572070();
          iVar5 = FUN_00591d90(pcVar7);
LAB_00547455:
          if (iVar5 == 0) goto LAB_0054746f;
        }
        iVar5 = FUN_005b8550(uVar3);
        if ((iVar5 == 0) || (*(int *)(iVar5 + 0x18) != 2)) goto LAB_0054746f;
      }
      if (param_1[0x38] == 0) {
        puVar6 = _malloc(0x24);
        local_4 = CONCAT31(local_4._1_3_,1);
        if (puVar6 == (undefined4 *)0x0) {
LAB_005474ff:
          puVar6 = (undefined4 *)0x0;
        }
        else {
          FUN_00588100(local_1c);
          puVar6[5] = local_1c;
          puVar6[6] = local_18;
          puVar6[7] = local_14;
          puVar6[8] = iVar5;
          *puVar6 = &PTR_FUN_0089c318;
        }
      }
      else {
        puVar6 = _malloc(0x24);
        local_4 = CONCAT31(local_4._1_3_,2);
        if (puVar6 == (undefined4 *)0x0) goto LAB_005474ff;
        FUN_00588100(local_1c);
        *puVar6 = &PTR_FUN_0089c310;
        puVar6[5] = local_1c;
        puVar6[6] = local_18;
        puVar6[7] = local_14;
        puVar6[8] = iVar5;
      }
      local_4 = local_4 & 0xffffff00;
      FUN_005881f0(puVar6);
      bVar2 = param_2 < (int)(param_1[0x13] * param_1[0x14]);
      param_2 = param_2 + 1;
    } while (bVar2);
  }
  FUN_0052e750();
  ExceptionList = local_c;
  return param_1;
}

