/* speed.exe 008192a6 FUN_008192a6; analysis pseudocode, not buildable source.
 */

void FUN_008192a6(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint *puVar5;
  
  iVar2 = param_1;
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x453c) = 0x40;
  param_1 = 0;
  puVar5 = (uint *)(iVar2 + 0x493c);
  do {
    uVar1 = *(uint *)(iVar2 + 0x453c) * 6 - param_1;
    param_1 = param_1 + 5;
    uVar4 = uVar4 + 1;
    *puVar5 = uVar1 / *(uint *)(iVar2 + 0x453c);
    puVar5 = puVar5 + -1;
  } while (uVar4 < *(uint *)(iVar2 + 0x453c));
  uVar4 = *(uint *)(iVar2 + 0x453c);
  if (uVar4 < 0xff) {
    puVar3 = (undefined4 *)(iVar2 + (0x124f - uVar4) * 4);
    iVar2 = 0xff - uVar4;
    do {
      *puVar3 = 1;
      puVar3 = puVar3 + -1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

