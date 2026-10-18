/* speed.exe 00571320 FUN_00571320; analysis pseudocode, not buildable source.
 * calls 00561130 FUN_00561130
 * calls 00652ad0 _malloc
 */

undefined4 FUN_00571320(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008719f4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(400);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_00561130(param_1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

