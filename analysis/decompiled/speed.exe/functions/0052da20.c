/* speed.exe 0052da20 FUN_0052da20; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 005b7580 FUN_005b7580
 * calls 00652ad0 _malloc
 * calls 0051e6e0 FUN_0051e6e0
 * calls 00591d90 FUN_00591d90
 * calls 005b8550 FUN_005b8550
 * calls 005881f0 FUN_005881f0
 * calls 005938a0 FUN_005938a0
 * calls 005b5b70 FUN_005b5b70
 * calls 00588100 FUN_00588100
 * calls 00572070 FUN_00572070
 */

undefined4 * __thiscall FUN_0052da20(undefined4 *param_1,int param_2)

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
  puStack_8 = &LAB_0086f4bc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005938a0(param_2,1,9,0);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089d504;
  param_1[0xb] = &PTR_LAB_0089d4f8;
  if (0 < (int)(param_1[0x14] * param_1[0x13])) {
    param_2 = 1;
    do {
      pcVar7 = (char *)param_1[4];
      uVar3 = FUN_00573140("TXT_QUANTITY_%d",param_2);
      if (pcVar7 == (char *)0x0) {
LAB_0052db13:
        local_18 = 0;
      }
      else {
        pcVar4 = pcVar7;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (pcVar4 == pcVar7 + 1) goto LAB_0052db13;
        if (DAT_0091d218 < 1) {
          iVar5 = FUN_005b5b70(pcVar7);
          if (iVar5 == 0) {
            iVar5 = FUN_005b7580(pcVar7);
            if (iVar5 == 0) goto LAB_0052db13;
            goto LAB_0052daf5;
          }
        }
        else {
          FUN_00572070();
          iVar5 = FUN_00591d90(pcVar7);
LAB_0052daf5:
          if (iVar5 == 0) goto LAB_0052db13;
        }
        local_18 = FUN_005b8550(uVar3);
        if ((local_18 == 0) || (*(int *)(local_18 + 0x18) != 2)) goto LAB_0052db13;
      }
      pcVar7 = (char *)param_1[4];
      uVar3 = FUN_00573140("TXT_CATEGORY_%d",param_2);
      if (pcVar7 == (char *)0x0) {
LAB_0052dba2:
        local_14 = 0;
      }
      else {
        pcVar4 = pcVar7;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (pcVar4 == pcVar7 + 1) goto LAB_0052dba2;
        if (DAT_0091d218 < 1) {
          iVar5 = FUN_005b5b70(pcVar7);
          if (iVar5 == 0) {
            iVar5 = FUN_005b7580(pcVar7);
            if (iVar5 == 0) goto LAB_0052dba2;
            goto LAB_0052db88;
          }
        }
        else {
          FUN_00572070();
          iVar5 = FUN_00591d90(pcVar7);
LAB_0052db88:
          if (iVar5 == 0) goto LAB_0052dba2;
        }
        local_14 = FUN_005b8550(uVar3);
        if ((local_14 == 0) || (*(int *)(local_14 + 0x18) != 2)) goto LAB_0052dba2;
      }
      pcVar7 = (char *)param_1[4];
      uVar3 = FUN_00573140("TXT_CASH_%d",param_2);
      if (pcVar7 == (char *)0x0) {
LAB_0052dc35:
        iVar5 = 0;
      }
      else {
        pcVar4 = pcVar7;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (pcVar4 == pcVar7 + 1) goto LAB_0052dc35;
        if (DAT_0091d218 < 1) {
          iVar5 = FUN_005b5b70(pcVar7);
          if (iVar5 == 0) {
            iVar5 = FUN_005b7580(pcVar7);
            if (iVar5 == 0) goto LAB_0052dc35;
            goto LAB_0052dc1b;
          }
        }
        else {
          FUN_00572070();
          iVar5 = FUN_00591d90(pcVar7);
LAB_0052dc1b:
          if (iVar5 == 0) goto LAB_0052dc35;
        }
        iVar5 = FUN_005b8550(uVar3);
        if ((iVar5 == 0) || (*(int *)(iVar5 + 0x18) != 2)) goto LAB_0052dc35;
      }
      puVar6 = _malloc(0x20);
      local_4._0_1_ = 1;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        FUN_00588100(local_18);
        *puVar6 = &PTR_FUN_0089c2ec;
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
  FUN_0051e6e0();
  ExceptionList = local_c;
  return param_1;
}

