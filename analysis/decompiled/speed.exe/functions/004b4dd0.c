/* speed.exe 004b4dd0 FUN_004b4dd0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

void __fastcall FUN_004b4dd0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_007c4b80();
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  uVar1 = FUN_007c4b80();
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  uVar1 = FUN_007c4b80();
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = FUN_007c4b80();
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  return;
}

