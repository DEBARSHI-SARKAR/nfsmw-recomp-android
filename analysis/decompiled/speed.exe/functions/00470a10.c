/* speed.exe 00470a10 FUN_00470a10; analysis pseudocode, not buildable source.
 * calls 005029b0 FUN_005029b0
 * calls 00785270 FUN_00785270
 */

void __fastcall FUN_00470a10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00894bc8;
  FUN_00785270(param_1[9]);
  if ((param_1[3] == 2) || (param_1[3] == 6)) {
    DAT_009a3a70 = DAT_009a3a70 + -1;
  }
  if (param_1[5] != 0) {
    param_1[5] = 0;
    param_1[8] = *(undefined4 *)(param_1[7] + 0x2b0);
    FUN_005029b0(param_1);
  }
  return;
}

