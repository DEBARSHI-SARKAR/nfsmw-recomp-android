/* speed.exe 0082b4a0 FUN_0082b4a0; analysis pseudocode, not buildable source.
 * calls 0081cd54 FUN_0081cd54
 * calls 0081c4b0 FUN_0081c4b0
 */

void __thiscall
FUN_0082b4a0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((*(int *)(param_1 + 0x10c) == 0) || (*(int *)(param_1 + 0x110) <= param_3 * 0x80)) {
    iVar2 = FUN_0081c4b0(*(undefined4 *)(param_1 + 4),param_5,param_1 + 0x7c,param_3 << 7);
  }
  else {
    iVar2 = FUN_0081cd54(*(undefined4 *)(param_1 + 4),param_5,*(int *)(param_1 + 0x10c),
                         param_3 * 0x80);
  }
  if (-1 < iVar2) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x18);
    iVar5 = *(int *)(param_1 + 0x18) + -1;
    if (0 < iVar5) {
      iVar3 = *(int *)(param_1 + 0x108);
      iVar4 = iVar5 * 0x14;
      do {
        puVar1 = (undefined4 *)(iVar4 + iVar3);
        *puVar1 = puVar1[-5];
        puVar1[1] = puVar1[-4];
        puVar1[2] = puVar1[-3];
        puVar1[3] = puVar1[-2];
        puVar1[4] = puVar1[-1];
        iVar3 = *(int *)(param_1 + 0x108);
        if (*(int *)(iVar4 + 4 + iVar3) < 0) {
          *(int *)(param_1 + 0x1c) = iVar5 + -1;
        }
        iVar5 = iVar5 + -1;
        iVar4 = iVar4 + -0x14;
      } while (0 < iVar5);
    }
    *(int *)(*(int *)(param_1 + 0x108) + 4) = iVar2;
    **(undefined4 **)(param_1 + 0x108) = param_6;
    *(undefined4 *)(*(int *)(param_1 + 0x108) + 0xc) = param_2;
    *(undefined4 *)(*(int *)(param_1 + 0x108) + 0x10) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 1;
  return;
}

