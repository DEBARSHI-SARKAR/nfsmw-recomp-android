/* speed.exe 00516b50 FUN_00516b50; analysis pseudocode, not buildable source.
 * calls 005b5b70 FUN_005b5b70
 * calls 00591d90 FUN_00591d90
 * calls 00572070 FUN_00572070
 */

bool FUN_00516b50(undefined4 param_1)

{
  int iVar1;
  
  if (0 < DAT_0091d218) {
    FUN_00572070(param_1);
    iVar1 = FUN_00591d90(param_1);
    return iVar1 != 0;
  }
  iVar1 = FUN_005b5b70(param_1);
  return iVar1 != 0;
}

