/* speed.exe 005117c0 FUN_005117c0; analysis pseudocode, not buildable source.
 * calls 00511740 FUN_00511740
 */

int __fastcall FUN_005117c0(int *param_1)

{
  int local_4;
  
  local_4 = (int)param_1;
  FUN_00511740(&local_4);
  *param_1 = local_4;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0x10;
  return (int)param_1;
}

