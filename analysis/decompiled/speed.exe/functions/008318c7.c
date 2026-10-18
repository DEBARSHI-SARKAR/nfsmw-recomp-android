/* speed.exe 008318c7 FUN_008318c7; analysis pseudocode, not buildable source.
 * calls 008314e4 FUN_008314e4
 * calls 0081962e FUN_0081962e
 */

int FUN_008318c7(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_008314e4(param_1,0);
  if (-1 < iVar1) {
    iVar1 = *param_1;
    FUN_0081962e(param_2);
    (**(code **)(param_2 + 8))(iVar1 + 4,*(undefined4 *)(param_2 + 0xc));
    iVar1 = 0;
  }
  return iVar1;
}

