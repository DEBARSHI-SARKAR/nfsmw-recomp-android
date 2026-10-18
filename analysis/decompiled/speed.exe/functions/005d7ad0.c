/* speed.exe 005d7ad0 FUN_005d7ad0; analysis pseudocode, not buildable source.
 * calls 005cf530 FUN_005cf530
 * calls 005d79b0 FUN_005d79b0
 * calls 005cf0d0 FUN_005cf0d0
 */

undefined4 FUN_005d7ad0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined **local_c;
  undefined1 local_8;
  undefined1 local_7;
  undefined4 local_4;
  
  if (DAT_0091dd89 == '\0') {
    FUN_005d79b0();
  }
  local_8 = 0;
  local_7 = 0;
  local_c = &PTR_LAB_008a34c4;
  local_4 = param_2;
  FUN_005cf530(&local_c);
  iVar1 = FUN_005cf0d0(0x53656374);
  iVar2 = *(int *)(param_1 + 0xc);
  if ((*(uint *)(param_1 + 4) & 2) != 0) {
    iVar2 = iVar2 * 0x10 + param_1;
  }
  if (iVar1 != ((*(uint *)(param_1 + 4) >> 5) + *(int *)(param_1 + 8)) * 0x10 + iVar2) {
    iVar2 = *(int *)(iVar1 + 0xc);
    if ((*(byte *)(iVar1 + 4) & 2) != 0) {
      iVar2 = iVar2 + iVar1;
    }
    return *(undefined4 *)(iVar2 + 0x7c);
  }
  return 0;
}

