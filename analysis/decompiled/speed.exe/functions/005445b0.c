/* speed.exe 005445b0 FUN_005445b0; analysis pseudocode, not buildable source.
 * calls 00515e20 FUN_00515e20
 * calls 005b5b70 FUN_005b5b70
 * calls 005922b0 FUN_005922b0
 * calls 0056db00 FUN_0056db00
 * calls 00586830 FUN_00586830
 * calls 00525220 FUN_00525220
 * calls 005252d0 FUN_005252d0
 * calls 00572070 FUN_00572070
 * calls 00652ad0 _malloc
 * calls 005b8550 FUN_005b8550
 * calls 005af1c0 FUN_005af1c0
 * calls 005b7580 FUN_005b7580
 * calls 00591d90 FUN_00591d90
 * calls 00586290 FUN_00586290
 * calls 005926f0 FUN_005926f0
 * calls 00592170 FUN_00592170
 */

undefined4 * __thiscall FUN_005445b0(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *local_3c;
  undefined1 local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086fda3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  local_4 = 0;
  *param_1 = &PTR_LAB_0089e484;
  FUN_00592170(param_1[4],&DAT_00890978,"Scrollbar",1,1,0,0);
  uVar5 = param_1[4];
  param_1[0x38] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar4 = FUN_0056db00();
  FUN_005252d0(uVar5,0xeb406fec,uVar4);
  param_2 = 1;
  do {
    local_3c = _malloc(0x2c);
    if (local_3c == (undefined4 *)0x0) {
      local_3c = (undefined4 *)0x0;
    }
    else {
      puVar8 = local_3c + 3;
      *local_3c = &PTR_FUN_0089d348;
      *puVar8 = puVar8;
      local_3c[4] = puVar8;
      local_3c[5] = 0;
      local_3c[9] = 0;
      local_3c[8] = 0;
      local_3c[7] = 0;
      local_3c[6] = 0;
      *(undefined1 *)(local_3c + 10) = 1;
    }
    FUN_00515e20(local_2c,0x20,"option_name_%d",param_2);
    pcVar9 = (char *)param_1[4];
    uVar5 = FUN_005af1c0(local_2c);
    if (pcVar9 == (char *)0x0) {
LAB_00544713:
      iVar7 = 0;
    }
    else {
      pcVar6 = pcVar9;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (pcVar6 == pcVar9 + 1) goto LAB_00544713;
      if (DAT_0091d218 < 1) {
        iVar7 = FUN_005b5b70(pcVar9);
        if (iVar7 == 0) {
          iVar7 = FUN_005b7580(pcVar9);
          if (iVar7 == 0) goto LAB_00544713;
          goto LAB_005446f5;
        }
      }
      else {
        FUN_00572070();
        iVar7 = FUN_00591d90(pcVar9);
LAB_005446f5:
        if (iVar7 == 0) goto LAB_00544713;
      }
      iVar7 = FUN_005b8550(uVar5);
      if ((iVar7 == 0) || (*(int *)(iVar7 + 0x18) != 2)) goto LAB_00544713;
    }
    puVar8 = _malloc(0x10);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      *puVar8 = &PTR_FUN_0089c2bc;
      puVar8[3] = iVar7;
      puVar8 = puVar8 + 1;
    }
    puVar2 = (undefined4 *)local_3c[4];
    *puVar2 = puVar8;
    local_3c[4] = puVar8;
    puVar8[1] = puVar2;
    *puVar8 = local_3c + 3;
    FUN_00515e20(local_2c,0x20,"option_data_%d",param_2);
    pcVar9 = (char *)param_1[4];
    uVar5 = FUN_005af1c0(local_2c);
    if (pcVar9 == (char *)0x0) {
LAB_005447ec:
      iVar7 = 0;
    }
    else {
      pcVar6 = pcVar9;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (pcVar6 == pcVar9 + 1) goto LAB_005447ec;
      if (DAT_0091d218 < 1) {
        iVar7 = FUN_005b5b70(pcVar9);
        if (iVar7 == 0) {
          iVar7 = FUN_005b7580(pcVar9);
          if (iVar7 == 0) goto LAB_005447ec;
          goto LAB_005447c6;
        }
      }
      else {
        FUN_00572070();
        iVar7 = FUN_00591d90(pcVar9);
LAB_005447c6:
        if (iVar7 == 0) goto LAB_005447ec;
      }
      iVar7 = FUN_005b8550(uVar5);
      if ((iVar7 == 0) || (*(int *)(iVar7 + 0x18) != 2)) goto LAB_005447ec;
    }
    puVar8 = _malloc(0x10);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      *puVar8 = &PTR_FUN_0089c2bc;
      puVar8[3] = iVar7;
      puVar8 = puVar8 + 1;
    }
    puVar2 = (undefined4 *)local_3c[4];
    *puVar2 = puVar8;
    local_3c[4] = puVar8;
    puVar8[1] = puVar2;
    *puVar8 = local_3c + 3;
    FUN_00515e20(local_2c,0x20,"option_mouse_%d",param_2);
    pcVar9 = (char *)param_1[4];
    uVar5 = FUN_005af1c0(local_2c);
    if (pcVar9 == (char *)0x0) {
LAB_005448ad:
      iVar7 = 0;
    }
    else {
      pcVar6 = pcVar9;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (pcVar6 == pcVar9 + 1) goto LAB_005448ad;
      if (DAT_0091d218 < 1) {
        iVar7 = FUN_005b5b70(pcVar9);
        if (iVar7 == 0) {
          iVar7 = FUN_005b7580(pcVar9);
          if (iVar7 == 0) goto LAB_005448ad;
          goto LAB_00544899;
        }
      }
      else {
        FUN_00572070();
        iVar7 = FUN_00591d90(pcVar9);
LAB_00544899:
        if (iVar7 == 0) goto LAB_005448ad;
      }
      iVar7 = FUN_005b8550(uVar5);
      if (iVar7 == 0) goto LAB_005448ad;
    }
    local_3c[5] = iVar7;
    FUN_00586830();
    FUN_005922b0(local_3c);
    param_2 = param_2 + 1;
  } while (param_2 < 9);
  uVar3 = (uint)(((byte)DAT_0091cbac & 0xf0) == 0x30);
  param_1[0x39] = uVar3;
  FUN_00525220(param_1[4],0x48d4fcae,*(undefined4 *)(&DAT_008f3a24 + uVar3 * 4));
  FUN_00525220(param_1[4],0x426c7b4d,*(undefined4 *)(&DAT_008f3a24 + param_1[0x39] * 4));
  pcVar9 = (char *)param_1[4];
  *(undefined1 *)(param_1 + 0x36) = 1;
  param_1[0x35] = 0x406415e3;
  if (pcVar9 != (char *)0x0) {
    pcVar6 = pcVar9;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (pcVar6 != pcVar9 + 1) {
      if (DAT_0091d218 < 1) {
        iVar7 = FUN_005b5b70(pcVar9);
        if (iVar7 == 0) {
          iVar7 = FUN_005b7580(pcVar9);
          if (iVar7 == 0) goto LAB_005449a9;
          goto LAB_00544995;
        }
      }
      else {
        FUN_00572070();
        iVar7 = FUN_00591d90(pcVar9);
LAB_00544995:
        if (iVar7 == 0) goto LAB_005449a9;
      }
      iVar7 = FUN_005b8550(0xd276ba2f);
      if (iVar7 != 0) goto LAB_005449ab;
    }
  }
LAB_005449a9:
  iVar7 = 0;
LAB_005449ab:
  FUN_005926f0(iVar7);
  ExceptionList = local_c;
  return param_1;
}

