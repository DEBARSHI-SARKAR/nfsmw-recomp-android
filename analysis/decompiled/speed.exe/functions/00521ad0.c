/* speed.exe 00521ad0 FUN_00521ad0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 0056e4d0 FUN_0056e4d0
 * calls 005889f0 FUN_005889f0
 * calls 005219b0 FUN_005219b0
 * calls 005a5ea0 FUN_005a5ea0
 */

void __fastcall FUN_00521ad0(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e7a4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x1a4);
  uVar2 = 0;
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_0056e4d0();
    uVar2 = FUN_005219b0(uVar2);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x128) = uVar2;
  FUN_005889f0(uVar2);
  FUN_005a5ea0(1);
  ExceptionList = local_c;
  return;
}

