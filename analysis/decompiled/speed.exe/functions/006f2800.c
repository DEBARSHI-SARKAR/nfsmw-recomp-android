/* speed.exe 006f2800 FUN_006f2800; analysis pseudocode, not buildable source.
 * calls 006e83a0 FUN_006e83a0
 * calls 006eee80 FUN_006eee80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f2800(float param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (_DAT_00890968 < param_1) {
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    FUN_006e83a0(param_1);
    FUN_006eee80(&local_c);
  }
  return;
}

