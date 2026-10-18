/* speed.exe 00603a40 FUN_00603a40; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 006039c0 FUN_006039c0
 */

void FUN_00603a40(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00876344;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x40);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    DAT_0091e004 = FUN_006039c0(pvVar1);
    ExceptionList = local_c;
    return;
  }
  DAT_0091e004 = 0;
  ExceptionList = local_c;
  return;
}

