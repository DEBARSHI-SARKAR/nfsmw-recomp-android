/* speed.exe 00752940 FUN_00752940; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 * calls 0074d0d0 FUN_0074d0d0
 * calls 00460c20 FUN_00460c20
 * calls 00751540 FUN_00751540
 */

int __thiscall FUN_00752940(int param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_3 == '\0') {
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 8);
    uVar1 = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x10);
    uVar1 = *(undefined4 *)(param_2 + 0x14);
  }
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  puVar3 = *(undefined4 **)(param_2 + 0x150);
  if (puVar3 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 8) = 2;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x10) = 2;
    return param_1;
  }
  *(undefined4 **)(param_1 + 0x1c) = puVar3;
  *(undefined4 *)(param_1 + 0x14) = *puVar3;
  uVar1 = FUN_0074d0d0();
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  iVar4 = *(int *)(DAT_009b09c4 + (uint)*(byte *)((int)puVar3 + 7) * 4);
  iVar2 = FUN_00460bf0("WHEELS");
  if (iVar4 == iVar2) {
    iVar4 = *(int *)(param_1 + 0x74);
    if (iVar4 <= *(int *)(param_1 + 0x78)) {
      puVar3 = (undefined4 *)(param_1 + 0x20 + iVar4 * 4);
      do {
        uVar1 = FUN_00751540(0,iVar4);
        *puVar3 = uVar1;
        iVar4 = iVar4 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar4 <= *(int *)(param_1 + 0x78));
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      uVar1 = FUN_00460c20("_WHEEL",*(int *)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x34) = uVar1;
      return param_1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 8) = 2;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x10) = 2;
  }
  return param_1;
}

