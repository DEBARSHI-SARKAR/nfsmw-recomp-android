/* speed.exe 008530f0 FUN_008530f0; analysis pseudocode, not buildable source.
 * calls 00852c90 FUN_00852c90
 * calls 0078af00 FUN_0078af00
 */

undefined4 * FUN_008530f0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 < 1) {
    param_1 = 1;
  }
  if (param_2 < 0x10) {
    param_2 = 0x10;
  }
  puVar1 = (undefined4 *)FUN_0078af00(0x24);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[4] = param_2;
  puVar2 = (undefined4 *)FUN_0078af00(param_2 * 4);
  puVar1[5] = puVar2;
  for (uVar3 = puVar1[4] & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  puVar1[8] = FUN_0084c110;
  if (0 < param_1) {
    FUN_00852c90(puVar1,param_1);
  }
  return puVar1;
}

