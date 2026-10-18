/* speed.exe 005dd2a0 FUN_005dd2a0; analysis pseudocode, not buildable source.
 * calls 00460c50 FUN_00460c50
 * calls 00460bf0 FUN_00460bf0
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 */

undefined4 FUN_005dd2a0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar2 = (int *)FUN_00454810(0xbeab64c5,0);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_006269b0(4);
  }
  iVar1 = *piVar2;
  if (iVar1 != 0) {
    iVar3 = FUN_00460c50(iVar1);
    if (iVar3 != 0) {
      uVar4 = FUN_00460bf0(iVar1);
      return uVar4;
    }
  }
  return 0;
}

