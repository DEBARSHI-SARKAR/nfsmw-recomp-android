/* speed.exe 008317bc FUN_008317bc; analysis pseudocode, not buildable source.
 * calls 0081962e FUN_0081962e
 * calls 008313f3 FUN_008313f3
 */

int FUN_008317bc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_008313f3(param_1,0);
  if (-1 < iVar1) {
    FUN_0081962e(param_2);
    iVar1 = 0;
  }
  return iVar1;
}

