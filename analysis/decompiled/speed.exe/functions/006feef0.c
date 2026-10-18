/* speed.exe 006feef0 FUN_006feef0; analysis pseudocode, not buildable source.
 * calls 00625e60 FUN_00625e60
 */

int __fastcall FUN_006feef0(int *param_1)

{
  int local_4;
  
  local_4 = (int)param_1;
  FUN_00625e60(&local_4);
  *param_1 = local_4;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0x10;
  return (int)param_1;
}

