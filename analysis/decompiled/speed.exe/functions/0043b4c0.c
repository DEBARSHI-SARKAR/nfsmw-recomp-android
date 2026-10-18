/* speed.exe 0043b4c0 FUN_0043b4c0; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 0043b340 FUN_0043b340
 */

undefined4 FUN_0043b4c0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00868f52;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_005d29d0(0x8c0,0);
  local_4 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_0043b340(param_1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

