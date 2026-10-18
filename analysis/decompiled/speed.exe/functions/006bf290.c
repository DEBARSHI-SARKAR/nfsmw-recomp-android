/* speed.exe 006bf290 FUN_006bf290; analysis pseudocode, not buildable source.
 * calls 00652ac0 _malloc
 * calls 00770d70 FUN_00770d70
 */

void FUN_006bf290(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087e28b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(400);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    DAT_009b392c = FUN_00770d70(pvVar1);
    ExceptionList = local_c;
    return;
  }
  DAT_009b392c = 0;
  ExceptionList = local_c;
  return;
}

