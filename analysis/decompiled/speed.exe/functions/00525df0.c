/* speed.exe 00525df0 FUN_00525df0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00517520 FUN_00517520
 */

void FUN_00525df0(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e984;
  local_c = ExceptionList;
  if (DAT_0091cb10 == 0) {
    ExceptionList = &local_c;
    pvVar1 = _malloc(0x148);
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      DAT_0091cb10 = FUN_00517520(0);
      ExceptionList = local_c;
      return;
    }
    DAT_0091cb10 = 0;
  }
  ExceptionList = local_c;
  return;
}

