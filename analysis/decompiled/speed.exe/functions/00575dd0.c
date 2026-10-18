/* speed.exe 00575dd0 FUN_00575dd0; analysis pseudocode, not buildable source.
 * calls 00514d10 FUN_00514d10
 */

void __fastcall FUN_00575dd0(int param_1)

{
  if (*(char *)(param_1 + 0xf0) != '\0') {
    FUN_00514d10(*(undefined4 *)(param_1 + 0x2c),0x7ab5521a,1);
    FUN_00514d10(*(undefined4 *)(param_1 + 0x5c),0x1744b3,1);
    return;
  }
  FUN_00514d10(*(undefined4 *)(param_1 + 0x2c),0x163c76,1);
  FUN_00514d10(*(undefined4 *)(param_1 + 0x5c),0x163c76,1);
  return;
}

