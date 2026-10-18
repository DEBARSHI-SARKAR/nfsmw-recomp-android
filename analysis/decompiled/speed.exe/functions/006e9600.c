/* speed.exe 006e9600 FUN_006e9600; analysis pseudocode, not buildable source.
 * calls 006e8070 FUN_006e8070
 * calls 0045a760 FUN_0045a760
 */

int __thiscall FUN_006e9600(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087e7c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006e8070(param_2,0,0);
  local_4 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    FUN_0045a760(DAT_00988e18);
  }
  ExceptionList = local_c;
  return param_1;
}

