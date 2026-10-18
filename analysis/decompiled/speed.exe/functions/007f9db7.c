/* speed.exe 007f9db7 FUN_007f9db7; analysis pseudocode, not buildable source.
 * calls 007eada0 FUN_007eada0
 * calls 007e9b30 FUN_007e9b30
 */

undefined4 * __thiscall FUN_007f9db7(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 local_c4 [4];
  undefined4 local_c0;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_74;
  
  param_1[2] = 3;
  param_1[3] = 3;
  param_1[4] = 0;
  *param_1 = 3;
  FUN_007e9b30();
  local_ac = param_2;
  local_a8 = param_3;
  local_c0 = 2;
  local_b0 = 0x6c;
  local_74 = 1;
  uVar1 = FUN_007eada0(local_c4,DAT_00909e5c);
  param_1[1] = uVar1;
  return param_1;
}

