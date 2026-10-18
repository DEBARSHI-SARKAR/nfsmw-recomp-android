/* speed.exe 0041d220 FUN_0041d220; analysis pseudocode, not buildable source.
 * calls 00665390 FUN_00665390
 * calls 00407140 FUN_00407140
 */

void FUN_0041d220(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_00407140(&param_1,param_2,param_3,param_1,0,&LAB_0040ec80,0,0,0,0);
  DAT_008f831c = DAT_008f831c + 1;
  FUN_00665390(param_4);
  return;
}

