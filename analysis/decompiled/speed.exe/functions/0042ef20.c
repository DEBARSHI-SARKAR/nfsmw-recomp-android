/* speed.exe 0042ef20 FUN_0042ef20; analysis pseudocode, not buildable source.
 * calls 0042ede0 FUN_0042ede0
 * calls 005d29d0 FUN_005d29d0
 */

undefined4 FUN_0042ef20(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00868392;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_005d29d0(0xb0,0);
  local_4 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_0042ede0(param_1,0);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

