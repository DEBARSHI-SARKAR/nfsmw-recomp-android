/* speed.exe 005a5540 FUN_005a5540; analysis pseudocode, not buildable source.
 * calls 00515960 FUN_00515960
 * calls 00515990 FUN_00515990
 * calls 00516c50 FUN_00516c50
 * calls 00516c90 FUN_00516c90
 * calls 0059b7f0 FUN_0059b7f0
 * calls 0059b470 FUN_0059b470
 * calls 0059b830 FUN_0059b830
 * calls 00586ca0 FUN_00586ca0
 * calls 005158b0 FUN_005158b0
 * calls 005929d0 FUN_005929d0
 * calls 00589900 FUN_00589900
 * calls 00589870 FUN_00589870
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005a5540(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_00515960(&local_20,&local_24);
  cVar1 = FUN_005158b0(local_20,local_24,param_1 + 0x90,param_1 + 0x98);
  if (cVar1 == '\0') goto LAB_005a570a;
  FUN_00515990(&local_28);
  if (local_28 <= _DAT_00890968) {
    if (local_28 < _DAT_00890968) {
      FUN_0059b470(1);
      uVar3 = *(undefined4 *)(param_1 + 4);
      uVar6 = 0x148cd7;
      goto LAB_005a55df;
    }
  }
  else {
    FUN_0059b470(0xffffffff);
    uVar3 = *(undefined4 *)(param_1 + 4);
    uVar6 = 0x704;
LAB_005a55df:
    FUN_00516c90(uVar6,uVar3,0);
  }
  if (*(int *)(param_1 + 0x10) != param_1 + 0x10) {
    local_1c = *(int *)(param_1 + 0x2c);
    iVar4 = *(int *)(param_1 + 0x28);
    iVar5 = *(int *)(param_1 + 8);
LAB_005a5608:
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar5 + -4;
    }
    if ((int *)(param_1 + 8) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_1 + 4;
    }
    if (iVar5 == iVar2) goto LAB_005a570a;
    if (param_1 == -0x10) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_1 + 0xc;
    }
    if (iVar4 == iVar2) goto LAB_005a570a;
    if (*(char *)(iVar4 + 0x14) != '\0') {
      local_c = *(undefined4 *)(iVar5 + 0x1c);
      local_10 = *(undefined4 *)(iVar5 + 0x18);
      local_18 = *(undefined4 *)(iVar5 + 0x20);
      local_14 = *(undefined4 *)(iVar5 + 0x24);
      cVar1 = FUN_005158b0(local_20,local_24,&local_10,&local_18);
      if (cVar1 != '\0') goto LAB_005a569b;
    }
    if (*(int *)(iVar4 + 4) == 0) {
      iVar5 = *(int *)(iVar5 + 4);
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar4 + 4) + -4;
      iVar5 = *(int *)(iVar5 + 4);
    }
    goto LAB_005a5608;
  }
LAB_005a570a:
  FUN_00589900();
  iVar5 = *(int *)(param_1 + 0x8c);
  if (iVar5 == 0x2711) {
    if (*(char *)(param_1 + 0xa0) != '\0') {
      uVar3 = FUN_00586ca0(*(undefined4 *)(param_1 + 0x24));
      FUN_00589870(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                   *(undefined4 *)(param_1 + 0x20),uVar3);
    }
    return;
  }
  if (iVar5 == 10000) {
    FUN_0059b830();
    return;
  }
  if (iVar5 == -10000) {
    FUN_0059b7f0();
    return;
  }
  FUN_0059b470(iVar5);
  return;
LAB_005a569b:
  if (*(char *)(param_1 + 0xac) == '\0') {
    if (local_1c != iVar5) {
      FUN_005929d0(iVar5);
    }
    iVar5 = *(int *)(param_1 + 0xa8);
    if ((iVar5 == 0) || (DAT_00987f71 == '\0')) goto LAB_005a570a;
    uVar3 = *(undefined4 *)(param_1 + 4);
  }
  else {
    if (DAT_00987f71 == '\0') goto LAB_005a570a;
    if (local_1c != iVar5) {
      FUN_005929d0(iVar5);
      goto LAB_005a570a;
    }
    iVar5 = *(int *)(param_1 + 0xa8);
    if (iVar5 == 0) goto LAB_005a570a;
    uVar3 = *(undefined4 *)(param_1 + 4);
  }
  FUN_00516c50(iVar5,uVar3,0xff);
  goto LAB_005a570a;
}

