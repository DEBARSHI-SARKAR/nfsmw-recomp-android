/* speed.exe 0053ede0 FUN_0053ede0; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 005b8550 FUN_005b8550
 * calls 005af1c0 FUN_005af1c0
 * calls 00524920 FUN_00524920
 * calls 00516af0 FUN_00516af0
 * calls 005b1360 FUN_005b1360
 * calls 00527ee0 FUN_00527ee0
 * calls 005b8400 FUN_005b8400
 * calls 0078c730 FUN_0078c730
 * calls 0078c900 FUN_0078c900
 */

void __thiscall FUN_0053ede0(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_00000030;
  int in_stack_00000038;
  int in_stack_00000044;
  int in_stack_00000050;
  uint in_stack_00000058;
  char in_stack_00000064;
  undefined1 *puVar9;
  
  param_2 = param_2 + 1;
  uVar3 = FUN_00573140("STATUS_%dA",param_2);
  uVar4 = FUN_00573140("STATUS_%d",param_2);
  uVar5 = FUN_00573140("GROUP_FLAG_%d",param_2);
  if ((((*(int *)(param_1 + 0x10) != 0) &&
       (iVar6 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar6 != 0)) &&
      (iVar6 = FUN_005b8550(uVar3), iVar6 != 0)) && (iVar6 = FUN_005b1360(0x16a259), iVar6 != 0)) {
    FUN_005b8400(iVar6,0);
    *(undefined4 *)(iVar6 + 0x10) = 0;
  }
  if (((*(int *)(param_1 + 0x10) != 0) &&
      (iVar6 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar6 != 0)) &&
     ((iVar6 = FUN_005b8550(uVar4), iVar6 != 0 && (iVar6 = FUN_005b1360(0x16a259), iVar6 != 0)))) {
    FUN_005b8400(iVar6,0);
    *(undefined4 *)(iVar6 + 0x10) = 0;
  }
  if (((*(int *)(param_1 + 0x10) != 0) &&
      (iVar6 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar6 != 0)) &&
     ((iVar6 = FUN_005b8550(uVar5), iVar6 != 0 && (iVar6 = FUN_005b1360(0x16a259), iVar6 != 0)))) {
    FUN_005b8400(iVar6,0);
    *(undefined4 *)(iVar6 + 0x10) = 0;
  }
  bVar1 = false;
  if (in_stack_00000064 == '\0') {
    return;
  }
  if ((((in_stack_00000030 != 0) && (*(int *)(param_1 + 0x10) != 0)) &&
      (iVar6 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar6 != 0)) &&
     ((iVar6 = FUN_005b8550(uVar5), iVar6 != 0 && (iVar6 = FUN_005b1360(0x1ca7c0), iVar6 != 0)))) {
    FUN_005b8400(iVar6,0);
    *(undefined4 *)(iVar6 + 0x10) = 0;
  }
  if (in_stack_00000028 != 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    uVar7 = FUN_005af1c0("OL_FRIEND_SENT");
    FUN_00527ee0(uVar5,uVar4,uVar7);
  }
  if (in_stack_00000050 != 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    uVar7 = FUN_005af1c0("OL_MAIL");
    FUN_00527ee0(uVar5,uVar4,uVar7);
    *(undefined1 *)(param_1 + 0xf8) = 1;
  }
  if (in_stack_00000024 != 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    uVar7 = FUN_005af1c0("OL_FRIEND");
    FUN_00527ee0(uVar5,uVar4,uVar7);
  }
  bVar8 = in_stack_00000024 != 0 || (in_stack_00000050 != 0 || in_stack_00000028 != 0);
  if ((in_stack_00000020 != 0) && ((param_5 != 0 || ((in_stack_00000058 & 0x20000) != 0)))) {
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    uVar7 = FUN_005af1c0("OL_CHALLENGE_SENT");
    FUN_00527ee0(uVar5,uVar4,uVar7);
    bVar8 = true;
  }
  if ((*(char *)(DAT_0091cf90 + 0x176) == '\0') && (in_stack_00000020 != 0)) {
    if (param_4 != 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x10);
      uVar7 = FUN_005af1c0("OL_CHALLENGE");
      FUN_00527ee0(uVar5,uVar4,uVar7);
      bVar8 = true;
      *(undefined1 *)(param_1 + 0x10d) = 1;
    }
    if ((in_stack_00000058 & 0x400000) != 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x10);
      uVar7 = FUN_005af1c0("OL_CHALLENGE");
      FUN_00527ee0(uVar5,uVar4,uVar7);
      bVar8 = true;
      *(undefined1 *)(param_1 + 0x10d) = 1;
    }
    if (DAT_0091ca8c != 2) goto LAB_0053f0fa;
    puVar9 = &stack0x00000064;
    FUN_0078c730(puVar9);
    cVar2 = FUN_0078c900(puVar9);
    if (cVar2 == '\0') goto LAB_0053f0fa;
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    uVar7 = FUN_005af1c0("OL_VOICE_REQUEST");
    FUN_00527ee0(uVar5,uVar3,uVar7);
    bVar1 = true;
  }
  else {
    if (((param_4 == 0) && ((in_stack_00000058 & 0x400000) == 0)) || (DAT_0091c358 == 0))
    goto LAB_0053f0fa;
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    uVar7 = FUN_005af1c0("OL_CHALLENGE");
    FUN_00527ee0(uVar5,uVar4,uVar7);
    bVar8 = true;
    bVar1 = false;
  }
  *(undefined1 *)(param_1 + 0x10d) = 1;
LAB_0053f0fa:
  if (in_stack_00000038 != 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    uVar7 = FUN_005af1c0("OL_BLOCKED");
    FUN_00527ee0(uVar5,uVar4,uVar7);
    bVar8 = true;
  }
  if ((bVar1) && (in_stack_00000044 != 0)) {
    FUN_00524920(*(undefined4 *)(param_1 + 0x10),uVar3,0x1ca7c0,1);
  }
  if ((((bVar8) && (*(int *)(param_1 + 0x10) != 0)) &&
      (iVar6 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar6 != 0)) &&
     ((iVar6 = FUN_005b8550(uVar4), iVar6 != 0 && (iVar6 = FUN_005b1360(0x1ca7c0), iVar6 != 0)))) {
    FUN_005b8400(iVar6,0);
    *(undefined4 *)(iVar6 + 0x10) = 0;
  }
  return;
}

