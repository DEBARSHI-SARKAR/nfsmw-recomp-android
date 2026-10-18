/* speed.exe 006a53d0 FUN_006a53d0; analysis pseudocode, not buildable source.
 * calls 0045a760 FUN_0045a760
 * calls 00696480 FUN_00696480
 * calls 00455fd0 FUN_00455fd0
 */

int __thiscall FUN_006a53d0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087cad8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00696480(param_2,0,0);
  local_4 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = FUN_00455fd0(0xbd38d1ca,0xeec2271a);
    FUN_0045a760(uVar1);
  }
  ExceptionList = local_c;
  return param_1;
}

