/* speed.exe 006f0150 FUN_006f0150; analysis pseudocode, not buildable source.
 * calls 00665390 FUN_00665390
 * calls 0056b4f0 FUN_0056b4f0
 */

void FUN_006f0150(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_0056b4f0(&param_1,param_2,param_3,param_1,0,&LAB_006ebda0,0,0,0,0);
  DAT_008f831c = DAT_008f831c + 1;
  FUN_00665390(param_4);
  return;
}

