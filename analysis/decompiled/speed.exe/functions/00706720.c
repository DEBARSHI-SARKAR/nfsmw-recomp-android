/* speed.exe 00706720 FUN_00706720; analysis pseudocode, not buildable source.
 * calls 00405600 FUN_00405600
 * calls 00665390 FUN_00665390
 */

void FUN_00706720(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_00405600(&param_1,param_2,param_3,param_1,0,&LAB_00703740,0,0,0,0);
  DAT_008f831c = DAT_008f831c + 1;
  FUN_00665390(param_4);
  return;
}

