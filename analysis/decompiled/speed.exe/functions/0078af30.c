/* speed.exe 0078af30 FUN_0078af30; analysis pseudocode, not buildable source.
 * calls 00465a70 FUN_00465a70
 */

void FUN_0078af30(int param_1)

{
  DAT_00905e14 = DAT_00905e14 + 1;
  if (0x3e800 < param_1) {
    FUN_00465a70(param_1,0);
    return;
  }
  FUN_00465a70(param_1,8);
  return;
}

