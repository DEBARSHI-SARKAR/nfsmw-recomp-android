/* speed.exe 00834d89 FUN_00834d89; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_00834d89(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  LOCK();
  uVar1 = *param_1;
  *param_1 = param_2;
  UNLOCK();
  return uVar1;
}

