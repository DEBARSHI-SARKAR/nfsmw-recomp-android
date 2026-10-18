/* speed.exe 006ca440 FUN_006ca440; analysis pseudocode, not buildable source.
 * calls 006ca3d0 FUN_006ca3d0
 */

int __thiscall FUN_006ca440(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  
  iVar3 = param_3 + 0x10 + param_2 * 8;
  if (*(int *)(param_1 + iVar3 * 4) == 0) {
    FUN_006ca3d0("ERROR: Trying to start force effect on channel %d but we have an invalid effectid\n"
                 ,param_2);
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(*(int *)*param_4 + 0x1c))((int *)*param_4);
    if (-1 < iVar2) {
      piVar1 = *(int **)(param_1 + iVar3 * 4);
      iVar3 = (**(code **)(*piVar1 + 0x1c))(piVar1,1,0);
      if (iVar3 < 0) {
        FUN_006ca3d0("ERROR: Failed to start force effect on channel %d\n",param_2);
        return iVar3;
      }
      *(undefined4 *)(param_1 + (unaff_EBP + param_2 * 8) * 4) = 1;
      return iVar3;
    }
  }
  return iVar2;
}

