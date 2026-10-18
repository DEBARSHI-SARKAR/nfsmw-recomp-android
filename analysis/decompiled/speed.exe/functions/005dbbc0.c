/* speed.exe 005dbbc0 FUN_005dbbc0; analysis pseudocode, not buildable source.
 * calls 005dbb40 FUN_005dbb40
 */

int __fastcall FUN_005dbbc0(int *param_1)

{
  int local_4;
  
  local_4 = (int)param_1;
  FUN_005dbb40(&local_4);
  *param_1 = local_4;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0x10;
  return (int)param_1;
}

