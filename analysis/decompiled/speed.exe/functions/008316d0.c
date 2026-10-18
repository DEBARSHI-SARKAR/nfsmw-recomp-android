/* speed.exe 008316d0 FUN_008316d0; analysis pseudocode, not buildable source.
 * calls 0081962e FUN_0081962e
 * calls 00831304 FUN_00831304
 */

int FUN_008316d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00831304(param_1,0);
  if (-1 < iVar1) {
    FUN_0081962e(param_2);
    iVar1 = 0;
  }
  return iVar1;
}

