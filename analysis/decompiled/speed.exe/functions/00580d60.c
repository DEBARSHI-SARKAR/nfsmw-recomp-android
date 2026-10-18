/* speed.exe 00580d60 FUN_00580d60; analysis pseudocode, not buildable source.
 */

undefined1 * __fastcall FUN_00580d60(int param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  pcVar2 = (char *)(param_1 + 0x8728);
  do {
    if (*pcVar2 == -1) {
      puVar1 = (undefined1 *)(iVar3 * 0x38 + 0x8728 + param_1);
      *puVar1 = 0xff;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      *(undefined2 *)(puVar1 + 8) = 0;
      puVar1[7] = 0;
      puVar1[2] = 3;
      *(undefined4 *)(puVar1 + 0x18) = 0;
      *(undefined4 *)(puVar1 + 0xc) = 0;
      *(undefined4 *)(puVar1 + 0x10) = 0;
      *(undefined2 *)(puVar1 + 0x14) = 0;
      *(undefined2 *)(puVar1 + 0x16) = 0;
      *(undefined4 *)(puVar1 + 0x1c) = 0;
      *(undefined4 *)(puVar1 + 0x20) = 0;
      *(undefined4 *)(puVar1 + 0x24) = 0;
      *(undefined4 *)(puVar1 + 0x28) = 0;
      *(undefined4 *)(puVar1 + 0x2c) = 0;
      *(undefined4 *)(puVar1 + 0x30) = 0;
      *(undefined4 *)(puVar1 + 0x34) = 0;
      *puVar1 = (char)iVar3;
      return puVar1;
    }
    iVar3 = iVar3 + 1;
    pcVar2 = pcVar2 + 0x38;
  } while (iVar3 < 0x19);
  return (undefined1 *)0x0;
}

