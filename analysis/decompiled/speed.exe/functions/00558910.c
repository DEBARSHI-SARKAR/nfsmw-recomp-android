/* speed.exe 00558910 FUN_00558910; analysis pseudocode, not buildable source.
 * calls 007935b0 FUN_007935b0
 * calls 00541c30 FUN_00541c30
 * calls 0054dfa0 FUN_0054dfa0
 * calls 00793620 FUN_00793620
 * calls 00589870 FUN_00589870
 * calls 0056e340 FUN_0056e340
 * calls 005252d0 FUN_005252d0
 * calls 0083b8a0 FUN_0083b8a0
 * calls 00799f50 FUN_00799f50
 * calls 005584d0 FUN_005584d0
 */

undefined4 __fastcall FUN_00558910(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00799f50();
  uVar1 = FUN_00793620(*(undefined4 *)(param_1 + 0x38),0);
  *(undefined4 *)(param_1 + 0x348) = uVar1;
  *(undefined4 *)(param_1 + 0x33c) = 1;
  *(undefined4 *)(param_1 + 0x340) = 1;
  FUN_00541c30();
  if (*(int *)(param_1 + 0x38) != -1) {
    FUN_00589870(5,9,*(int *)(param_1 + 0x3c) + 1,*(int *)(param_1 + 0x350) + -2);
    iVar2 = FUN_007935b0(*(undefined4 *)(param_1 + 0x38),1,0);
    local_4 = 0;
    local_8 = 0;
    local_c = 0;
    local_10 = 0;
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    if (iVar2 == 0) {
      FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x502caa6d,&DAT_0089c328);
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      uVar3 = FUN_0056e340();
      FUN_005252d0(uVar1,0x68be9ca9,uVar3);
    }
    else {
      FUN_0083b8a0(iVar2 + 0x1c,&local_1c,0x1c,&DAT_0089b350);
      FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x502caa6d,&DAT_0089d764,
                   *(undefined4 *)(iVar2 + 4));
      FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x68be9ca9,iVar2 + 0xc);
    }
    FUN_0054dfa0(&local_1c,0xb,0);
    FUN_00589870(10,*(undefined4 *)(param_1 + 0x348),*(undefined4 *)(param_1 + 0x33c),
                 *(undefined4 *)(param_1 + 0x340));
    FUN_005584d0();
  }
  return 0;
}

