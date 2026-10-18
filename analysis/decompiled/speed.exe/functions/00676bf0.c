/* speed.exe 00676bf0 FUN_00676bf0; analysis pseudocode, not buildable source.
 * calls 00676ac0 FUN_00676ac0
 */

void FUN_00676bf0(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  param_3[3] = param_1[3];
  param_3[4] = param_1[4];
  param_3[5] = param_1[5];
  FUN_00676ac0(param_1,0,(param_2 - (int)param_1) / 0x18,param_4,param_5,param_6,param_7,param_8,
               param_9,param_10);
  return;
}

