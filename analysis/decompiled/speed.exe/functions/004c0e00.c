/* speed.exe 004c0e00 FUN_004c0e00; analysis pseudocode, not buildable source.
 * calls 00665390 FUN_00665390
 * calls 004b0e60 FUN_004b0e60
 */

void FUN_004c0e00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_004b0e60(&param_1,param_2,param_1,0,0,&LAB_004b7d80,0,0,0,0);
  DAT_008f831c = DAT_008f831c + 1;
  FUN_00665390(param_3);
  return;
}

