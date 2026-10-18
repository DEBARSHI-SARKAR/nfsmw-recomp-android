/* speed.exe 0078fe30 FUN_0078fe30; analysis pseudocode, not buildable source.
 * calls 00835b40 FUN_00835b40
 * calls 00836260 FUN_00836260
 * calls 00836650 FUN_00836650
 */

undefined4 __thiscall FUN_0078fe30(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (*param_1 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_00835b40(*param_1);
  }
  if (iVar1 != param_2) {
    FUN_00836650(*param_1,param_2,0,0);
  }
  uStack_4 = (int *)((uint)uStack_4 & 0xffffff);
  if (param_2 == 2) {
    if (param_3 == 0) {
      param_3 = (int)&uStack_4 + 3;
    }
    iVar1 = FUN_00836260(*param_1,2,param_3,&LAB_0078b5e0,param_1);
    return CONCAT31((int3)((uint)-iVar1 >> 8),'\x01' - (iVar1 != 0));
  }
  if (param_3 == 0) {
    param_3 = (int)&uStack_4 + 3;
  }
  iVar1 = FUN_00836260(*param_1,param_2,param_3,&DAT_0078b4d0,param_1);
  return CONCAT31((int3)((uint)-iVar1 >> 8),'\x01' - (iVar1 != 0));
}

