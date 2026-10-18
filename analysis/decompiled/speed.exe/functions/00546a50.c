/* speed.exe 00546a50 FUN_00546a50; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 005b8550 FUN_005b8550
 * calls 005b5b70 FUN_005b5b70
 * calls 005881f0 FUN_005881f0
 * calls 005b7580 FUN_005b7580
 * calls 005938a0 FUN_005938a0
 * calls 00591d90 FUN_00591d90
 * calls 0052d640 FUN_0052d640
 * calls 00588100 FUN_00588100
 * calls 00572070 FUN_00572070
 * calls 00652ad0 _malloc
 */

undefined4 * __thiscall FUN_00546a50(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087007c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005938a0(param_2,1,2,0);
  iVar2 = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_0089e65c;
  param_1[0xb] = &PTR_LAB_0089e650;
  if (0 < (int)(param_1[0x14] * param_1[0x13])) {
    do {
      pcVar7 = (char *)param_1[4];
      iVar2 = iVar2 + 1;
      uVar3 = FUN_00573140("CAR_%d",iVar2);
      if (pcVar7 == (char *)0x0) {
LAB_00546b3f:
        local_24 = 0;
      }
      else {
        pcVar4 = pcVar7;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (pcVar4 == pcVar7 + 1) goto LAB_00546b3f;
        if (DAT_0091d218 < 1) {
          iVar5 = FUN_005b5b70(pcVar7);
          if (iVar5 == 0) {
            iVar5 = FUN_005b7580(pcVar7);
            if (iVar5 == 0) goto LAB_00546b3f;
            goto LAB_00546b25;
          }
        }
        else {
          FUN_00572070();
          iVar5 = FUN_00591d90(pcVar7);
LAB_00546b25:
          if (iVar5 == 0) goto LAB_00546b3f;
        }
        local_24 = FUN_005b8550(uVar3);
        if ((local_24 == 0) || (*(int *)(local_24 + 0x18) != 2)) goto LAB_00546b3f;
      }
      pcVar7 = (char *)param_1[4];
      uVar3 = FUN_00573140("BOUNTY_%d",iVar2);
      if (pcVar7 == (char *)0x0) {
LAB_00546bd2:
        local_20 = 0;
      }
      else {
        pcVar4 = pcVar7;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (pcVar4 == pcVar7 + 1) goto LAB_00546bd2;
        if (DAT_0091d218 < 1) {
          iVar5 = FUN_005b5b70(pcVar7);
          if (iVar5 == 0) {
            iVar5 = FUN_005b7580(pcVar7);
            if (iVar5 == 0) goto LAB_00546bd2;
            goto LAB_00546bb8;
          }
        }
        else {
          FUN_00572070();
          iVar5 = FUN_00591d90(pcVar7);
LAB_00546bb8:
          if (iVar5 == 0) goto LAB_00546bd2;
        }
        local_20 = FUN_005b8550(uVar3);
        if ((local_20 == 0) || (*(int *)(local_20 + 0x18) != 2)) goto LAB_00546bd2;
      }
      pcVar7 = (char *)param_1[4];
      uVar3 = FUN_00573140("FINES_%d",iVar2);
      if (pcVar7 == (char *)0x0) {
LAB_00546c65:
        local_1c = 0;
      }
      else {
        pcVar4 = pcVar7;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (pcVar4 == pcVar7 + 1) goto LAB_00546c65;
        if (DAT_0091d218 < 1) {
          iVar5 = FUN_005b5b70(pcVar7);
          if (iVar5 == 0) {
            iVar5 = FUN_005b7580(pcVar7);
            if (iVar5 == 0) goto LAB_00546c65;
            goto LAB_00546c4b;
          }
        }
        else {
          FUN_00572070();
          iVar5 = FUN_00591d90(pcVar7);
LAB_00546c4b:
          if (iVar5 == 0) goto LAB_00546c65;
        }
        local_1c = FUN_005b8550(uVar3);
        if ((local_1c == 0) || (*(int *)(local_1c + 0x18) != 2)) goto LAB_00546c65;
      }
      pcVar7 = (char *)param_1[4];
      uVar3 = FUN_00573140("UNSERVED_%d",iVar2);
      if (pcVar7 == (char *)0x0) {
LAB_00546cff:
        local_18 = 0;
      }
      else {
        pcVar4 = pcVar7;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (pcVar4 == pcVar7 + 1) goto LAB_00546cff;
        if (DAT_0091d218 < 1) {
          iVar5 = FUN_005b5b70(pcVar7);
          if (iVar5 == 0) {
            iVar5 = FUN_005b7580(pcVar7);
            if (iVar5 == 0) goto LAB_00546cff;
            goto LAB_00546ce5;
          }
        }
        else {
          FUN_00572070();
          iVar5 = FUN_00591d90(pcVar7);
LAB_00546ce5:
          if (iVar5 == 0) goto LAB_00546cff;
        }
        local_18 = FUN_005b8550(uVar3);
        if ((local_18 == 0) || (*(int *)(local_18 + 0x18) != 2)) goto LAB_00546cff;
      }
      pcVar7 = (char *)param_1[4];
      uVar3 = FUN_00573140("TO_DRIVE_%d",iVar2);
      if (pcVar7 == (char *)0x0) {
LAB_00546d92:
        local_28 = 0;
      }
      else {
        pcVar4 = pcVar7;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (pcVar4 == pcVar7 + 1) goto LAB_00546d92;
        if (DAT_0091d218 < 1) {
          iVar5 = FUN_005b5b70(pcVar7);
          if (iVar5 == 0) {
            iVar5 = FUN_005b7580(pcVar7);
            if (iVar5 == 0) goto LAB_00546d92;
            goto LAB_00546d78;
          }
        }
        else {
          FUN_00572070();
          iVar5 = FUN_00591d90(pcVar7);
LAB_00546d78:
          if (iVar5 == 0) goto LAB_00546d92;
        }
        local_28 = FUN_005b8550(uVar3);
        if ((local_28 == 0) || (*(int *)(local_28 + 0x18) != 2)) goto LAB_00546d92;
      }
      pcVar7 = (char *)param_1[4];
      uVar3 = FUN_00573140("EVADED_%d",iVar2);
      if (pcVar7 == (char *)0x0) {
LAB_00546e25:
        local_14 = 0;
      }
      else {
        pcVar4 = pcVar7;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (pcVar4 == pcVar7 + 1) goto LAB_00546e25;
        if (DAT_0091d218 < 1) {
          iVar5 = FUN_005b5b70(pcVar7);
          if (iVar5 == 0) {
            iVar5 = FUN_005b7580(pcVar7);
            if (iVar5 == 0) goto LAB_00546e25;
            goto LAB_00546e0b;
          }
        }
        else {
          FUN_00572070();
          iVar5 = FUN_00591d90(pcVar7);
LAB_00546e0b:
          if (iVar5 == 0) goto LAB_00546e25;
        }
        local_14 = FUN_005b8550(uVar3);
        if ((local_14 == 0) || (*(int *)(local_14 + 0x18) != 2)) goto LAB_00546e25;
      }
      pcVar7 = (char *)param_1[4];
      uVar3 = FUN_00573140("BUSTED_%d",iVar2);
      if (pcVar7 == (char *)0x0) {
LAB_00546ebf:
        iVar5 = 0;
      }
      else {
        pcVar4 = pcVar7;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (pcVar4 == pcVar7 + 1) goto LAB_00546ebf;
        if (DAT_0091d218 < 1) {
          iVar5 = FUN_005b5b70(pcVar7);
          if (iVar5 == 0) {
            iVar5 = FUN_005b7580(pcVar7);
            if (iVar5 == 0) goto LAB_00546ebf;
            goto LAB_00546ea5;
          }
        }
        else {
          FUN_00572070();
          iVar5 = FUN_00591d90(pcVar7);
LAB_00546ea5:
          if (iVar5 == 0) goto LAB_00546ebf;
        }
        iVar5 = FUN_005b8550(uVar3);
        if ((iVar5 == 0) || (*(int *)(iVar5 + 0x18) != 2)) goto LAB_00546ebf;
      }
      puVar6 = _malloc(0x30);
      local_4._0_1_ = 1;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        FUN_00588100(local_28);
        puVar6[5] = local_24;
        puVar6[6] = local_20;
        *puVar6 = &PTR_FUN_0089c2dc;
        puVar6[7] = local_1c;
        puVar6[8] = local_18;
        puVar6[9] = local_28;
        puVar6[10] = local_14;
        puVar6[0xb] = iVar5;
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_005881f0(puVar6);
    } while (iVar2 < (int)(param_1[0x13] * param_1[0x14]));
  }
  FUN_0052d640();
  ExceptionList = local_c;
  return param_1;
}

