/* speed.exe 0054dc90 FUN_0054dc90; analysis pseudocode, not buildable source.
 * calls 0056bc10 FUN_0056bc10
 * calls 00525220 FUN_00525220
 * calls 005252d0 FUN_005252d0
 * calls 00541830 FUN_00541830
 * calls 0083a670 FUN_0083a670
 * calls 0083abc0 FUN_0083abc0
 * calls 0083b210 FUN_0083b210
 */

void __fastcall FUN_0054dc90(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if (DAT_0091cacc == 0) {
    uVar2 = FUN_0056bc10(0xd4abf03d);
    FUN_005252d0(uVar1,0x42adb44c,uVar2);
    uVar1 = FUN_0083a670(*(undefined4 *)(*(int *)(param_1 + 0x148) + 0x20),"GAMEMODE",0);
    uVar1 = FUN_0083abc0(uVar1);
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
    uVar1 = FUN_0083a670(*(undefined4 *)(*(int *)(param_1 + 0x148) + 0x20),"RANKED",0);
    uVar1 = FUN_0083abc0(uVar1);
    *(undefined4 *)(param_1 + 0x40) = uVar1;
    uVar1 = FUN_0083a670(*(undefined4 *)(*(int *)(param_1 + 0x148) + 0x20),"NUMPLYS",0);
    uVar1 = FUN_0083abc0(uVar1);
    *(undefined4 *)(param_1 + 0x44) = uVar1;
    uVar1 = FUN_0083a670(*(undefined4 *)(*(int *)(param_1 + 0x148) + 0x20),"COLLON",0);
    uVar1 = FUN_0083abc0(uVar1);
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    uVar1 = FUN_0083a670(*(undefined4 *)(*(int *)(param_1 + 0x148) + 0x20),"CCLASS",1);
    uVar1 = FUN_0083abc0(uVar1);
    *(undefined4 *)(param_1 + 0x4c) = uVar1;
    uVar1 = FUN_0083a670(*(undefined4 *)(*(int *)(param_1 + 0x148) + 0x20),&PTR_DAT_008953c4,0);
    uVar1 = FUN_0083abc0(uVar1);
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    uVar1 = FUN_0083a670(*(undefined4 *)(*(int *)(param_1 + 0x148) + 0x20),"EVHASH",0);
    uVar1 = FUN_0083abc0(uVar1);
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    uVar1 = FUN_0083a670(*(undefined4 *)(*(int *)(param_1 + 0x148) + 0x20),"TRKDIR",0);
    uVar1 = FUN_0083abc0(uVar1);
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    uVar1 = FUN_0083a670(*(undefined4 *)(*(int *)(param_1 + 0x148) + 0x20),"NUMLAPS",0);
    uVar1 = FUN_0083abc0(uVar1);
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    uVar1 = FUN_0083a670(*(undefined4 *)(*(int *)(param_1 + 0x148) + 0x20),"PASSWORD",
                         param_1 + 0x120,0x20,"crusoe");
    FUN_0083b210(uVar1);
    uVar1 = FUN_0083a670(*(undefined4 *)(*(int *)(param_1 + 0x148) + 0x20),&DAT_0089e98c,0);
    uVar1 = FUN_0083abc0(uVar1);
    *(undefined4 *)(param_1 + 0x140) = uVar1;
    FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xcc8d0942,*(int *)(param_1 + 0x148) + 0xc);
  }
  else {
    if (*(char *)(DAT_0091cacc + 0x110) == '\x01') {
      uVar2 = 0xd4abf03d;
    }
    else {
      uVar2 = 0x79dfa0b9;
    }
    uVar2 = FUN_0056bc10(uVar2);
    FUN_005252d0(uVar1,0x42adb44c,uVar2);
    FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xcc8d0942,DAT_0091cacc + 0x2c);
  }
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x7248670a,0xfd143578);
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x7248670b,0x145890ee);
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x7248670c,0xc419592e);
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x7248670d,0x9c302c85);
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x7248670e,0xcfb4caa6);
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x7248670f,0x932538c3);
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x72486710,0x911d6309);
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x72486711,0x12f6a0b7);
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x72486712,0x883d13ca);
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x57ad6797,0xd157c200);
  if (DAT_0091cacc == 0) {
    FUN_00541830();
    return;
  }
  return;
}

