/* speed.exe 00834081 FUN_00834081; analysis pseudocode, not buildable source.
 * calls 00832d5e FUN_00832d5e
 * calls 00832d6d FUN_00832d6d
 */

void __thiscall FUN_00834081(int param_1,int param_2,int param_3,undefined1 param_4,int param_5)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint local_8;
  
  iVar5 = in_EAX * 0xa0;
  if ((&DAT_009c2c34)[in_EAX * 0x28] != 0) {
    FUN_00832d6d((&DAT_009c2c34)[in_EAX * 0x28]);
  }
  iVar2 = FUN_00832d5e(*(char *)(param_1 + 0xb) * 4 + 4);
  (&DAT_009c2c34)[in_EAX * 0x28] = iVar2;
  if (iVar2 != 0) {
    (&DAT_009c2c2c)[in_EAX * 0x28] = param_3;
    (&DAT_009c2c30)[iVar5] = param_4;
    iVar2 = 0;
    (&DAT_009c2c28)[in_EAX * 0x28] = param_1;
    if (-1 < *(char *)(param_1 + 0xb)) {
      do {
        *(undefined4 *)((&DAT_009c2c34)[in_EAX * 0x28] + iVar2 * 4) =
             *(undefined4 *)(param_5 + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 <= *(char *)(param_1 + 0xb));
    }
    (&DAT_009c2c31)[iVar5] = 1;
    bVar1 = *(byte *)(param_3 + 2) >> 2;
    local_8 = (uint)bVar1;
    if (local_8 != 0) {
      puVar3 = (undefined2 *)(param_2 + 6);
      puVar4 = &DAT_009c2c38 + in_EAX * 0x28;
      do {
        *(undefined2 *)(puVar4 + 1) = puVar3[-1];
        *puVar4 = *(undefined4 *)(puVar3 + -3);
        *(undefined2 *)((int)puVar4 + 6) = *puVar3;
        *(ushort *)(puVar4 + 2) = (ushort)*(byte *)(*(byte *)(puVar3 + 2) + 0x92 + param_2);
        puVar3 = puVar3 + 6;
        puVar4 = puVar4 + 3;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
    (&DAT_009c2c32)[iVar5] = bVar1;
  }
  return;
}

