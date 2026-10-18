/* speed.exe 0078a510 FUN_0078a510; analysis pseudocode, not buildable source.
 * calls 0078a310 FUN_0078a310
 */

void FUN_0078a510(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      FUN_0078a310(*(undefined1 *)(iVar1 + param_1),8);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

