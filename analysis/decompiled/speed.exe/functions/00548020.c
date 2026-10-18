/* speed.exe 00548020 FUN_00548020; analysis pseudocode, not buildable source.
 * calls 00601020 FUN_00601020
 * calls 0052f910 FUN_0052f910
 * calls 005e3980 FUN_005e3980
 * calls 004647e0 FUN_004647e0
 * calls 00590500 FUN_00590500
 * calls 005fab40 FUN_005fab40
 * calls 005252d0 FUN_005252d0
 * calls 005fb710 FUN_005fb710
 * calls 00516be0 FUN_00516be0
 * calls 005af1c0 FUN_005af1c0
 * calls 0056bc10 FUN_0056bc10
 * calls 005dca70 FUN_005dca70
 * calls 005dcf60 thunk_FUN_005d97a0
 */

void __fastcall FUN_00548020(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 local_40 [64];
  
  FUN_005e3980(DAT_0091ca3c);
  uVar2 = thunk_FUN_005d97a0();
  if (uVar2 < 5) {
    if (uVar2 == 4) {
      uVar4 = *(undefined4 *)(param_1 + 0x10);
      uVar7 = 0x9a1d3a40;
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x10);
      if (uVar2 == 3) {
        uVar7 = 0x4d22fd7f;
      }
      else {
        uVar7 = 0x28c0be;
      }
    }
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    uVar7 = 0xe7177701;
  }
  FUN_00516be0(uVar7,uVar4,0xfffffffc,0xff);
  uVar2 = 0;
  iVar3 = thunk_FUN_005d97a0();
  if (iVar3 != 0) {
    do {
      uVar4 = FUN_00601020(uVar2);
      uVar4 = FUN_005fb710(uVar4);
      if (*(int *)(param_1 + 0x30) == 0) {
        *(undefined4 *)(param_1 + 0x30) = uVar4;
      }
      uVar7 = FUN_005fab40();
      cVar1 = FUN_005dca70(uVar7,2);
      if (cVar1 != '\0') {
        FUN_004647e0(local_40,0x40,"CROSSOUT_%d",uVar2 + 1);
        uVar7 = *(undefined4 *)(param_1 + 0x10);
        uVar5 = FUN_005af1c0(local_40);
        FUN_00516be0(uVar5,uVar7,0xfffffffc,0xff);
      }
      uVar2 = uVar2 + 1;
      FUN_0052f910(uVar2,uVar4);
      uVar6 = thunk_FUN_005d97a0();
    } while (uVar2 < uVar6);
  }
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar7 = FUN_00590500();
  uVar7 = FUN_0056bc10(0xce6b99b1,uVar7);
  FUN_005252d0(uVar4,0xb514e2d8,"%s %$d",uVar7);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar7 = FUN_0056bc10(0x73b79e0,*(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb4));
  FUN_005252d0(uVar4,0xf91a59f6,"%s %$d",uVar7);
  return;
}

