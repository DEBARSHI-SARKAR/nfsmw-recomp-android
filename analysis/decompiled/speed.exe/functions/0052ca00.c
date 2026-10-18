/* speed.exe 0052ca00 FUN_0052ca00; analysis pseudocode, not buildable source.
 * calls 005905a0 FUN_005905a0
 * calls 0056db00 FUN_0056db00
 * calls 0056bc10 FUN_0056bc10
 * calls 005999f0 FUN_005999f0
 * calls 00590550 FUN_00590550
 * calls 005906b0 FUN_005906b0
 * calls 00590630 FUN_00590630
 * calls 00590500 FUN_00590500
 * calls 005252d0 FUN_005252d0
 * calls 005905f0 FUN_005905f0
 */

void __fastcall FUN_0052ca00(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_0056bc10(0xe21d083c,*(int *)(DAT_0091cf90 + 0x10) + 0x314);
  FUN_005252d0(uVar1,0x1232703a,uVar2);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_0056db00();
  uVar2 = FUN_0056bc10(0x6031106e,uVar2);
  FUN_005252d0(uVar1,0xe3da78e7,uVar2);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_00590500();
  uVar2 = FUN_0056bc10(0x364e4525,uVar2);
  FUN_005252d0(uVar1,0xe3da78e8,uVar2);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_005999f0(7);
  uVar2 = FUN_0056bc10(0xa355fedd,uVar2);
  FUN_005252d0(uVar1,0xe3da78e9,uVar2);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_005905f0();
  uVar2 = FUN_0056bc10(0xb1e58db1,uVar2);
  FUN_005252d0(uVar1,0xe3da78ea,uVar2);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_00590630(1);
  uVar2 = FUN_0056bc10(0x79fb7d16,uVar2);
  FUN_005252d0(uVar1,0xe3da78eb,uVar2);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_00590550();
  uVar2 = FUN_0056bc10(0x463b461b,uVar2);
  FUN_005252d0(uVar1,0xe3da78ec,uVar2);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_005905a0();
  uVar2 = FUN_0056bc10(0xc5094459,uVar2);
  FUN_005252d0(uVar1,0xe3da78ed,uVar2);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_005906b0();
  uVar2 = FUN_0056bc10(0x6dee0c7a,uVar2);
  FUN_005252d0(uVar1,0xe3da78ee,uVar2);
  return;
}

