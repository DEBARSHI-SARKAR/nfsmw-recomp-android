/* speed.exe 0073bc00 FUN_0073bc00; analysis pseudocode, not buildable source.
 */

void FUN_0073bc00(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  iVar3 = 0;
  DAT_00904a10 = param_3;
  DAT_009b0788 = param_1;
  DAT_009af284 = param_2;
  DAT_009af280 = param_4;
  if (0 < (int)param_3) {
    puVar5 = &DAT_009aee70;
    for (uVar2 = param_3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar5 = &DAT_009aea70;
    for (uVar2 = param_3 & 0x3fffffff; piVar4 = (int *)&DAT_009af390, uVar2 != 0; uVar2 = uVar2 - 1)
    {
      *puVar5 = (int)(0x10000 / (longlong)(int)param_3);
      puVar5 = puVar5 + 1;
    }
    do {
      iVar1 = (iVar3 << 0xc) / (int)param_3;
      iVar3 = iVar3 + 1;
      piVar4[1] = iVar1;
      *piVar4 = iVar1;
      piVar4[-1] = iVar1;
      piVar4[-2] = iVar1;
      piVar4 = piVar4 + 5;
    } while (iVar3 < (int)param_3);
  }
  return;
}

