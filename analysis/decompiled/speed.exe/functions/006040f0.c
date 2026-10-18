/* speed.exe 006040f0 FUN_006040f0; analysis pseudocode, not buildable source.
 * calls 00452430 FUN_00452430
 * calls 004546a0 FUN_004546a0
 */

undefined4 FUN_006040f0(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  if (in_EAX == unaff_ESI) {
    return 1;
  }
  if (in_EAX == 0) {
    if (unaff_ESI != 0) {
      return 0;
    }
  }
  else if (unaff_ESI == 0) {
    return 0;
  }
  if ((*(byte *)(in_EAX + 0x14) & 1) != 0) {
    iVar1 = FUN_004546a0();
    iVar2 = FUN_00452430();
    if (iVar1 == iVar2) {
      return 1;
    }
  }
  if ((*(byte *)(unaff_ESI + 0x14) & 1) != 0) {
    iVar1 = FUN_00452430();
    iVar2 = FUN_004546a0();
    if (iVar2 == iVar1) {
      return 1;
    }
  }
  return 0;
}

