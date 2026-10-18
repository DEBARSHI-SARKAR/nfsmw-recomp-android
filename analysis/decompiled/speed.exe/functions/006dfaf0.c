/* speed.exe 006dfaf0 FUN_006dfaf0; analysis pseudocode, not buildable source.
 * calls 006dc350 FUN_006dc350
 * calls 00652ad0 _malloc
 */

void FUN_006dfaf0(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087e514;
  local_c = ExceptionList;
  if (DAT_00982af0 == 0) {
    ExceptionList = &local_c;
    pvVar1 = _malloc(0x240);
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      DAT_00982af0 = FUN_006dc350(pvVar1);
      ExceptionList = local_c;
      return;
    }
    DAT_00982af0 = 0;
  }
  ExceptionList = local_c;
  return;
}

