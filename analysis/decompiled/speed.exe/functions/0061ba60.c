/* speed.exe 0061ba60 FUN_0061ba60; analysis pseudocode, not buildable source.
 * calls 00618a40 FUN_00618a40
 * calls 00614e00 FUN_00614e00
 * calls 0060bf90 FUN_0060bf90
 * calls 00615230 FUN_00615230
 */

void FUN_0061ba60(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_00618a40();
  FUN_00614e00();
  iVar2 = FUN_00615230();
  *(undefined4 *)(iVar2 + 0xc) = param_2;
  puVar1 = *(undefined4 **)(unaff_ESI + 8);
  puVar1[1] = iVar2;
  *puVar1 = 6;
  *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + 8;
  if (unaff_EDI != 0) {
    FUN_0060bf90();
    *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + -0x18;
    return;
  }
  FUN_0060bf90();
  *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + -0x10;
  return;
}

