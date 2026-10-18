/* speed.exe 006e9700 FUN_006e9700; analysis pseudocode, not buildable source.
 * calls 00467c30 FUN_00467c30
 * calls 006e9660 FUN_006e9660
 * calls 00452920 FUN_00452920
 */

undefined4 __thiscall FUN_006e9700(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == DAT_00988e84) {
    FUN_00467c30(DAT_00988e84,0,0);
    return param_2;
  }
  iVar1 = FUN_00452920(*(int *)(param_1 + 4));
  if (iVar1 != 0) {
    FUN_006e9660(iVar1);
    return param_2;
  }
  FUN_00467c30(DAT_00988e84,0,0);
  return param_2;
}

