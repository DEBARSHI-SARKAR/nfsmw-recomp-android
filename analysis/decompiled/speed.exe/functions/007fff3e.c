/* speed.exe 007fff3e FUN_007fff3e; analysis pseudocode, not buildable source.
 * calls 008076a3 FUN_008076a3
 */

void FUN_007fff3e(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar2 = *(undefined4 **)(param_1 + 0x274);
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x74);
    iVar1 = *(int *)(param_1 + 0x254);
    uVar3 = *(undefined4 *)(param_1 + 0x274);
  }
  else {
    if (*(int *)(&DAT_0090a2d0 + iVar1 * 4) != 0) {
      FUN_008076a3(param_1,*(undefined4 *)(param_1 + 0x288),param_2);
      (*DAT_009c6a68)(*(undefined4 *)(param_1 + 0x288),*(undefined4 *)(param_1 + 0x274),
                      *(int *)(param_1 + 0x25c) + *(int *)(param_1 + 0x70),
                      *(undefined4 *)(param_1 + 0x74));
      return;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x74);
    uVar3 = *(undefined4 *)(param_1 + 0x274);
    if (iVar1 != 5) {
      (*DAT_009c6a6c)(*(undefined4 *)(param_1 + 0x288),
                      *(int *)(param_1 + 0x25c) + *(int *)(param_1 + 0x70),uVar3,uVar4);
      return;
    }
    iVar1 = *(int *)(param_1 + 0x24c);
  }
  (*DAT_009c6a64)(*(undefined4 *)(param_1 + 0x288),
                  *(int *)(param_1 + 0x25c) + *(int *)(param_1 + 0x70),
                  iVar1 + *(int *)(param_1 + 0x70),uVar3,uVar4);
  return;
}

