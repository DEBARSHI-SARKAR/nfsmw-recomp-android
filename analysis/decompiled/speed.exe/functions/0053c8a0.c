/* speed.exe 0053c8a0 FUN_0053c8a0; analysis pseudocode, not buildable source.
 * calls 005a5790 FUN_005a5790
 * calls 00515e20 FUN_00515e20
 * calls 00460c70 FUN_00460c70
 * calls 0056bc00 FUN_0056bc00
 * calls 0045d380 FUN_0045d380
 * calls 005fb850 FUN_005fb850
 * calls 00516af0 FUN_00516af0
 * calls 005b1360 FUN_005b1360
 * calls 0056e560 FUN_0056e560
 * calls 005b8400 FUN_005b8400
 * calls 005b8550 FUN_005b8550
 * calls 0056bc10 FUN_0056bc10
 * calls 005fba70 FUN_005fba70
 * calls 00592410 FUN_00592410
 * calls 00592710 FUN_00592710
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0053c8a0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  char *pcVar8;
  undefined1 local_40;
  undefined4 local_3f;
  
  local_40 = 0;
  puVar6 = &local_3f;
  for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x110) + 8);
  pcVar8 = "TRACKNAME_";
  uVar2 = FUN_0056e560();
  cVar1 = FUN_0056bc00(uVar2,pcVar8,uVar3);
  if (cVar1 == '\0') {
    uVar3 = FUN_005fba70();
    FUN_00515e20(&local_40,0x40,uVar3);
  }
  else {
    uVar3 = FUN_0056bc10(uVar2);
    FUN_00515e20(&local_40,0x40,uVar3);
  }
  iVar4 = FUN_0045d380(1);
  iVar5 = 0;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + -4;
  }
  FUN_00592410(iVar4);
  FUN_00460c70();
  if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x3b) == '\x01') {
    uVar3 = FUN_0056bc10(0x8569a26a);
    fVar7 = (float10)FUN_005fb850(uVar3);
    fVar7 = fVar7 * (float10)_DAT_00890d60;
  }
  else {
    uVar3 = FUN_0056bc10(0x867dcfd9);
    fVar7 = (float10)FUN_005fb850(uVar3);
    fVar7 = fVar7 * (float10)_DAT_0089dcc8;
  }
  FUN_00515e20(&local_40,0x40,"%$0.1f %s",(double)fVar7);
  iVar4 = FUN_0045d380(4);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + -4;
  }
  FUN_00592410(iVar4);
  FUN_00460c70();
  iVar4 = FUN_0045d380(5);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + -4;
  }
  iVar4 = FUN_00592410(iVar4);
  if ((*(int *)(*(int *)(param_1 + 0x100) + 0xc) == 1) && (*(char *)(DAT_0091cf90 + 0x141) == '\0'))
  {
    FUN_00515e20(&local_40,0x40,&DAT_0089d764,*(undefined4 *)(param_1 + 0x114));
    FUN_00460c70();
    FUN_00592710(iVar4);
    if (((*(int *)(param_1 + 0x10) != 0) &&
        (iVar5 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar5 != 0)) &&
       ((iVar5 = FUN_005b8550(0x4709e255), iVar5 != 0 &&
        (iVar5 = FUN_005b1360(0x6ebbfb68), iVar5 != 0)))) {
      FUN_005b8400();
      *(undefined4 *)(iVar5 + 0x10) = 0;
    }
    if (*(int *)(param_1 + 0x10) == 0) {
      return;
    }
    iVar5 = FUN_00516af0(*(int *)(param_1 + 0x10));
    if (iVar5 == 0) {
      return;
    }
    iVar5 = FUN_005b8550(0x4b4e388d);
    if (iVar5 == 0) {
      return;
    }
    uVar3 = 0x6ebbfb68;
  }
  else {
    if (*(int *)(iVar4 + 0xc) != 0) {
      iVar5 = *(int *)(iVar4 + 0xc) + -4;
    }
    uVar3 = FUN_0056bc10(0x7f2f7ad6);
    FUN_00460c70(iVar5 + 0xc,uVar3);
    FUN_005a5790(iVar4);
    if ((((*(int *)(param_1 + 0x10) != 0) &&
         (iVar5 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar5 != 0)) &&
        (iVar5 = FUN_005b8550(0x4709e255), iVar5 != 0)) &&
       (iVar5 = FUN_005b1360(0x163c76), iVar5 != 0)) {
      FUN_005b8400();
      *(undefined4 *)(iVar5 + 0x10) = 0;
    }
    if (*(int *)(param_1 + 0x10) == 0) {
      return;
    }
    iVar5 = FUN_00516af0(*(int *)(param_1 + 0x10));
    if (iVar5 == 0) {
      return;
    }
    iVar5 = FUN_005b8550(0x4b4e388d);
    if (iVar5 == 0) {
      return;
    }
    uVar3 = 0x163c76;
  }
  iVar5 = FUN_005b1360(uVar3);
  if (iVar5 != 0) {
    FUN_005b8400();
    *(undefined4 *)(iVar5 + 0x10) = 0;
  }
  return;
}

