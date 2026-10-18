/* speed.exe 006be080 FUN_006be080; analysis pseudocode, not buildable source.
 * calls 0045f490 FUN_0045f490
 * calls 0045f7c0 FUN_0045f7c0
 */

void FUN_006be080(undefined4 *param_1,int param_2)

{
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_0045f490(&local_30,param_2);
  FUN_0045f7c0(&local_40,&local_30,param_2 + 0x10);
  FUN_0045f490(&local_40,&local_40);
  FUN_0045f7c0(&local_20,&local_40,&local_30);
  *param_1 = local_30;
  param_1[2] = local_28;
  param_1[1] = local_2c;
  param_1[5] = local_1c;
  param_1[4] = local_20;
  param_1[7] = local_14;
  param_1[6] = local_18;
  param_1[9] = local_3c;
  param_1[8] = local_40;
  param_1[0xb] = local_34;
  param_1[10] = local_38;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f800000;
  return;
}

