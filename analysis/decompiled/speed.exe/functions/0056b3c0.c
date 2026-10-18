/* speed.exe 0056b3c0 FUN_0056b3c0; analysis pseudocode, not buildable source.
 * calls 0056b340 FUN_0056b340
 */

int __fastcall FUN_0056b3c0(int *param_1)

{
  int local_4;
  
  local_4 = (int)param_1;
  FUN_0056b340(&local_4);
  *param_1 = local_4;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0x10;
  return (int)param_1;
}

