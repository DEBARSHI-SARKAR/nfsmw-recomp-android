/* speed.exe 006190f0 FUN_006190f0; analysis pseudocode, not buildable source.
 * calls 006069c0 FUN_006069c0
 * calls 00615000 FUN_00615000
 */

int FUN_006190f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  local_10 = param_2;
  local_4 = param_3;
  local_c = 0;
  local_8 = 0;
  iVar2 = FUN_006069c0(param_1,&LAB_00619050,&local_10);
  iVar1 = local_8;
  if (local_c != 0) {
    (*DAT_0091e0e4)(param_1,local_c,local_8,1);
    *(int *)(*(int *)(param_1 + 0x10) + 0x24) = *(int *)(*(int *)(param_1 + 0x10) + 0x24) - iVar1;
  }
  local_c = 0;
  local_8 = 0;
  if (iVar2 != 0) {
    FUN_00615000();
  }
  return iVar2;
}

