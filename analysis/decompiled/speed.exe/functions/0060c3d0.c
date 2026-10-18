/* speed.exe 0060c3d0 FUN_0060c3d0; analysis pseudocode, not buildable source.
 * calls 00605a60 FUN_00605a60
 * calls 00607ee0 FUN_00607ee0
 * calls 007c4b80 FUN_007c4b80
 */

int FUN_0060c3d0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  undefined1 local_8 [8];
  
  piVar1 = (int *)(*(int *)(unaff_EDI + 8) + -8);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 3)) {
    FUN_00607ee0(piVar1,local_8);
  }
  iVar2 = FUN_007c4b80();
  if ((iVar2 == 0) &&
     ((piVar1 = (int *)(*(int *)(unaff_EDI + 8) + -8), piVar1 == (int *)0x0 ||
      ((*piVar1 != 3 && (iVar3 = FUN_00607ee0(piVar1,local_8), iVar3 == 0)))))) {
    iVar2 = -1;
  }
  FUN_00605a60();
  return iVar2;
}

