/* speed.exe 0061b040 FUN_0061b040; analysis pseudocode, not buildable source.
 * calls 00618970 FUN_00618970
 * calls 00618e90 FUN_00618e90
 * calls 00613f40 FUN_00613f40
 * calls 00614e00 FUN_00614e00
 * calls 0060bf90 FUN_0060bf90
 */

void FUN_0061b040(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_ESI;
  
  FUN_00618970();
  FUN_00614e00();
  iVar2 = FUN_00613f40();
  puVar1 = *(undefined4 **)(unaff_ESI + 8);
  *puVar1 = 7;
  puVar1[1] = iVar2;
  *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + 8;
  *(undefined4 *)(iVar2 + 0x10) = param_2;
  *(undefined4 *)(iVar2 + 0x14) = param_3;
  FUN_00618e90();
  FUN_0060bf90();
  *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + -0x18;
  return;
}

