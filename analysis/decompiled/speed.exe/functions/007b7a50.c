/* speed.exe 007b7a50 FUN_007b7a50; analysis pseudocode, not buildable source.
 * calls 00573960 FUN_00573960
 * calls 007b7940 FUN_007b7940
 * calls 00652ad0 _malloc
 */

void FUN_007b7a50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008833f4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(100);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_007b7940(param_1,param_2,param_3);
  }
  local_4 = 0xffffffff;
  FUN_00573960(uVar2);
  ExceptionList = local_c;
  return;
}

