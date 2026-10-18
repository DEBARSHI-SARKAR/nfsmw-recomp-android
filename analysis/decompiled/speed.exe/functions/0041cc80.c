/* speed.exe 0041cc80 FUN_0041cc80; analysis pseudocode, not buildable source.
 * calls 00665390 FUN_00665390
 * calls 00405750 FUN_00405750
 */

void FUN_0041cc80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_00405750(&param_1,param_2,param_3,param_1,0,&LAB_0040ec00,0,0,0,0);
  DAT_008f831c = DAT_008f831c + 1;
  FUN_00665390(param_4);
  return;
}

