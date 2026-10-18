/* speed.exe 006a5670 FUN_006a5670; analysis pseudocode, not buildable source.
 * calls 0045a760 FUN_0045a760
 * calls 006968a0 FUN_006968a0
 * calls 00455fd0 FUN_00455fd0
 */

int __thiscall FUN_006a5670(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087cb98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006968a0(param_2,0,0);
  local_4 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = FUN_00455fd0(0xb1669f64,0xeec2271a);
    FUN_0045a760(uVar1);
  }
  ExceptionList = local_c;
  return param_1;
}

