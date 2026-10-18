/* speed.exe 0061adf0 FUN_0061adf0; analysis pseudocode, not buildable source.
 * calls 00618970 FUN_00618970
 * calls 00613f40 FUN_00613f40
 * calls 00614e00 FUN_00614e00
 * calls 0060bf90 FUN_0060bf90
 */

void FUN_0061adf0(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  
  FUN_00614e00();
  iVar3 = FUN_00613f40();
  puVar1 = *(undefined4 **)(unaff_ESI + 8);
  *puVar1 = 7;
  puVar1[1] = iVar3;
  *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + 8;
  *(undefined4 *)(iVar3 + 0x10) = param_1;
  FUN_00618970();
  iVar2 = *(int *)(unaff_ESI + 8);
  iVar3 = iVar2 + -8;
  if (*(int *)(iVar2 + -8) == 0) {
    iVar3 = *(int *)(unaff_ESI + 0x10) + 0x34;
  }
  if (*(int *)(iVar2 + -0x10) == 5) {
    *(undefined4 *)(*(int *)(iVar2 + -0xc) + 8) = *(undefined4 *)(iVar3 + 4);
  }
  else if (*(int *)(iVar2 + -0x10) == 7) {
    *(undefined4 *)(*(int *)(iVar2 + -0xc) + 8) = *(undefined4 *)(iVar3 + 4);
  }
  *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + -8;
  FUN_0060bf90();
  *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + -0x10;
  return;
}

