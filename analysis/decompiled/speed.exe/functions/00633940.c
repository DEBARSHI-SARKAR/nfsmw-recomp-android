/* speed.exe 00633940 FUN_00633940; analysis pseudocode, not buildable source.
 * calls 00652ac0 _malloc
 * calls 00452950 FUN_00452950
 */

void * FUN_00633940(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008789cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x10);
  local_4 = 0;
  pvVar2 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    FUN_00452950(param_1);
    *(undefined1 *)((int)pvVar1 + 0xc) = *(undefined1 *)(param_1 + 0xc);
    pvVar2 = pvVar1;
  }
  ExceptionList = local_c;
  return pvVar2;
}

