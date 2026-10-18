/* speed.exe 00626a10 FUN_00626a10; analysis pseudocode, not buildable source.
 * calls 00626a70 FUN_00626a70
 * calls 00452950 FUN_00452950
 */

undefined4 __thiscall FUN_00626a10(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087779f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00626a70(0xc,param_1);
  local_4 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00452950(param_2);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

