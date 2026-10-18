/* speed.exe 00823691 FUN_00823691; analysis pseudocode, not buildable source.
 * calls 00822c41 FUN_00822c41
 */

undefined4 FUN_00823691(byte *param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined2 *local_8;
  
  iVar3 = param_2;
  bVar1 = *(byte *)(param_2 + 4);
  param_2 = 0;
  *param_1 = bVar1;
  if (bVar1 != 0) {
    local_8 = (undefined2 *)(iVar3 + 0x5c);
    puVar5 = (undefined4 *)(iVar3 + 0x2c);
    pbVar4 = param_1 + 4;
    do {
      *(undefined2 *)(pbVar4 + 0xc) = *local_8;
      sVar2 = *(short *)(DAT_009c21f4 + 4 + (param_2 + *(short *)(iVar3 + 2) * 0x48) * 2);
      *(short *)pbVar4 = sVar2;
      FUN_00822c41((int)sVar2,*(undefined1 *)(iVar3 + 5),*(int *)(iVar3 + 0x10) != 0,puVar5[-6],
                   *puVar5,puVar5[6],*(undefined1 *)(iVar3 + 4),*(int *)(iVar3 + 0x10),
                   *(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc),0,0,
                   *(undefined1 *)(iVar3 + 6),param_2);
      local_8 = local_8 + 1;
      param_2 = param_2 + 1;
      pbVar4 = pbVar4 + 2;
      puVar5 = puVar5 + 1;
    } while (param_2 < (int)(uint)*param_1);
  }
  return 1;
}

