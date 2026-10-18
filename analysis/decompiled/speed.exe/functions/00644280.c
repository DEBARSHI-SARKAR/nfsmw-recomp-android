/* speed.exe 00644280 FUN_00644280; analysis pseudocode, not buildable source.
 * calls 00634090 FUN_00634090
 * calls 00643950 FUN_00643950
 */

void __thiscall FUN_00644280(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_00634090(param_2,1,0);
    }
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = FUN_00643950(param_3);
    *(int *)(param_1 + 8) = iVar2;
    if (iVar2 == 0) {
      uVar3 = FUN_00643950(*(undefined4 *)(iVar1 + 4));
      *(undefined4 *)(param_1 + 8) = uVar3;
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar1 + 4);
      return;
    }
    *(undefined4 *)(param_1 + 0x20) = param_3;
  }
  return;
}

