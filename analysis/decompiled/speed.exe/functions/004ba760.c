/* speed.exe 004ba760 FUN_004ba760; analysis pseudocode, not buildable source.
 * calls 0045d380 FUN_0045d380
 */

undefined4 FUN_004ba760(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0045d380(param_2);
  return *(undefined4 *)(iVar1 + 8);
}

