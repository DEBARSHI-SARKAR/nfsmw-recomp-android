/* speed.exe 0052cbc0 FUN_0052cbc0; analysis pseudocode, not buildable source.
 * calls 005905a0 FUN_005905a0
 * calls 00454810 FUN_00454810
 * calls 00452d40 FUN_00452d40
 * calls 00525220 FUN_00525220
 * calls 005113b0 FUN_005113b0
 * calls 00590550 FUN_00590550
 * calls 00590630 FUN_00590630
 * calls 005252d0 FUN_005252d0
 * calls 00590430 FUN_00590430
 * calls 00454640 FUN_00454640
 * calls 005905f0 FUN_005905f0
 * calls 004546c0 FUN_004546c0
 * calls 0056db00 FUN_0056db00
 * calls 00573140 FUN_00573140
 * calls 006269b0 FUN_006269b0
 * calls 0056bc10 FUN_0056bc10
 * calls 005999f0 FUN_005999f0
 * calls 0045a430 FUN_0045a430
 * calls 0051e1a0 FUN_0051e1a0
 * calls 00590500 FUN_00590500
 * calls 00452bd0 FUN_00452bd0
 */

void __fastcall FUN_0052cbc0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint local_34;
  undefined1 local_30 [20];
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086f3c0;
  local_c = ExceptionList;
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  ExceptionList = &local_c;
  uVar1 = FUN_0056bc10(0xe21d083c,*(int *)(DAT_0091cf90 + 0x10) + 0x314);
  FUN_005252d0(uVar2,0x1232703a,uVar1);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = FUN_0056db00();
  uVar1 = FUN_0056bc10(0x6031106e,uVar1);
  FUN_005252d0(uVar2,0xb259eea7,uVar1);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = FUN_00590500();
  uVar1 = FUN_0056bc10(0x364e4525,uVar1);
  FUN_005252d0(uVar2,0xb259eea8,uVar1);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = FUN_005999f0(7);
  uVar1 = FUN_0056bc10(0xa355fedd,uVar1);
  FUN_005252d0(uVar2,0xb259eea9,uVar1);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = FUN_005905f0();
  uVar1 = FUN_0056bc10(0xb1e58db1,uVar1);
  FUN_005252d0(uVar2,0xb259eeaa,uVar1);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = FUN_00590430(1);
  uVar1 = FUN_0056bc10(0x91cb790,uVar1);
  FUN_005252d0(uVar2,0x6eb5ac50,uVar1);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = FUN_00590430(0);
  uVar1 = FUN_0056bc10(0x1903c44d,uVar1);
  FUN_005252d0(uVar2,0x6eb5ac51,uVar1);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = FUN_00590550();
  uVar1 = FUN_0056bc10(0x3598476f,uVar1);
  FUN_005252d0(uVar2,0xd919049f,uVar1);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = FUN_005905a0();
  uVar1 = FUN_0056bc10(0x2e90d7ed,uVar1);
  FUN_005252d0(uVar2,0xd91904a0,uVar1);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = FUN_00590630(1);
  uVar1 = FUN_0056bc10(0x82a67697,uVar1);
  FUN_005252d0(uVar2,0xd01e18c5,uVar1);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = FUN_00590630(0);
  uVar1 = FUN_0056bc10(0xd77b89b7,uVar1);
  FUN_005252d0(uVar2,0xd01e18c6,uVar1);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = FUN_005999f0(2);
  uVar1 = FUN_0056bc10(0x50ec3763,uVar1);
  FUN_005252d0(uVar2,0xd7e5d0cc,uVar1);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = FUN_005999f0(3);
  uVar1 = FUN_0056bc10(0xe8db4bf3,uVar1);
  FUN_005252d0(uVar2,0xd7e5d0cd,uVar1);
  uVar10 = 0;
  uVar1 = 0;
  uVar2 = FUN_00454640("rapsheet_summary_strings",0,0);
  FUN_0051e1a0(uVar2,uVar1,uVar10);
  local_4 = 0;
  if (local_1c != 0) {
    uVar3 = FUN_005113b0();
    iVar4 = FUN_00590430(1);
    iVar5 = FUN_00590430(0);
    uVar9 = 0;
    FUN_004546c0(local_30,0xb54d4a41);
    local_4._0_1_ = 1;
    iVar6 = FUN_00452d40();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00452bd0();
    local_34 = uVar3;
    if (iVar6 != 0) {
      do {
        puVar7 = (uint *)FUN_00454810(0xb54d4a41,uVar9);
        if (puVar7 == (uint *)0x0) {
          puVar7 = (uint *)FUN_006269b0(4);
        }
        local_34 = uVar9;
        if ((uint)(iVar4 + iVar5) <= *puVar7) break;
        uVar9 = uVar9 + 1;
        FUN_004546c0(local_30,0xb54d4a41);
        local_4._0_1_ = 1;
        uVar8 = FUN_00452d40();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00452bd0();
        local_34 = uVar3;
      } while (uVar9 < uVar8);
    }
    if (local_34 == 0) {
      local_34 = 1;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar1 = FUN_00573140("RAP_SUMMARY_%.2d",local_34);
    FUN_00525220(uVar2,0x90211462,uVar1);
  }
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return;
}

