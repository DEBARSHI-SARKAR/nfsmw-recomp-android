/* speed.exe 007f1f22 FUN_007f1f22; analysis pseudocode, not buildable source.
 * calls 007f3292 FUN_007f3292
 * calls 007f3367 FUN_007f3367
 * calls 007f326c FUN_007f326c
 * calls 007f0fe0 FUN_007f0fe0
 * calls 007f1daa FUN_007f1daa
 */

undefined4 * __thiscall FUN_007f1f22(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_007f326c(2,param_2);
  *param_1 = &PTR_FUN_008c2280;
  FUN_007f3292(param_3,&DAT_008c817c);
  FUN_007f3367();
  FUN_007f0fe0(param_1 + 0x8d,0,0x14);
  FUN_007f1daa(param_1);
  return param_1;
}

