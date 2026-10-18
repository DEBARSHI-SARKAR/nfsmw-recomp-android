/* speed.exe 005145d0 FUN_005145d0; analysis pseudocode, not buildable source.
 * calls 00589870 FUN_00589870
 */

void __fastcall FUN_005145d0(int param_1)

{
  *(undefined4 *)(param_1 + 0x340) = 1;
  *(undefined4 *)(param_1 + 0x33c) = 1;
  FUN_00589870(10,*(undefined4 *)(param_1 + 0x348),1,1);
  return;
}

