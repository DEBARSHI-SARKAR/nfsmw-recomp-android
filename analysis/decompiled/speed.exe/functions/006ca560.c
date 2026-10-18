/* speed.exe 006ca560 FUN_006ca560; analysis pseudocode, not buildable source.
 * calls 006ca3d0 FUN_006ca3d0
 */

int __thiscall FUN_006ca560(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int unaff_retaddr;
  
  iVar3 = param_3 + 0x10 + param_2 * 8;
  puVar1 = (undefined4 *)(param_1 + iVar3 * 4);
  if (*(int *)(param_1 + iVar3 * 4) == 0) {
    FUN_006ca3d0("ERROR: Trying to unload force effect on channel %d but we have an invalid effectid\n"
                 ,param_2);
    return 0;
  }
  (**(code **)(*(int *)*param_4 + 0x1c))((int *)*param_4);
  piVar2 = (int *)*puVar1;
  iVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2);
  if (iVar3 < 0) {
    FUN_006ca3d0("ERROR: Failed to unload force effect on channel %d\n",param_2);
    return iVar3;
  }
  *puVar1 = 0;
  *(undefined4 *)(param_1 + (unaff_retaddr + param_2 * 8) * 4) = 0;
  return iVar3;
}

