/* speed.exe 004545f0 FUN_004545f0; analysis pseudocode, not buildable source.
 * calls 00659260 FUN_00659260
 */

void FUN_004545f0(int param_1,int param_2)

{
  DAT_0090dcd4 = DAT_0090dcd4 - param_2;
  if (DAT_0090dcd0 < DAT_0090dcd4) {
    DAT_0090dcd0 = DAT_0090dcd4;
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(param_1,param_2,0);
  }
  return;
}

