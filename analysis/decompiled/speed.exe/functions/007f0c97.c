/* speed.exe 007f0c97 FUN_007f0c97; analysis pseudocode, not buildable source.
 * calls 007f0c44 FUN_007f0c44
 */

int FUN_007f0c97(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_007f0c44(param_1,param_2);
  if (iVar1 != 0) {
    iVar2 = iVar1 + param_1;
  }
  return iVar2;
}

