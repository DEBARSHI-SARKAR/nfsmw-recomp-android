/* speed.exe 0061c680 FUN_0061c680; analysis pseudocode, not buildable source.
 * calls 00616730 FUN_00616730
 * calls 00615180 FUN_00615180
 * calls 0061c3f0 FUN_0061c3f0
 */

int FUN_0061c680(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  int local_8 [2];
  
  local_10 = param_2;
  local_c = param_3;
  iVar1 = FUN_0061c3f0(param_1,&LAB_006086b0,&local_10,param_4);
  if (iVar1 == 0) {
    local_8[0] = *(int *)(param_1 + 8) + -8;
    local_8[1] = 0xffffffff;
    iVar1 = FUN_00615180(param_1,&LAB_00613090,local_8,local_8[0] - *(int *)(param_1 + 0x1c),0);
  }
  FUN_00616730();
  return iVar1;
}

