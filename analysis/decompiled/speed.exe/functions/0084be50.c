/* speed.exe 0084be50 FUN_0084be50; analysis pseudocode, not buildable source.
 */

void FUN_0084be50(int param_1,int param_2)

{
  int iVar1;
  
  if (((param_1 != 0) && (param_2 != 0)) && (iVar1 = 0, 0 < DAT_009c3864)) {
    while (((&DAT_009c3740)[iVar1 * 2] != param_1 || ((&DAT_009c3744)[iVar1 * 2] != param_2))) {
      iVar1 = iVar1 + 1;
      if (DAT_009c3864 <= iVar1) {
        return;
      }
    }
    (&DAT_009c3740)[iVar1 * 2] = 0;
    (&DAT_009c3744)[iVar1 * 2] = 0;
  }
  return;
}

