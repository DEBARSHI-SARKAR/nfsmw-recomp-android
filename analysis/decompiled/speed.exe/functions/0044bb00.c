/* speed.exe 0044bb00 FUN_0044bb00; analysis pseudocode, not buildable source.
 * calls 004a8710 FUN_004a8710
 * calls 00448f20 FUN_00448f20
 */

undefined4 __thiscall FUN_0044bb00(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_8 = 0;
  iVar1 = FUN_00448f20(param_2,&local_4,&local_8);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_004a8710(local_8);
    *(int **)(param_1 + 0x44 + param_3 * 4) = piVar2;
    (**(code **)(*piVar2 + 0x10))(param_1 + 0x60);
    if (*(int *)(param_1 + 0x44 + param_3 * 4) != 0) {
      *(undefined4 *)(param_1 + 0x70) = 1;
    }
    *(undefined4 *)(param_1 + 0x70) = 1;
    return 1;
  }
  return 0;
}

