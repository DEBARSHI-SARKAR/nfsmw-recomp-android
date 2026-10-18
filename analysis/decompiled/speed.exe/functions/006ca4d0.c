/* speed.exe 006ca4d0 FUN_006ca4d0; analysis pseudocode, not buildable source.
 * calls 006ca3d0 FUN_006ca3d0
 */

int __thiscall FUN_006ca4d0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + (param_3 + param_2 * 8) * 4);
  if (*piVar1 == 0) {
    return 0;
  }
  piVar2 = (int *)(param_1 + (param_3 + 0x10 + param_2 * 8) * 4);
  if (*piVar2 != 0) {
    (**(code **)(*(int *)*param_4 + 0x1c))((int *)*param_4);
    piVar2 = (int *)*piVar2;
    iVar3 = (**(code **)(*piVar2 + 0x20))(piVar2);
    if (iVar3 < 0) {
      FUN_006ca3d0("ERROR: Failed to stop force effect on channel %d\n",param_2);
      return iVar3;
    }
    *piVar1 = 0;
    return iVar3;
  }
  FUN_006ca3d0("ERROR: Trying to stop force effect on channel %d but we have an invalid effectid\n",
               param_2);
  return 0;
}

