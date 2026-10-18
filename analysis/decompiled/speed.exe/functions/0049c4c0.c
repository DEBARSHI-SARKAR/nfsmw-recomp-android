/* speed.exe 0049c4c0 FUN_0049c4c0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

int FUN_0049c4c0(float param_1,float param_2,float param_3)

{
  int iVar1;
  
  if (param_1 < param_2) {
    iVar1 = FUN_007c4b80();
    return iVar1;
  }
  if (param_3 <= param_1) {
    iVar1 = FUN_007c4b80();
    return iVar1 + 1;
  }
  return 0;
}

