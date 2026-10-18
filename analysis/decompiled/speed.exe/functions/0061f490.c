/* speed.exe 0061f490 FUN_0061f490; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 0061d250 FUN_0061d250
 * calls 0061f3b0 FUN_0061f3b0
 */

void FUN_0061f490(undefined4 param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00876a54;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x78);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    DAT_0091e0c8 = 0;
  }
  else {
    DAT_0091e0c8 = FUN_0061f3b0(param_1);
  }
  FUN_0061d250(pvVar1);
  ExceptionList = local_c;
  return;
}

