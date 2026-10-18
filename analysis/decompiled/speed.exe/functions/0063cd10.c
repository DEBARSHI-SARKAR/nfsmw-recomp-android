/* speed.exe 0063cd10 FUN_0063cd10; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 00634b50 FUN_00634b50
 */

undefined4 FUN_0063cd10(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00879662;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_005d29d0(0x1858,0);
  local_4 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00634b50(param_1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

