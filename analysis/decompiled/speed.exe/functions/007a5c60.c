/* speed.exe 007a5c60 FUN_007a5c60; analysis pseudocode, not buildable source.
 * calls 00514c70 FUN_00514c70
 * calls 00574450 FUN_00574450
 */

void __fastcall FUN_007a5c60(int param_1)

{
  FUN_00574450();
  FUN_00514c70(*(undefined4 *)(param_1 + 0x50));
  FUN_00514c70(*(undefined4 *)(param_1 + 0x4c));
  return;
}

