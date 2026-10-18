/* speed.exe 00562ff0 FUN_00562ff0; analysis pseudocode, not buildable source.
 * calls 0057dbb0 FUN_0057dbb0
 * calls 007f3c95 FUN_007f3c95
 * calls 005302c0 FUN_005302c0
 * calls 00525940 FUN_00525940
 * calls 0056ad60 FUN_0056ad60
 * calls 007f3ca0 FUN_007f3ca0
 * calls 0062fe40 FUN_0062fe40
 * calls 005b7780 FUN_005b7780
 * calls 0064c9b0 FUN_0064c9b0
 * calls 004aecb0 FUN_004aecb0
 * calls 005ace40 FUN_005ace40
 * calls 00660100 FUN_00660100
 * calls 0057f570 FUN_0057f570
 * calls 00516b50 FUN_00516b50
 * calls 00627400 FUN_00627400
 * calls 00560dc0 FUN_00560dc0
 * calls 004c3790 FUN_004c3790
 * calls 0051abc0 FUN_0051abc0
 * calls 004df330 FUN_004df330
 * calls 005258b0 FUN_005258b0
 * calls 005a3950 FUN_005a3950
 * calls 00516af0 FUN_00516af0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00562ff0(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008712ef;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0051abc0(DAT_0091cbc4);
  if (((*(uint *)(DAT_0091cf90 + 300) >> 8 & 1) != 0) && (DAT_00925e90 == 3)) {
    *(undefined4 *)(DAT_0091cf90 + 300) = 0;
    if ((*(char *)(DAT_0091cf90 + 3) == '\0') ||
       ((((((byte)DAT_0091cbac & 0xf0) == 0x10 && (DAT_0091cbc4 == -0x7798bed3)) ||
         (DAT_0091cbcc == 0x1000000)) ||
        ((DAT_0091cbcc == 0x3000000 || (DAT_0091cbcc == 0x5000000)))))) {
      DAT_0091cbac = DAT_0091cbac & 0xfffffff1 | 1;
      FUN_005ace40();
      *(uint *)(DAT_0091cf90 + 300) = *(uint *)(DAT_0091cf90 + 300) | 0x100;
    }
    else if ((*(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac) & 1) == 0) {
      FUN_005a3950(1);
    }
    else {
      FUN_0057f570();
    }
  }
  if ((DAT_0091cbac & 0x400000) != 0) {
    FUN_005302c0();
    goto LAB_005631d6;
  }
  if ((DAT_0091cbac & 0x10000) == 0) {
    uVar2 = DAT_0091cbac & 0xf;
    if (uVar2 == 1) {
      if (*(char *)(param_1 + 0x84) == '\0') {
        bVar5 = true;
      }
      else {
        *(undefined1 *)(param_1 + 0x84) = 0;
        cVar1 = FUN_00516b50("SMS_Mailboxes.fng");
        bVar5 = cVar1 != '\0';
      }
      FUN_005258b0(bVar5);
      goto LAB_005631d6;
    }
    if (uVar2 != 2) {
      if (uVar2 != 3) goto LAB_005631d6;
      FUN_005258b0(1);
    }
    uVar3 = *(undefined4 *)(DAT_0091cb20 + 0x50);
  }
  else {
    if (DAT_00925e90 != 3) {
      iVar4 = FUN_00627400(0x10);
      local_4 = 0;
      if (iVar4 != 0) {
        FUN_0062fe40(1,0);
      }
      local_4 = 0xffffffff;
      goto LAB_005631d6;
    }
    FUN_005258b0(1);
    if (*(char *)(DAT_0091cf90 + 3) == '\0') goto LAB_005631d6;
    *(undefined4 *)(DAT_0091cf90 + 300) = 0;
    *(uint *)(DAT_0091cf90 + 300) = *(uint *)(DAT_0091cf90 + 300) | 2;
    uVar3 = 0;
  }
  FUN_00525940(DAT_0091cbb4,uVar3,0,0);
LAB_005631d6:
  if (*(char *)(param_1 + 0x84) != '\0') {
    *(undefined1 *)(param_1 + 0x84) = 0;
  }
  uVar3 = FUN_004c3790(*(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x70));
  *(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x70) = uVar3;
  FUN_004aecb0(*(int *)(DAT_0091cf90 + 0x10) + 0x4c,0xbf800000);
  FUN_004df330(1);
  iVar4 = FUN_00516af0(DAT_0091cbb8);
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x3c) != 0)) {
    *(undefined1 *)(*(int *)(iVar4 + 0x3c) + 0x28) = 1;
  }
  iVar4 = DAT_0091cbc4;
  if (DAT_0091cbbc != (code *)0x0) {
    (*DAT_0091cbbc)(DAT_0091cbc0);
  }
  DAT_0091cbac = 0;
  DAT_0091cbb8 = 0;
  DAT_0091cbb4 = 0;
  DAT_0091cbb0 = 0;
  DAT_0091cbbc = (code *)0x0;
  DAT_0091cbc0 = 0;
  _DAT_0091cbd0 = 0;
  _DAT_0091cbd4 = 0;
  DAT_0091cbdc = 0;
  DAT_0091cbc8 = 0;
  DAT_0091cbcc = 0;
  DAT_0091cbc4 = iVar4;
  if (*(char *)(DAT_0091cb20 + 0x18) != '\0') {
    uVar3 = 0xff;
    FUN_0056ad60(0xff);
    FUN_0057dbb0(uVar3);
    *(undefined1 *)(DAT_0091cb20 + 0x18) = 0;
    FUN_007f3ca0(0,0x4000);
  }
  if (*DAT_0091cadc != -0xd8) {
    for (iVar4 = *(int *)(*DAT_0091cadc + 0xe0); iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
      FUN_005b7780(0x7e998e5e,0,iVar4,0xffffffff,0);
    }
  }
  *(undefined1 *)(DAT_0091cb20 + 0x23) = 0;
  iVar4 = DAT_0091cb20;
  if (*(char *)(DAT_0091cb20 + 0x2c) != '\0') {
    *(undefined4 *)(DAT_0091cb20 + 0x38) = 0;
    *(undefined1 *)(iVar4 + 0x14) = 0;
    *(undefined4 *)(iVar4 + 0x40) = 10;
    *(undefined2 *)(iVar4 + 0x48) = 0;
    iVar4 = FUN_0064c9b0();
    if (iVar4 == 0) {
      FUN_007f3c95(0);
    }
    iVar4 = FUN_0064c9b0();
    if (iVar4 != 0) {
      uVar3 = FUN_00660100(8,9);
      FUN_00560dc0(uVar3);
    }
  }
  ExceptionList = pvStack_c;
  return;
}

