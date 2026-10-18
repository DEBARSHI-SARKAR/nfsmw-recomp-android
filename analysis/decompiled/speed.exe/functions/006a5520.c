/* speed.exe 006a5520 FUN_006a5520; analysis pseudocode, not buildable source.
 * calls 0045a760 FUN_0045a760
 * calls 00696690 FUN_00696690
 * calls 00455fd0 FUN_00455fd0
 */

int __thiscall FUN_006a5520(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087cb38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00696690(param_2,0,0);
  local_4 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = FUN_00455fd0(0xf1f5fbc7,0xeec2271a);
    FUN_0045a760(uVar1);
  }
  ExceptionList = local_c;
  return param_1;
}

