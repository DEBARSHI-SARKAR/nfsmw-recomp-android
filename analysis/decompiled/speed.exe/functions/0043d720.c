/* speed.exe 0043d720 FUN_0043d720; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 0043bab0 FUN_0043bab0
 */

undefined4 FUN_0043d720(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008693df;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_005d29d0(0x18,0);
  local_4 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_0043bab0(param_1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

