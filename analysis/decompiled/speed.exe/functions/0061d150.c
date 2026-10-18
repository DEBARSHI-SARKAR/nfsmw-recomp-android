/* speed.exe 0061d150 FUN_0061d150; analysis pseudocode, not buildable source.
 * calls 00618e90 FUN_00618e90
 * calls 00618a40 FUN_00618a40
 * calls 00614e00 FUN_00614e00
 * calls 0060bf90 FUN_0060bf90
 */

void FUN_0061d150(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_00618a40();
  FUN_00614e00();
  puVar1 = *(undefined4 **)(unaff_ESI + 8);
  *puVar1 = 2;
  puVar1[1] = param_2;
  *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + 8;
  FUN_00618e90();
  if (unaff_EDI != 0) {
    FUN_0060bf90();
    *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + -0x18;
    return;
  }
  FUN_0060bf90();
  *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + -0x10;
  return;
}

