/* speed.exe 00728c00 FUN_00728c00; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00728c00(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (*param_1 != 0x34109) {
    return 0;
  }
  iVar2 = param_1[1];
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      puVar1 = (undefined4 *)(iVar4 + 8 + (int)param_1);
      *DAT_009ab250 = puVar1;
      puVar3 = puVar1;
      puVar1[1] = DAT_009ab250;
      DAT_009ab250 = puVar3;
      *puVar1 = &DAT_009ab24c;
      iVar4 = iVar4 + (*(short *)((int)puVar1 + 0xe) * 2 + 0x17U & 0xfffffffc);
    } while (iVar4 < iVar2);
  }
  return 1;
}

