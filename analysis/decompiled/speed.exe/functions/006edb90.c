/* speed.exe 006edb90 FUN_006edb90; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_006edb90(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_00445660,param_1);
  if (param_1 != (undefined4 *)0xfffffff8) {
    DAT_009885c8 = param_1;
    *param_1 = &PTR_FUN_008b0518;
    return param_1;
  }
  DAT_009885c8 = (undefined4 *)0x0;
  ppuRamfffffff8 = &PTR_FUN_008b0518;
  return (undefined4 *)0xfffffff8;
}

