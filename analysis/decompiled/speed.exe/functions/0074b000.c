/* speed.exe 0074b000 FUN_0074b000; analysis pseudocode, not buildable source.
 * calls 00727480 FUN_00727480
 */

int FUN_0074b000(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float fStack_18;
  
  iVar1 = *(int *)(param_1 + 0x44);
  if ((((iVar1 == param_1 + 0x44) || (iVar1 == 0)) || ((int *)(iVar1 + -4) == (int *)0x0)) ||
     (iVar1 = (**(code **)(*(int *)(iVar1 + -4) + 0x10))(), iVar1 == 0)) {
    return 0;
  }
  uStack_28 = *(undefined4 *)(iVar1 + 0x20);
  fStack_18 = *(float *)(iVar1 + 0x28);
  uStack_24 = *(undefined4 *)(iVar1 + 0x24);
  iVar2 = 0;
  iVar1 = FUN_00727480(&uStack_28,3,0);
  if ((iVar1 != 0) && (fStack_18 < *(float *)(iVar1 + 0x14))) {
    iVar2 = 1;
  }
  if (param_2 == 0) {
    return iVar2;
  }
  iVar1 = FUN_00727480(&uStack_28,4,0);
  if (((iVar1 == 0) || (*(float *)(iVar1 + 0x14) <= fStack_18)) &&
     ((iVar1 = FUN_00727480(&uStack_28,5,0), iVar1 == 0 || (*(float *)(iVar1 + 0x14) <= fStack_18)))
     ) {
    iVar1 = FUN_00727480(&uStack_28,7,0);
    if (iVar1 == 0) {
      return iVar2;
    }
    if (*(float *)(iVar1 + 0x14) <= fStack_18) {
      return iVar2;
    }
  }
  return iVar2 + 2;
}

