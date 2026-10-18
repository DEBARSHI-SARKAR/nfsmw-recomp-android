/* speed.exe 00469b90 FUN_00469b90; analysis pseudocode, not buildable source.
 * calls 00469b10 FUN_00469b10
 */

int __thiscall
FUN_00469b90(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11,int param_12,int param_13,int param_14
            ,int param_15)

{
  int local_4;
  
  local_4 = (int)param_1;
  FUN_00469b10(&local_4);
  *param_1 = local_4;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  param_1[5] = param_3;
  param_1[6] = param_4;
  param_1[7] = param_5;
  param_1[8] = param_6;
  param_1[9] = param_7;
  param_1[10] = param_8;
  param_1[0xb] = param_9;
  param_1[0xc] = param_10;
  param_1[0xd] = param_11;
  param_1[0xe] = param_12;
  param_1[0xf] = param_13;
  param_1[0x11] = param_15;
  param_1[2] = 0x48;
  param_1[0x10] = param_14;
  return (int)param_1;
}

