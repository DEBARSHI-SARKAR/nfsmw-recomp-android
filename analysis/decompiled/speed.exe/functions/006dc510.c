/* speed.exe 006dc510 FUN_006dc510; analysis pseudocode, not buildable source.
 * calls 00652ac0 _malloc
 * calls 006dc430 FUN_006dc430
 */

void FUN_006dc510(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087e4cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0xc);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    DAT_00982d10 = FUN_006dc430(pvVar1);
    ExceptionList = local_c;
    return;
  }
  DAT_00982d10 = 0;
  ExceptionList = local_c;
  return;
}

