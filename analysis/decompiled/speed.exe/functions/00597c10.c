/* speed.exe 00597c10 FUN_00597c10; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 0058e9c0 FUN_0058e9c0
 */

void FUN_00597c10(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872d04;
  local_c = ExceptionList;
  if (DAT_0091cf48 == 0) {
    ExceptionList = &local_c;
    pvVar1 = _malloc(0x10);
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      DAT_0091cf48 = FUN_0058e9c0(pvVar1);
      ExceptionList = local_c;
      return;
    }
    DAT_0091cf48 = 0;
  }
  ExceptionList = local_c;
  return;
}

