/* speed.exe 00699ea0 FUN_00699ea0; analysis pseudocode, not buildable source.
 * calls 00696c90 FUN_00696c90
 */

void __thiscall
FUN_00699ea0(int param_1,float *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  float *pfVar1;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar1 = *(float **)(param_1 + 0x84);
  local_c = *param_2 + *pfVar1;
  local_8 = param_2[1] + pfVar1[1];
  local_4 = param_2[2] + pfVar1[2];
  FUN_00696c90(&local_c,param_3,param_4,1,param_5,param_6,param_7);
  return;
}

