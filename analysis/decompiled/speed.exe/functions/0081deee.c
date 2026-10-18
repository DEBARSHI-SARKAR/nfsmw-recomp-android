/* speed.exe 0081deee FUN_0081deee; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0081deee(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  short *psVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_c;
  undefined4 *local_8;
  
  iVar5 = 0;
  if (DAT_009c2188 == '\0') {
    return 0xfffffff6;
  }
  iVar1 = (&DAT_009c1f44)[param_1];
  if (*(char *)(iVar1 + 0x62) != '\0') {
    psVar3 = (short *)(iVar1 + 0x34);
    do {
      if (*(short *)(iVar1 + 0x40) + -1 <= (int)*psVar3) {
        return 0xfffffff3;
      }
      iVar5 = iVar5 + 1;
      psVar3 = psVar3 + 1;
    } while (iVar5 < (int)(uint)*(byte *)(iVar1 + 0x62));
  }
  local_c = 0;
  puVar4 = (undefined4 *)(*(short *)(iVar1 + 0x46) * 0x20 + 0x7c + iVar1);
  puVar4[1] = puVar4[1] ^ (puVar4[1] ^ *(uint *)(param_2 + 4)) & 0x7fffffff;
  puVar4[1] = *(uint *)(param_2 + 4) & 0x80000000 | puVar4[1] & 0x7fffffff;
  *puVar4 = *(undefined4 *)(iVar1 + 4);
  if (*(char *)(iVar1 + 0x62) != '\0') {
    local_8 = (undefined4 *)(param_2 + 0xc);
    psVar3 = (short *)(iVar1 + 0x34);
    puVar4 = puVar4 + 2;
    do {
      uVar2 = *local_8;
      local_8 = local_8 + 1;
      *puVar4 = uVar2;
      puVar4 = puVar4 + 1;
      local_c = local_c + 1;
      *psVar3 = *psVar3 + 1;
      psVar3 = psVar3 + 1;
    } while (local_c < (int)(uint)*(byte *)(iVar1 + 0x62));
  }
  *(uint *)(iVar1 + 0x48) = (*(uint *)(param_2 + 4) & 0x7fffffff) + *(int *)(iVar1 + 0x48);
  uVar2 = *(undefined4 *)(iVar1 + 4);
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  *(short *)(iVar1 + 0x46) = *(short *)(iVar1 + 0x46) + 1;
  if (*(short *)(iVar1 + 0x40) <= *(short *)(iVar1 + 0x46)) {
    *(undefined2 *)(iVar1 + 0x46) = 0;
  }
  return uVar2;
}

