/* speed.exe 0051f940 FUN_0051f940; analysis pseudocode, not buildable source.
 * calls 005b8390 FUN_005b8390
 * calls 005b2d50 FUN_005b2d50
 */

void __thiscall FUN_0051f940(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x40) = param_2;
  if (iVar1 == 1) {
    param_4 = 0xffabda4d;
    param_3 = -0x5257adb9;
  }
  else if (iVar1 == 4) {
    param_4 = 0xffffffff;
    param_3 = -0x253c9b17;
  }
  else if (iVar1 == 0x20) {
    param_4 = 0xffffed00;
    param_3 = 0x123f07e2;
  }
  if (param_2 != 0) {
    uVar3 = 0;
    uVar2 = FUN_005b2d50(param_4);
    FUN_005b8390(uVar2,uVar3);
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x24) != param_3)) {
    *(int *)(iVar1 + 0x24) = param_3;
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x2400000;
  }
  return;
}

