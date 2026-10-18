/* speed.exe 00544a30 FUN_00544a30; analysis pseudocode, not buildable source.
 * calls 005445b0 FUN_005445b0
 * calls 00652ad0 _malloc
 */

void FUN_00544a30(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086fde4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0xf0);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005445b0(param_1);
  }
  *(undefined4 *)(*(int *)(DAT_0091cb20 + 0xcc) + 0x78) = uVar2;
  ExceptionList = local_c;
  return;
}

