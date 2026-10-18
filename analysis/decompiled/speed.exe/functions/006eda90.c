/* speed.exe 006eda90 FUN_006eda90; analysis pseudocode, not buildable source.
 * calls 00454640 FUN_00454640
 * calls 004b8640 FUN_004b8640
 * calls 0045a760 FUN_0045a760
 */

int __thiscall FUN_006eda90(int param_1,int param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087e918;
  local_c = ExceptionList;
  if (param_2 == 0) {
    uVar1 = 0x90a4d09a;
    ExceptionList = &local_c;
  }
  else {
    ExceptionList = &local_c;
    uVar1 = FUN_00454640(param_2);
  }
  FUN_004b8640(uVar1,0,0);
  local_4 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    FUN_0045a760(DAT_00988e18);
  }
  ExceptionList = local_c;
  return param_1;
}

