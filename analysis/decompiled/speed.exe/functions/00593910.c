/* speed.exe 00593910 thunk_FUN_005931b0; analysis pseudocode, not buildable source.
 */

void __fastcall thunk_FUN_005931b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_0045d3a0(0);
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(param_1 + 0x1c) + iVar3;
      iVar1 = FUN_0045d3a0(0);
      if ((iVar2 < iVar1) && (iVar1 = FUN_0045d380(iVar2), iVar1 != 0)) {
        iVar1 = iVar1 + -4;
      }
      else {
        iVar1 = 0;
      }
      iVar2 = FUN_0045d3a0(0);
      if (((iVar3 < iVar2) && (iVar2 = FUN_0045d380(iVar3), iVar2 != 0)) &&
         ((int *)(iVar2 + -4) != (int *)0x0)) {
        (**(code **)(*(int *)(iVar2 + -4) + 4))
                  (iVar1,CONCAT31((int3)((uint)*(int *)(param_1 + 0x18) >> 8),
                                  *(int *)(param_1 + 0x18) == iVar1));
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_0045d3a0(0);
    } while (iVar3 < iVar1);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00525220(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x28),
                 *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x10));
  }
  return;
}

