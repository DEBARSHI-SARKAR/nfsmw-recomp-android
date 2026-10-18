/* speed.exe 00553260 FUN_00553260; analysis pseudocode, not buildable source.
 * calls 005b5b70 FUN_005b5b70
 * calls 00548ae0 FUN_00548ae0
 * calls 005938a0 FUN_005938a0
 * calls 005b1360 FUN_005b1360
 * calls 005b8400 FUN_005b8400
 * calls 00572070 FUN_00572070
 * calls 00516be0 FUN_00516be0
 * calls 00531990 FUN_00531990
 * calls 005b8550 FUN_005b8550
 * calls 0056d750 FUN_0056d750
 * calls 005af1c0 FUN_005af1c0
 * calls 005b7580 FUN_005b7580
 * calls 00591d90 FUN_00591d90
 * calls 005b7780 FUN_005b7780
 */

undefined4 * __thiscall FUN_00553260(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870a18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005938a0(param_2,1,6,1);
  iVar4 = 0;
  *param_1 = &PTR_FUN_0089ebac;
  param_1[0xb] = &PTR_LAB_0089eba0;
  param_1[0x39] = 0;
  *(undefined1 *)(param_1 + 0x3a) = 1;
  *(undefined1 *)((int)param_1 + 0xe9) = 0;
  *(undefined1 *)((int)param_1 + 0xea) = 1;
  *(undefined1 *)((int)param_1 + 0xeb) = 0;
  *(undefined1 *)(param_1 + 0x37) = 1;
  *(undefined2 *)(param_1 + 0x38) = 0xffff;
  local_4 = 0;
  if (0 < (int)(param_1[0x14] * param_1[0x13])) {
    do {
      iVar4 = iVar4 + 1;
      FUN_00531990(iVar4);
    } while (iVar4 < (int)(param_1[0x14] * param_1[0x13]));
  }
  FUN_00548ae0();
  puVar8 = *(undefined1 **)(param_2 + 8);
  if (puVar8 != (undefined1 *)0x0) {
    DAT_0091ca50 = puVar8;
    *(undefined1 *)((int)param_1 + 0xe9) = 1;
    goto LAB_005533c9;
  }
  if (param_1[0x11] == 0) {
    DAT_0091ca50 = (undefined1 *)0x0;
  }
  else {
    DAT_0091ca50 = *(undefined1 **)(param_1[0x11] + 0x18);
  }
  pcVar9 = (char *)param_1[4];
  puVar8 = DAT_0091ca50;
  if (pcVar9 == (char *)0x0) goto LAB_005533c9;
  pcVar5 = pcVar9;
  do {
    cVar3 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar3 != '\0');
  if (pcVar5 == pcVar9 + 1) goto LAB_005533c9;
  if (DAT_0091d218 < 1) {
    iVar4 = FUN_005b5b70(pcVar9);
    if (iVar4 == 0) {
      iVar4 = FUN_005b7580(pcVar9);
      puVar8 = DAT_0091ca50;
      if (iVar4 == 0) goto LAB_005533c9;
      goto LAB_0055338a;
    }
  }
  else {
    FUN_00572070();
    iVar4 = FUN_00591d90(pcVar9);
LAB_0055338a:
    puVar8 = DAT_0091ca50;
    if (iVar4 == 0) goto LAB_005533c9;
  }
  iVar4 = FUN_005b8550(0x2cf801c2);
  puVar8 = DAT_0091ca50;
  if ((iVar4 != 0) && (iVar4 = FUN_005b1360(0x5079c8f8), puVar8 = DAT_0091ca50, iVar4 != 0)) {
    FUN_005b8400(iVar4,0);
    *(undefined4 *)(iVar4 + 0x10) = 0;
    puVar8 = DAT_0091ca50;
  }
LAB_005533c9:
  if (puVar8 != (undefined1 *)0x0) {
    uVar2 = FUN_0056d750();
    *(undefined1 *)(param_1 + 0x3a) = uVar2;
    cVar3 = FUN_0056d750();
    if (cVar3 == '\0') {
      *(undefined1 *)((int)param_1 + 0xe1) = *DAT_0091ca50;
    }
    else {
      *(undefined1 *)(param_1 + 0x38) = *DAT_0091ca50;
    }
  }
  if ((*(char *)(DAT_0091cb20 + 0x1e) != '\0') || (*(char *)(DAT_0091cb20 + 0x1f) != '\0')) {
    uVar7 = param_1[4];
    uVar6 = FUN_005af1c0("HIDE_INCOMING");
    FUN_00516be0(uVar6,uVar7,0xfffffffc,0xff);
    piVar1 = DAT_0091cadc;
    uVar7 = FUN_005af1c0("SMS_MAILBOX");
    if (*piVar1 != -0xd8) {
      for (iVar4 = *(int *)(*piVar1 + 0xe0); iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
        FUN_005b7780(uVar7,0,iVar4,0xfffffffc,0);
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}

