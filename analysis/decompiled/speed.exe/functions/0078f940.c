/* speed.exe 0078f940 FUN_0078f940; analysis pseudocode, not buildable source.
 * calls 0078a3a0 FUN_0078a3a0
 */

int FUN_0078f940(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2;
  iVar2 = 0;
  if (0 < param_2) {
    do {
      param_2 = 0;
      FUN_0078a3a0(&param_2,8);
      *(undefined1 *)(iVar2 + param_1) = (undefined1)param_2;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return iVar1;
}

