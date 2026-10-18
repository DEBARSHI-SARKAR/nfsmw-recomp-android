/* speed.exe 0058f320 FUN_0058f320; analysis pseudocode, not buildable source.
 * calls 007303d0 FUN_007303d0
 * calls 00516b50 FUN_00516b50
 * calls 00621e80 FUN_00621e80
 * calls 00586290 FUN_00586290
 * calls 00573140 FUN_00573140
 * calls 004b8c40 FUN_004b8c40
 * calls 00542da0 FUN_00542da0
 * calls 00460d20 FUN_00460d20
 * calls 00516c90 FUN_00516c90
 * calls 00460c20 FUN_00460c20
 * calls 00627400 FUN_00627400
 * calls 00524850 FUN_00524850
 * calls 00663c90 FUN_00663c90
 * calls 00516e10 FUN_00516e10
 * calls 005169b0 FUN_005169b0
 * calls 004fb000 FUN_004fb000
 * calls 00525220 FUN_00525220
 * calls 00515e60 FUN_00515e60
 * calls 00517a50 FUN_00517a50
 */

undefined4 * __thiscall FUN_0058f320(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008727c2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  uVar6 = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_008a0fd4;
  FUN_00517a50();
  bVar1 = true;
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar3 = FUN_00516e10();
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(iVar3 + 1);
  iVar3 = FUN_00516e10();
  *(undefined1 *)(iVar3 + 1) = 0;
  do {
    if (DAT_009b2c14 == 0) {
      cVar2 = FUN_007303d0();
      if (cVar2 == '\0') {
        cVar2 = FUN_004b8c40();
        if (cVar2 == '\0') break;
      }
    }
    FUN_00663c90();
  } while( true );
  cVar2 = FUN_00516b50("EA_Trax.fng");
  if (cVar2 != '\0') {
    FUN_005169b0("EA_Trax.fng");
  }
  uVar4 = FUN_00524850(param_1[4],0x348ff9f,s_unknown_008f3f80);
  FUN_00515e60(uVar4);
  cVar2 = FUN_004fb000();
  if (cVar2 != '\0') {
    FUN_00516c90(0x70d2183b,param_1[4],0);
  }
  iVar3 = *(int *)(DAT_0091cf90 + 0x10);
  iVar5 = FUN_00460d20(s_unknown_008f3f80,"drag_tutorial");
  if (iVar5 == 0) {
    if ((iVar3 != -0xa8) && ((*(uint *)(iVar3 + 0xac) >> 6 & 1) == 0)) {
      bVar1 = false;
      *(uint *)(iVar3 + 0xac) = *(uint *)(iVar3 + 0xac) | 0x40;
    }
    pcVar7 = "TUTORIAL_DRAG";
LAB_0058f52e:
    uVar6 = FUN_00573140(pcVar7);
    if (!bVar1) goto LAB_0058f552;
  }
  else {
    iVar5 = FUN_00460d20(s_unknown_008f3f80,"speedtrap_tutorial");
    if (iVar5 == 0) {
      if ((iVar3 != -0xa8) && ((*(uint *)(iVar3 + 0xac) >> 7 & 1) == 0)) {
        bVar1 = false;
        *(uint *)(iVar3 + 0xac) = *(uint *)(iVar3 + 0xac) | 0x80;
      }
      pcVar7 = "TUTORIAL_SPEEDTRAPRACE";
      goto LAB_0058f52e;
    }
    iVar5 = FUN_00460d20(s_unknown_008f3f80,"tollbooth_tutorial");
    if (iVar5 == 0) {
      if ((iVar3 != -0xa8) && ((*(uint *)(iVar3 + 0xac) >> 8 & 1) == 0)) {
        bVar1 = false;
        *(uint *)(iVar3 + 0xac) = *(uint *)(iVar3 + 0xac) | 0x100;
      }
      pcVar7 = "TUTORIAL_TOLLBOOTH";
      goto LAB_0058f52e;
    }
    iVar5 = FUN_00460d20(s_unknown_008f3f80,"bounty_tutorial");
    if (iVar5 == 0) {
      if ((iVar3 != -0xa8) && ((*(uint *)(iVar3 + 0xac) >> 10 & 1) == 0)) {
        bVar1 = false;
        *(uint *)(iVar3 + 0xac) = *(uint *)(iVar3 + 0xac) | 0x400;
      }
      pcVar7 = "TUTORIAL_BOUNTY";
      goto LAB_0058f52e;
    }
    iVar5 = FUN_00460d20(s_unknown_008f3f80,"pursuit_tutorial");
    if (iVar5 == 0) {
      if ((iVar3 != -0xa8) && ((*(uint *)(iVar3 + 0xac) >> 9 & 1) == 0)) {
        bVar1 = false;
        *(uint *)(iVar3 + 0xac) = *(uint *)(iVar3 + 0xac) | 0x200;
      }
      pcVar7 = "TUTORIAL_PURSUIT";
      goto LAB_0058f52e;
    }
  }
  FUN_00516c90(0x59291f95,param_1[4],0);
LAB_0058f552:
  uVar6 = FUN_00460c20("_LABEL",uVar6);
  FUN_00525220(param_1[4],0x5a0ee0d9,uVar6);
  FUN_00525220(param_1[4],0xf414bf3e,uVar6);
  FUN_00525220(param_1[4],0x5a0ee0d8,uVar6);
  FUN_00525220(param_1[4],0x7d2ea5d,uVar6);
  FUN_00542da0(s_unknown_008f3f80,param_1[4]);
  iVar3 = FUN_00627400(0xc);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (iVar3 != 0) {
    FUN_00621e80(0x14035fb);
  }
  ExceptionList = local_c;
  return param_1;
}

