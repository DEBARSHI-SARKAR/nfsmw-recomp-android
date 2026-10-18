/* speed.exe 0053d1d0 FUN_0053d1d0; analysis pseudocode, not buildable source.
 * calls 0078e6d0 FUN_0078e6d0
 * calls 0078e720 FUN_0078e720
 * calls 00598970 FUN_00598970
 * calls 00799c10 FUN_00799c10
 * calls 00525220 FUN_00525220
 * calls 007c4b80 FUN_007c4b80
 * calls 0078e5d0 FUN_0078e5d0
 * calls 00793620 FUN_00793620
 * calls 005252d0 FUN_005252d0
 * calls 00796da0 FUN_00796da0
 * calls 00791b00 FUN_00791b00
 * calls 00460d20 FUN_00460d20
 * calls 00799f50 FUN_00799f50
 * calls 00791b70 FUN_00791b70
 * calls 00791d50 FUN_00791d50
 * calls 007935b0 FUN_007935b0
 * calls 0056bc10 FUN_0056bc10
 * calls 00796d30 FUN_00796d30
 * calls 0057e680 FUN_0057e680
 * calls 0078e630 FUN_0078e630
 * calls 0083b8a0 FUN_0083b8a0
 * calls 0078e740 FUN_0078e740
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_0053d1d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  float10 fVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  int local_38;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xd19915bc,&DAT_00890978);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x9beafc09,&DAT_00890978);
  if (*(char *)(param_1 + 0x30) != '\0') {
    return 0;
  }
  if ((DAT_0091ca87 == '\0') && (DAT_0091ca88 == '\0')) {
    FUN_00796d30();
    iVar1 = FUN_00799c10();
  }
  else {
    puVar14 = &LAB_00523be0;
    uVar12 = CONCAT44(s_PlraQlraRlraSlraotherplayer_008f3300 + 0x10,param_1 + 0x48);
    iVar1 = param_1;
    FUN_00796d30(param_1 + 0x48,s_PlraQlraRlraSlraotherplayer_008f3300 + 0x10,&LAB_00523be0,param_1)
    ;
    iVar1 = FUN_00796da0(uVar12,puVar14,iVar1);
  }
  if (iVar1 < 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = FUN_0056bc10(0xb6aae6a6);
    FUN_00598970(uVar3,&DAT_00890978,1,0x417b2601,0x911ab364,0x911ab364,uVar2);
    return iVar1;
  }
  uVar3 = FUN_0056bc10(0x58968929);
  bVar10 = *(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x3b) != '\x01';
  if (bVar10) {
    uVar2 = FUN_0056bc10(0x8569ab44);
    uVar15 = 0xc173e1bb;
  }
  else {
    uVar2 = FUN_0056bc10(0x8569a25f);
    uVar15 = 0xc173de1f;
  }
  uVar4 = FUN_0056bc10(uVar15);
  uVar5 = FUN_0057e680();
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x116d2d5c,
               *(undefined4 *)(param_1 + 0x34 + *(int *)(param_1 + 0x40) * 4));
  uVar15 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = FUN_00791b00(3);
  FUN_005252d0(uVar15,0xc354e4cf,&DAT_0089d764,uVar6);
  uVar15 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = FUN_0078e5d0(3);
  FUN_005252d0(uVar15,0x89d52d43,&DAT_0089d764,uVar6);
  uVar15 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = FUN_0078e630(3);
  FUN_005252d0(uVar15,0x3a9c253b,&DAT_0089d764,uVar6);
  uVar15 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = uVar5;
  FUN_00791b70();
  uVar6 = FUN_007c4b80(uVar6);
  FUN_005252d0(uVar15,0xab46130a,&DAT_0089cee4,uVar6);
  uVar15 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = uVar5;
  FUN_00791d50();
  uVar6 = FUN_007c4b80(uVar6);
  FUN_005252d0(uVar15,0x134dac12,&DAT_0089cee4,uVar6);
  uVar15 = FUN_00791b00(*(undefined4 *)(param_1 + 0x40));
  iVar9 = 0;
  if ((DAT_0091ca87 == '\0') && (DAT_0091ca88 == '\0')) {
    uVar6 = 0;
    uVar12 = CONCAT44(1,*(undefined4 *)(param_1 + 0x278));
    FUN_00799f50(*(undefined4 *)(param_1 + 0x278),1,0);
    iVar9 = FUN_007935b0(uVar12,uVar6);
  }
  else {
    FUN_00799f50();
    iVar7 = FUN_00793620();
    local_38 = 0;
    if (0 < iVar7) {
      do {
        uVar13 = (ulonglong)*(uint *)(param_1 + 0x278);
        iVar9 = local_38;
        FUN_00799f50(*(uint *)(param_1 + 0x278),0,local_38);
        iVar9 = FUN_007935b0(uVar13,iVar9);
        iVar8 = FUN_00460d20();
        if (iVar8 == 0) break;
        iVar9 = 0;
        local_38 = local_38 + 1;
      } while (local_38 < iVar7);
    }
  }
  local_4 = 0;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  if (iVar9 == 0) {
    FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x7ab7102b,&DAT_008941f8,&DAT_0089e094);
  }
  else {
    FUN_0083b8a0(iVar9 + 0x1c,&local_1c,0x1c,&DAT_0089b350);
    FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x7ab7102b,&DAT_0089d764,*(undefined4 *)(iVar9 + 4)
                );
  }
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xd19915bd,&DAT_0089d764,
               *(undefined4 *)(*(int *)(param_1 + 0x40) * 0x30 + 0x78 + param_1));
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x7ab7102c,&DAT_0089d764,uVar15);
  uVar15 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = FUN_0078e5d0(*(undefined4 *)(param_1 + 0x40));
  FUN_005252d0(uVar15,0x7ab7102d,&DAT_0089d764,uVar6);
  uVar15 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = FUN_0078e630(*(undefined4 *)(param_1 + 0x40));
  FUN_005252d0(uVar15,0x7ab7102e,&DAT_0089d764,uVar6);
  uVar15 = *(undefined4 *)(param_1 + 0x10);
  FUN_00791b70();
  uVar6 = FUN_007c4b80(uVar5);
  FUN_005252d0(uVar15,0x7ab7102f,&DAT_0089cee4,uVar6);
  if (bVar10) {
    FUN_0078e6d0(*(undefined4 *)(param_1 + 0x40));
  }
  else {
    FUN_0078e6d0(*(undefined4 *)(param_1 + 0x40));
  }
  uVar2 = FUN_007c4b80(uVar2);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x7ab71030,"%d %s",uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  fVar11 = (float10)FUN_0078e740();
  FUN_005252d0(uVar2,0x7ab71031,"%f %s",(double)fVar11,uVar3);
  FUN_0078e720(*(undefined4 *)(param_1 + 0x40));
  uVar3 = FUN_007c4b80(uVar4);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x7ab71032,"%d %s",uVar3);
  uVar3 = FUN_007c4b80(uVar4);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x7ab71033,"%d %s",uVar3);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x9beafc08,&DAT_00890978);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xd19915bb,&DAT_00890978);
  return iVar1;
}

