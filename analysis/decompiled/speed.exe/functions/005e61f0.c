/* speed.exe 005e61f0 FUN_005e61f0; analysis pseudocode, not buildable source.
 * calls 0051a040 FUN_0051a040
 */

int FUN_005e61f0(void)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008752fe;
  local_c = ExceptionList;
  if ((DAT_0091e0a8 & 1) == 0) {
    DAT_0091e0a8 = DAT_0091e0a8 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    iVar1 = FUN_0051a040(2);
    DAT_0091e0a4 = iVar1 * 10;
    ExceptionList = local_c;
    return iVar1 * 10;
  }
  return DAT_0091e0a4;
}

