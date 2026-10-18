/* speed.exe 0081f3ef FUN_0081f3ef; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0081f3ef(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      if ((short)(&DAT_009c225c)[iVar1] == param_1) {
        return 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

