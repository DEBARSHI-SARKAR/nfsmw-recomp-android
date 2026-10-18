/* speed.exe 007868f0 FUN_007868f0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 007814b0 FUN_007814b0
 */

void __fastcall FUN_007868f0(undefined4 *param_1)

{
  undefined4 *local_4;
  
  *param_1 = &PTR_FUN_008b5d9c;
  local_4 = param_1;
  FUN_007814b0(&local_4,*(undefined4 *)param_1[2],(undefined4 *)param_1[2]);
  if (param_1[2] != 0) {
    FUN_005d0370(param_1[2],0x18,0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

