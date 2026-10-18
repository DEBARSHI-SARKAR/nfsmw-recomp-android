/* speed.exe 006edb10 FUN_006edb10; analysis pseudocode, not buildable source.
 * calls 004b8640 FUN_004b8640
 * calls 0045a760 FUN_0045a760
 */

int __thiscall FUN_006edb10(int param_1,undefined4 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087e938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004b8640(*param_2,0,0);
  local_4 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    FUN_0045a760(DAT_00988e18);
  }
  ExceptionList = local_c;
  return param_1;
}

