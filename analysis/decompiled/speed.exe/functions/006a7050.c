/* speed.exe 006a7050 FUN_006a7050; analysis pseudocode, not buildable source.
 * calls 00401670 FUN_00401670
 * calls 006978f0 FUN_006978f0
 */

void __thiscall FUN_006a7050(int param_1,undefined4 param_2)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = **(int **)(param_1 + 0x78);
  *(byte *)(iVar2 + 0x1d) = *(byte *)(iVar2 + 0x1d) | 4;
  if (*(char *)(iVar2 + 0x5d) != '\x02') {
    for (puVar3 = *(undefined4 **)(param_1 + 0x110); puVar3 != (undefined4 *)(param_1 + 0x110);
        puVar3 = (undefined4 *)*puVar3) {
      pfVar1 = (float *)(puVar3 + 0xe);
      FUN_00401670(puVar3 + 10,iVar2 + 0x70,pfVar1);
      *pfVar1 = *(float *)(iVar2 + 0x10) + *pfVar1;
      puVar3[0xf] = (float)puVar3[0xf] + *(float *)(iVar2 + 0x14);
      puVar3[0x10] = (float)puVar3[0x10] + *(float *)(iVar2 + 0x18);
    }
    FUN_006978f0(param_2);
  }
  *(undefined4 *)(iVar2 + 0x50) = 0;
  *(undefined4 *)(iVar2 + 0x54) = 0;
  *(undefined4 *)(iVar2 + 0x58) = 0;
  *(undefined4 *)(iVar2 + 0x60) = 0;
  *(undefined4 *)(iVar2 + 100) = 0;
  *(undefined4 *)(iVar2 + 0x68) = 0;
  if ((*(char *)(iVar2 + 0x5d) == '\0') &&
     (*(undefined2 *)(iVar2 + 0x1e) = *(undefined2 *)(iVar2 + 0x1c),
     ((byte)*(undefined2 *)(iVar2 + 0x1c) >> 1 & 1) == 0)) {
    *(float *)(iVar2 + 0x54) =
         *(float *)(*(int *)(param_1 + 0x84) + 0xf0) * *(float *)(iVar2 + 0x2c) +
         *(float *)(iVar2 + 0x54);
  }
  return;
}

