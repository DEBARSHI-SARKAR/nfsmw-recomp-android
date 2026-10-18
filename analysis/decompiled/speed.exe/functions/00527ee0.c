/* speed.exe 00527ee0 FUN_00527ee0; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 00516af0 FUN_00516af0
 */

void FUN_00527ee0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_00516af0(param_1);
    if (iVar1 != 0) {
      iVar1 = FUN_005b8550(param_2);
      if (((iVar1 != 0) && (*(int *)(iVar1 + 0x18) == 1)) && (*(int *)(iVar1 + 0x24) != param_3)) {
        *(int *)(iVar1 + 0x24) = param_3;
        *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x2400000;
      }
    }
  }
  return;
}

