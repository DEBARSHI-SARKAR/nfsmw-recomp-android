/* speed.exe 00527d40 FUN_00527d40; analysis pseudocode, not buildable source.
 * calls 0051a040 FUN_0051a040
 */

int FUN_00527d40(void)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086ea1e;
  local_c = ExceptionList;
  if ((DAT_0091ccac & 1) == 0) {
    DAT_0091ccac = DAT_0091ccac | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    iVar1 = FUN_0051a040(1);
    DAT_0091cca8 = iVar1 * 10;
    ExceptionList = local_c;
    return iVar1 * 10;
  }
  return DAT_0091cca8;
}

