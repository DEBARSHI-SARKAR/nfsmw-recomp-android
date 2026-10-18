/* speed.exe 00706260 FUN_00706260; analysis pseudocode, not buildable source.
 * calls 00665390 FUN_00665390
 * calls 00469b10 FUN_00469b10
 */

void FUN_00706260(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00469b10(&param_1,param_2,param_1,0,0,&LAB_00703690,0,0,0,0);
  DAT_008f831c = DAT_008f831c + 1;
  FUN_00665390(param_3);
  return;
}

