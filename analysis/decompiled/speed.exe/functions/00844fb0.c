/* speed.exe 00844fb0 FUN_00844fb0; analysis pseudocode, not buildable source.
 */

void FUN_00844fb0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (((*(int *)(param_1 + 0x1834) != 0) &&
      (iVar1 = *(int *)(param_1 + 0x1834) + param_2 * 0x14, *(int *)(param_1 + 0x10) != 0)) &&
     (*(int *)(iVar1 + 8) != 0)) {
    local_10 = param_2;
    local_c = param_4;
    local_18 = 0;
    local_14 = 2;
    local_8 = *(undefined4 *)(iVar1 + 4);
    local_4 = param_3;
    (**(code **)(iVar1 + 8))(param_1,&local_18,*(undefined4 *)(iVar1 + 0xc));
  }
  return;
}

