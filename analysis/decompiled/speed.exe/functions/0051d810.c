/* speed.exe 0051d810 FUN_0051d810; analysis pseudocode, not buildable source.
 * calls 00586fa0 FUN_00586fa0
 */

undefined4 * __thiscall
FUN_0051d810(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00586fa0(param_2,param_3,param_4);
  *param_1 = &PTR_FUN_0089c264;
  *(undefined1 *)((int)param_1 + 0x45) = 1;
  return param_1;
}

