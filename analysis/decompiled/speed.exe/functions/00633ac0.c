/* speed.exe 00633ac0 FUN_00633ac0; analysis pseudocode, not buildable source.
 * calls 00652ac0 _malloc
 * calls 00452950 FUN_00452950
 */

void * FUN_00633ac0(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00878a4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x18);
  local_4 = 0;
  pvVar2 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    FUN_00452950(param_1);
    *(undefined4 *)((int)pvVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)((int)pvVar1 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((int)pvVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    pvVar2 = pvVar1;
  }
  ExceptionList = local_c;
  return pvVar2;
}

