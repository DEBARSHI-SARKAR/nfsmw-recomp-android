/* speed.exe 00658050 FUN_00658050; analysis pseudocode, not buildable source.
 * calls 0045f7c0 FUN_0045f7c0
 * calls 00657e00 FUN_00657e00
 * calls 006497b0 FUN_006497b0
 * calls 0045f490 FUN_0045f490
 */

float10 FUN_00658050(float *param_1,undefined4 param_2,float *param_3,undefined4 param_4,
                    undefined4 param_5)

{
  float fVar1;
  float10 fVar2;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  fVar2 = (float10)FUN_00657e00(param_1,param_2,param_4,param_5);
  fVar1 = (float)fVar2;
  FUN_006497b0(&local_40,fVar1,0);
  FUN_006497b0(&local_60,fVar1,1);
  local_30 = local_60;
  local_2c = local_5c;
  local_28 = local_58;
  local_58 = param_1[2] - local_38;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x3f800000;
  local_60 = *param_1 - local_40;
  local_5c = param_1[1] - local_3c;
  FUN_0045f7c0(&local_50,&local_20,&local_30);
  FUN_0045f490(&local_50,&local_50);
  if (param_3 != (float *)0x0) {
    *param_3 = fVar1;
  }
  return (float10)local_60 * (float10)local_50 +
         (float10)local_4c * (float10)local_5c + (float10)local_48 * (float10)local_58;
}

