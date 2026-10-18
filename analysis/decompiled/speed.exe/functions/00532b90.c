/* speed.exe 00532b90 FUN_00532b90; analysis pseudocode, not buildable source.
 * calls 005905a0 FUN_005905a0
 * calls 0056db00 FUN_0056db00
 * calls 00586290 FUN_00586290
 * calls 0056bc10 FUN_0056bc10
 * calls 005999f0 FUN_005999f0
 * calls 00590550 FUN_00590550
 * calls 005906b0 FUN_005906b0
 * calls 00590630 FUN_00590630
 * calls 00590500 FUN_00590500
 * calls 005252d0 FUN_005252d0
 * calls 005905f0 FUN_005905f0
 */

undefined4 * __thiscall FUN_00532b90(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086f748;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  *param_1 = &PTR_FUN_0089b214;
  local_4 = 0;
  if (DAT_0091ca54 == 3) {
    uVar1 = param_1[4];
    uVar2 = FUN_0056db00();
    FUN_005252d0(uVar1,0x3cc94d6,&DAT_0089d398,uVar2);
  }
  else if (DAT_0091ca54 == 4) {
    uVar1 = param_1[4];
    uVar2 = FUN_0056bc10(0xe21d083c,*(int *)(DAT_0091cf90 + 0x10) + 0x314);
    FUN_005252d0(uVar1,0x1232703a,uVar2);
    uVar1 = param_1[4];
    uVar2 = FUN_0056db00();
    uVar2 = FUN_0056bc10(0x6031106e,uVar2);
    FUN_005252d0(uVar1,0xe3da78e7,uVar2);
    uVar1 = param_1[4];
    uVar2 = FUN_0056db00();
    uVar2 = FUN_0056bc10(0x6031106e,uVar2);
    FUN_005252d0(uVar1,0x22f33e0a,uVar2);
    uVar1 = param_1[4];
    uVar2 = FUN_00590500();
    uVar2 = FUN_0056bc10(0x364e4525,uVar2);
    FUN_005252d0(uVar1,0xe3da78e8,uVar2);
    uVar1 = param_1[4];
    uVar2 = FUN_005999f0(7);
    uVar2 = FUN_0056bc10(0xa355fedd,uVar2);
    FUN_005252d0(uVar1,0xe3da78e9,uVar2);
    uVar1 = param_1[4];
    uVar2 = FUN_005905f0();
    uVar2 = FUN_0056bc10(0xb1e58db1,uVar2);
    FUN_005252d0(uVar1,0xe3da78ea,uVar2);
    uVar1 = param_1[4];
    uVar2 = FUN_00590630(1);
    uVar2 = FUN_0056bc10(0x79fb7d16,uVar2);
    FUN_005252d0(uVar1,0xe3da78eb,uVar2);
    uVar1 = param_1[4];
    uVar2 = FUN_00590550();
    uVar2 = FUN_0056bc10(0x463b461b,uVar2);
    FUN_005252d0(uVar1,0xe3da78ec,uVar2);
    uVar1 = param_1[4];
    uVar2 = FUN_005905a0();
    uVar2 = FUN_0056bc10(0xc5094459,uVar2);
    FUN_005252d0(uVar1,0xe3da78ed,uVar2);
    uVar1 = param_1[4];
    uVar2 = FUN_005906b0();
    uVar2 = FUN_0056bc10(0x6dee0c7a,uVar2);
    FUN_005252d0(uVar1,0xe3da78ee,uVar2);
    ExceptionList = local_c;
    return param_1;
  }
  ExceptionList = local_c;
  return param_1;
}

