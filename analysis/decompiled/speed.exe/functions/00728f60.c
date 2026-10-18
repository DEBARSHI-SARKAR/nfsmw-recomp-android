/* speed.exe 00728f60 FUN_00728f60; analysis pseudocode, not buildable source.
 * calls 00506af0 FUN_00506af0
 * calls 00466340 FUN_00466340
 * calls 00460bf0 FUN_00460bf0
 */

void FUN_00728f60(void)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0088051b;
  local_c = ExceptionList;
  if (DAT_009a3a6c == 0) {
    ExceptionList = &local_c;
    iVar1 = FUN_00466340(DAT_00915fb4);
    local_4 = 0;
    if (iVar1 == 0) {
      DAT_009a3a6c = 0;
    }
    else {
      uVar2 = FUN_00460bf0("MARKER_BOUNDARY");
      *(undefined4 *)(iVar1 + 8) = 0;
      *(undefined4 *)(iVar1 + 0xc) = 0;
      FUN_00506af0(uVar2);
      DAT_009a3a6c = iVar1;
    }
  }
  ExceptionList = local_c;
  return;
}

