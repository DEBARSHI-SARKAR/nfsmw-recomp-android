/* speed.exe 004b5020 FUN_004b5020; analysis pseudocode, not buildable source.
 * calls 004b1340 FUN_004b1340
 * calls 004b4f00 FUN_004b4f00
 */

void __fastcall FUN_004b5020(int param_1)

{
  FUN_004b4f00();
  FUN_004b1340(param_1);
  *(undefined4 *)(param_1 + 0x284) = 0x40900000;
  return;
}

