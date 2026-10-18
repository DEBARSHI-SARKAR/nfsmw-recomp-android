/* speed.exe 00747510 FUN_00747510; analysis pseudocode, not buildable source.
 * calls 00503c50 FUN_00503c50
 * calls 007267a0 FUN_007267a0
 */

void __thiscall FUN_00747510(int param_1,byte param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x3f8);
  if (((byte)uVar1 & 1) != param_2) {
    if (param_2 == 0) {
      *(uint *)(param_1 + 0x3f8) = uVar1 & 0xfffffffe;
      return;
    }
    *(uint *)(param_1 + 0x3f8) = uVar1 | 1;
    *(undefined4 *)(param_1 + 0x3a0) = 0;
    iVar3 = 4;
    do {
      FUN_007267a0();
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar2 = *(undefined4 **)(param_1 + 0x3ec);
    *(undefined1 *)(param_1 + 0x60) = 1;
    for (; puVar2 != (undefined4 *)(param_1 + 0x3ec); puVar2 = (undefined4 *)*puVar2) {
      if (puVar2[0x14] != 0) {
        FUN_00503c50();
      }
    }
    for (puVar2 = *(undefined4 **)(param_1 + 0x3e4); puVar2 != (undefined4 *)(param_1 + 0x3e4);
        puVar2 = (undefined4 *)*puVar2) {
      if (puVar2[0x14] != 0) {
        FUN_00503c50();
      }
    }
  }
  return;
}

