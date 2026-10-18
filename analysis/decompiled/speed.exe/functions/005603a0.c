/* speed.exe 005603a0 FUN_005603a0; analysis pseudocode, not buildable source.
 * calls 00541c30 FUN_00541c30
 * calls 00589870 FUN_00589870
 * calls 005584d0 FUN_005584d0
 * calls 00541f70 FUN_00541f70
 */

void __thiscall FUN_005603a0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x350) + param_2;
  *(int *)(param_1 + 0x350) = iVar1;
  if (9 < iVar1) {
    *(undefined4 *)(param_1 + 0x350) = 9;
  }
  if (*(int *)(param_1 + 0x350) < 0) {
    *(undefined4 *)(param_1 + 0x350) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x40) + param_2;
  *(int *)(param_1 + 0x40) = iVar1;
  if (5 < iVar1) {
    iVar1 = *(int *)(param_1 + 0x3c) + param_2;
    *(int *)(param_1 + 0x3c) = iVar1;
    if (4 < iVar1) {
      *(undefined4 *)(param_1 + 0x3c) = 4;
    }
    *(undefined4 *)(param_1 + 0x40) = 5;
  }
  if ((*(int *)(param_1 + 0x40) < 2) && (1 < *(int *)(param_1 + 0x350))) {
    param_2 = *(int *)(param_1 + 0x3c) + param_2;
    *(undefined4 *)(param_1 + 0x40) = 2;
    *(int *)(param_1 + 0x3c) = param_2;
    if (param_2 < 0) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
  }
  if (*(int *)(param_1 + 0x40) < 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  FUN_00541f70(*(undefined4 *)(param_1 + 0x40));
  FUN_00541c30();
  FUN_005584d0();
  FUN_00589870(5,9,*(int *)(param_1 + 0x3c) + 1,*(int *)(param_1 + 0x350) + -2);
  return;
}

