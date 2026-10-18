/* speed.exe 0081b341 FUN_0081b341; analysis pseudocode, not buildable source.
 * calls 0081e639 FUN_0081e639
 * calls 0081e6ae FUN_0081e6ae
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0081b341(float param_1)

{
  undefined1 local_d0 [48];
  float local_a0;
  
  if (_DAT_00890968 <= param_1) {
    param_1 = _DAT_00894200 / param_1;
  }
  FUN_0081e639(local_d0);
  local_a0 = param_1;
  FUN_0081e6ae(local_d0);
  return 0;
}

