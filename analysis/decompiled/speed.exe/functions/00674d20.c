/* speed.exe 00674d20 FUN_00674d20; analysis pseudocode, not buildable source.
 * calls 00670930 FUN_00670930
 * calls 00455fd0 FUN_00455fd0
 * calls 0045a760 FUN_0045a760
 */

int __thiscall FUN_00674d20(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087aa38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00670930(param_2,0,0);
  local_4 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = FUN_00455fd0(0x7c90bb38,0xeec2271a);
    FUN_0045a760(uVar1);
  }
  ExceptionList = local_c;
  return param_1;
}

