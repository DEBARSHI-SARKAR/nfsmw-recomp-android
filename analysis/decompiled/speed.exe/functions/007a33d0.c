/* speed.exe 007a33d0 FUN_007a33d0; analysis pseudocode, not buildable source.
 * calls 00503360 FUN_00503360
 */

void __fastcall FUN_007a33d0(undefined4 *param_1)

{
  int local_4;
  
  local_4 = param_1[4];
  *param_1 = &PTR_LAB_008b72b4;
  if (local_4 != 0) {
    FUN_00503360(&local_4,1);
    param_1[4] = 0;
  }
  return;
}

