/* speed.exe 008642f0 FUN_008642f0; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 * calls 0078af60 thunk_FUN_004655f0
 * calls 0078af30 FUN_0078af30
 */

undefined4 * FUN_008642f0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  DWORD DVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  puVar1 = (undefined4 *)FUN_0078af30(0x23c);
  puVar5 = puVar1;
  for (iVar4 = 0x8f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  iVar6 = 0;
  puVar1[0x38] = 0;
  puVar1[0x7d] = 0;
  puVar1[0x85] = 0x400;
  iVar4 = FUN_0078af30(0x400);
  puVar1[0x84] = iVar4;
  if (iVar4 == 0) {
    thunk_FUN_004655f0(puVar1);
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[0x8a] = 60000;
  }
  DVar2 = GetTickCount();
  puVar5 = puVar1 + 0x2e;
  puVar1[0x8d] = DVar2 % 8000 + 2000;
  if (param_1 != 0) {
    iVar4 = 0x1f;
    iVar6 = 0x1f;
    puVar3 = puVar5;
    do {
      *(undefined1 *)puVar3 = *(undefined1 *)((param_1 - (int)puVar5) + (int)puVar3);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined1 *)((int)puVar5 + iVar6) = 0;
  iVar4 = 0;
  puVar1[0x36] = param_2;
  puVar5 = puVar1 + 0x16;
  if (param_3 != 0) {
    iVar6 = 0x1f;
    iVar4 = 0x1f;
    puVar3 = puVar5;
    do {
      *(undefined1 *)puVar3 = *(undefined1 *)((param_3 - (int)puVar5) + (int)puVar3);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined1 *)((int)puVar5 + iVar4) = 0;
  puVar5 = puVar1 + 0x1e;
  if (param_4 != 0) {
    iVar4 = 0x3f;
    param_4 = param_4 - (int)puVar5;
    do {
      *(undefined1 *)puVar5 = *(undefined1 *)(param_4 + (int)puVar5);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *(undefined1 *)((int)puVar1 + 0xb7) = 0;
    return puVar1;
  }
  *(undefined1 *)puVar5 = 0;
  return puVar1;
}

