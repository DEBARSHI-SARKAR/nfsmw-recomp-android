/* speed.exe 0081ed1c FUN_0081ed1c; analysis pseudocode, not buildable source.
 * calls 0081ec4d FUN_0081ec4d
 */

int FUN_0081ed1c(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  iVar1 = FUN_0081ec4d(param_2);
  if (-1 < iVar1) {
    iVar1 = 0;
  }
  return iVar1;
}

