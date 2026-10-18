/* speed.exe 00753250 FUN_00753250; analysis pseudocode, not buildable source.
 * calls 00504d20 FUN_00504d20
 * calls 004fb420 FUN_004fb420
 * calls 00752b60 FUN_00752b60
 */

void FUN_00753250(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_c80 [3200];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (*(int *)(iVar1 + 0xc) != 0) {
    param_3 = FUN_004fb420(param_2,param_3);
  }
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar1 != 0) {
    *(undefined4 *)(param_2 + param_3 * 4) = *(undefined4 *)(iVar1 + 0x3c);
    param_3 = param_3 + 1;
  }
  uVar2 = FUN_00752b60(local_c80,800);
  FUN_00504d20(local_c80,uVar2,param_2,param_3);
  return;
}

