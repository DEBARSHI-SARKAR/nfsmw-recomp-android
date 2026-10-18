/* speed.exe 00468960 FUN_00468960; analysis pseudocode, not buildable source.
 * calls 006bd980 FUN_006bd980
 * calls 006bd940 FUN_006bd940
 * calls 0045f490 FUN_0045f490
 */

void FUN_00468960(undefined4 param_1,float *param_2,float *param_3,undefined4 param_4)

{
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_50 [76];
  
  local_70 = *param_3 - *param_2;
  local_6c = param_3[1] - param_2[1];
  local_68 = param_3[2] - param_2[2];
  FUN_0045f490(&local_70,&local_70);
  FUN_006bd980(local_50,&local_70,param_4);
  local_60 = 0;
  local_5c = 0;
  local_58 = 0x3f800000;
  FUN_006bd940(param_1,local_50,&local_60);
  return;
}

