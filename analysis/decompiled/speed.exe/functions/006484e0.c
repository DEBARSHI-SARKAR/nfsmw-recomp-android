/* speed.exe 006484e0 FUN_006484e0; analysis pseudocode, not buildable source.
 * calls 006482d0 FUN_006482d0
 * calls 00652ad0 _malloc
 */

void FUN_006484e0(undefined4 param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00879f74;
  local_c = ExceptionList;
  if (DAT_009203b0 == 0) {
    ExceptionList = &local_c;
    pvVar1 = _malloc(0x2c);
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      DAT_009203b0 = FUN_006482d0(param_1);
      ExceptionList = local_c;
      return;
    }
    DAT_009203b0 = 0;
  }
  ExceptionList = local_c;
  return;
}

