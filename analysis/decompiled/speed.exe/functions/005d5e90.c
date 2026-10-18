/* speed.exe 005d5e90 FUN_005d5e90; analysis pseudocode, not buildable source.
 * calls 005d5180 FUN_005d5180
 */

void FUN_005d5e90(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 - param_1;
  while (1 < iVar1 >> 2) {
    FUN_005d5180(param_1,param_2,0);
    param_2 = param_2 + -4;
    iVar1 = param_2 - param_1;
  }
  return;
}

