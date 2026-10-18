/* speed.exe 0063ff80 FUN_0063ff80; analysis pseudocode, not buildable source.
 */

int FUN_0063ff80(int param_1,int param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 - param_1 >> 2;
  while (iVar1 = iVar2, 0 < iVar1) {
    iVar2 = iVar1 / 2;
    if (*(float *)(param_1 + iVar2 * 4) < *param_3) {
      param_1 = param_1 + 4 + iVar2 * 4;
      iVar2 = iVar1 + (-1 - iVar2);
    }
  }
  return param_1;
}

