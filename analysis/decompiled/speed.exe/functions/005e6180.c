/* speed.exe 005e6180 FUN_005e6180; analysis pseudocode, not buildable source.
 * calls 0051a040 FUN_0051a040
 */

int FUN_005e6180(void)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008752de;
  local_c = ExceptionList;
  if ((DAT_0091e0a0 & 1) == 0) {
    DAT_0091e0a0 = DAT_0091e0a0 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    iVar1 = FUN_0051a040(1);
    DAT_0091e09c = iVar1 * 10;
    ExceptionList = local_c;
    return iVar1 * 10;
  }
  return DAT_0091e09c;
}

