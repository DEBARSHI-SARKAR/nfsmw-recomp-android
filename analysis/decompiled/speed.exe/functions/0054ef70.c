/* speed.exe 0054ef70 FUN_0054ef70; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 00627400 FUN_00627400
 * calls 00516af0 FUN_00516af0
 * calls 00460c20 FUN_00460c20
 * calls 00525220 FUN_00525220
 * calls 00460ca0 FUN_00460ca0
 * calls 00460d20 FUN_00460d20
 * calls 00516be0 FUN_00516be0
 * calls 005b8550 FUN_005b8550
 * calls 00621e80 FUN_00621e80
 * calls 00569cc0 FUN_00569cc0
 * calls 00586290 FUN_00586290
 * calls 00517b30 FUN_00517b30
 * calls 00526080 FUN_00526080
 * calls 004fb000 FUN_004fb000
 * calls 0056bb20 FUN_0056bb20
 */

undefined4 * __thiscall FUN_0054ef70(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870702;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  *param_1 = &PTR_FUN_0089e3d0;
  DAT_0091cb1c = param_1 + 0xf;
  param_1[0xe] = 0;
  *DAT_0091cb1c = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)((int)param_1 + 0x59) = 0;
  local_4 = 1;
  local_14 = 0;
  bVar1 = true;
  FUN_00569cc0();
  if (param_1[4] != 0) {
    iVar3 = FUN_00516af0(param_1[4]);
    if (iVar3 != 0) {
      iVar3 = FUN_005b8550(0x348ff9f);
      if (iVar3 != 0) {
        FUN_00460ca0(*(undefined4 *)(iVar3 + 0x24),s_unknown_008f3790,0x100);
        *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x400000;
      }
    }
  }
  cVar2 = FUN_004fb000();
  if (cVar2 != '\0') {
    FUN_00516be0(0x70d2183b,param_1[4],0xfffffffc,0xff);
  }
  iVar3 = *(int *)(DAT_0091cf90 + 0x10);
  iVar4 = FUN_00460d20(s_unknown_008f3790,"drag_tutorial");
  if (iVar4 == 0) {
    if ((iVar3 != -0xa8) && ((*(uint *)(iVar3 + 0xac) >> 6 & 1) == 0)) {
      bVar1 = false;
      *(uint *)(iVar3 + 0xac) = *(uint *)(iVar3 + 0xac) | 0x40;
    }
    pcVar6 = "TUTORIAL_DRAG";
LAB_0054f17f:
    local_14 = FUN_00573140(pcVar6);
    if (!bVar1) goto LAB_0054f1ae;
  }
  else {
    iVar4 = FUN_00460d20(s_unknown_008f3790,"speedtrap_tutorial");
    if (iVar4 == 0) {
      if ((iVar3 != -0xa8) && ((*(uint *)(iVar3 + 0xac) >> 7 & 1) == 0)) {
        bVar1 = false;
        *(uint *)(iVar3 + 0xac) = *(uint *)(iVar3 + 0xac) | 0x80;
      }
      pcVar6 = "TUTORIAL_SPEEDTRAPRACE";
      goto LAB_0054f17f;
    }
    iVar4 = FUN_00460d20(s_unknown_008f3790,"tollbooth_tutorial");
    if (iVar4 == 0) {
      if ((iVar3 != -0xa8) && ((*(uint *)(iVar3 + 0xac) >> 8 & 1) == 0)) {
        bVar1 = false;
        *(uint *)(iVar3 + 0xac) = *(uint *)(iVar3 + 0xac) | 0x100;
      }
      pcVar6 = "TUTORIAL_TOLLBOOTH";
      goto LAB_0054f17f;
    }
    iVar4 = FUN_00460d20(s_unknown_008f3790,"bounty_tutorial");
    if (iVar4 == 0) {
      if ((iVar3 != -0xa8) && ((*(uint *)(iVar3 + 0xac) >> 10 & 1) == 0)) {
        bVar1 = false;
        *(uint *)(iVar3 + 0xac) = *(uint *)(iVar3 + 0xac) | 0x400;
      }
      pcVar6 = "TUTORIAL_BOUNTY";
      goto LAB_0054f17f;
    }
    iVar4 = FUN_00460d20(s_unknown_008f3790,"pursuit_tutorial");
    if (iVar4 == 0) {
      if ((iVar3 != -0xa8) && ((*(uint *)(iVar3 + 0xac) >> 9 & 1) == 0)) {
        bVar1 = false;
        *(uint *)(iVar3 + 0xac) = *(uint *)(iVar3 + 0xac) | 0x200;
      }
      pcVar6 = "TUTORIAL_PURSUIT";
      goto LAB_0054f17f;
    }
  }
  FUN_00516be0(0x59291f95,param_1[4],0xfffffffc,0xff);
LAB_0054f1ae:
  uVar5 = FUN_00460c20("_LABEL",local_14);
  FUN_00525220(param_1[4],0x5a0ee0d9,uVar5);
  FUN_00525220(param_1[4],0xf414bf3e,uVar5);
  FUN_00525220(param_1[4],0x5a0ee0d8,uVar5);
  FUN_00525220(param_1[4],0x7d2ea5d,uVar5);
  uVar5 = param_1[4];
  FUN_00517b30(s_unknown_008f3790);
  iVar3 = FUN_0056bb20();
  if ((iVar3 != 0) || (*(char *)(param_1 + 0x16) != '\0')) {
    FUN_00526080(s_unknown_008f3790,uVar5);
  }
  iVar3 = FUN_00627400(0xc);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (iVar3 != 0) {
    FUN_00621e80(0x14035fb);
  }
  ExceptionList = local_c;
  return param_1;
}

