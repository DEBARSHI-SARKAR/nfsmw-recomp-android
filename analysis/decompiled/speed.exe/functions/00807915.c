/* speed.exe 00807915 FUN_00807915; analysis pseudocode, not buildable source.
 * calls 008076a3 FUN_008076a3
 */

void FUN_00807915(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x74);
    iVar1 = *(int *)(param_1 + 0x254);
    uVar2 = *(undefined4 *)(param_1 + 0x274);
  }
  else {
    if (*(int *)(&DAT_0090a2d0 + iVar1 * 4) != 0) {
      FUN_008076a3(param_1,*(undefined4 *)(param_1 + 0x288),param_2);
      (*DAT_009c6a68)(*(undefined4 *)(param_1 + 0x288),*(undefined4 *)(param_1 + 0x274),
                      *(int *)(param_1 + 0x244) + *(int *)(param_1 + 0x70),
                      *(undefined4 *)(param_1 + 0x74));
      return;
    }
    uVar3 = *(undefined4 *)(param_1 + 0x74);
    uVar2 = *(undefined4 *)(param_1 + 0x274);
    if (iVar1 != 5) {
      (*DAT_009c6a6c)(*(undefined4 *)(param_1 + 0x288),
                      *(int *)(param_1 + 0x244) + *(int *)(param_1 + 0x70),uVar2,uVar3);
      return;
    }
    iVar1 = *(int *)(param_1 + 0x24c);
  }
  (*DAT_009c6a64)(*(undefined4 *)(param_1 + 0x288),
                  *(int *)(param_1 + 0x244) + *(int *)(param_1 + 0x70),
                  iVar1 + *(int *)(param_1 + 0x70),uVar2,uVar3);
  return;
}

