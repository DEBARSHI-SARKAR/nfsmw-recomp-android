/* speed.exe 00807239 FUN_00807239; analysis pseudocode, not buildable source.
 * calls 00806f9d FUN_00806f9d
 */

undefined4 FUN_00807239(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00806f9d(param_1 + 0x150);
  iVar2 = FUN_00806f9d(param_1 + 0x150);
  iVar2 = iVar2 + iVar1 * 2;
  if (iVar2 == 0) {
    return 0;
  }
  if (iVar2 == 1) {
    uVar3 = 2;
  }
  else if (iVar2 == 2) {
    uVar3 = 3;
  }
  else {
    if (iVar2 != 3) {
      return 0;
    }
    uVar3 = 4;
  }
  return uVar3;
}

