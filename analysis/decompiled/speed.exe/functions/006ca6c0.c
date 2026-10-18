/* speed.exe 006ca6c0 FUN_006ca6c0; analysis pseudocode, not buildable source.
 * calls 006ca3d0 FUN_006ca3d0
 */

uint FUN_006ca6c0(int *param_1)

{
  int *piVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int iStack_4;
  
  piVar1 = (int *)*param_1;
  local_14 = 0x14;
  local_10 = 0x10;
  local_c = 0;
  local_8 = 0;
  if (piVar1 != (int *)0x0) {
    param_1 = (int *)(**(code **)(*piVar1 + 0x14))(piVar1,7,&local_14);
  }
  if (-1 < (int)param_1) {
    return (uint)(iStack_4 * 100) / 10000;
  }
  FUN_006ca3d0("ERROR: Failed to get overall force gain\n");
  return 0xffffffff;
}

