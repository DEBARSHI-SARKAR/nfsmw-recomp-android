/* speed.exe 005c81c0 FUN_005c81c0; analysis pseudocode, not buildable source.
 * calls 007ca1b0 __isnan
 */

bool FUN_005c81c0(float param_1)

{
  int iVar1;
  
  iVar1 = __isnan((double)param_1);
  return iVar1 != 0;
}

