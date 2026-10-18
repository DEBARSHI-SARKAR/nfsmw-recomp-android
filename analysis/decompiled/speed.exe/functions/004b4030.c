/* speed.exe 004b4030 FUN_004b4030; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

void __fastcall FUN_004b4030(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xd0) = 0x7fff;
  iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 0x38);
  if ((iVar1 == 3) || (iVar1 != 0)) {
    iVar1 = FUN_007c4b80();
    *(int *)(param_1 + 0xd0) = 0x7fff - iVar1;
  }
  iVar1 = FUN_007c4b80();
  *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + iVar1;
  return;
}

