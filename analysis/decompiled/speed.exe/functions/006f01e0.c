/* speed.exe 006f01e0 FUN_006f01e0; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

undefined4 FUN_006f01e0(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_005d59f0(&LAB_00620fe0);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

