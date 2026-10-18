/* speed.exe 0078bce0 FUN_0078bce0; analysis pseudocode, not buildable source.
 * calls 00460f20 FUN_00460f20
 * calls 00460ca0 FUN_00460ca0
 */

undefined * __thiscall FUN_0078bce0(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 == (int *)0x0) {
    param_2 = (int *)(param_1 + 0x1c);
  }
  if (*param_2 != -1) {
    iVar1 = FUN_00460f20(param_2 + 10,0x2e);
    if (iVar1 != 0) {
      FUN_00460ca0(&DAT_009b4be0,iVar1 + 1,0x20);
      return &DAT_009b4be0;
    }
  }
  return (undefined *)0x0;
}

