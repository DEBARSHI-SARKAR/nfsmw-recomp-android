/* speed.exe 004023c0 FUN_004023c0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

undefined4 * __thiscall FUN_004023c0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005cc240(param_2);
  *param_1 = uVar1;
  return param_1;
}

