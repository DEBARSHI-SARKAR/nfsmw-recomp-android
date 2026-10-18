/* speed.exe 0065b400 FUN_0065b400; analysis pseudocode, not buildable source.
 * calls 007c66d0 _malloc
 * calls 0065b350 FUN_0065b350
 * calls 007c7250 FUN_007c7250
 */

undefined4 * FUN_0065b400(undefined4 param_1,uint param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar4 = param_2 * 2 + 0x2a;
  puVar1 = _malloc(uVar4);
  puVar5 = puVar1;
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  while( true ) {
    if ((int)param_2 < 1) {
      FUN_007c7250(puVar1);
      return (undefined4 *)0x0;
    }
    iVar2 = FUN_0065b350(param_1,param_2,puVar1 + 6);
    uVar4 = (iVar2 + 3U & 0xfffffffc) + 0x18;
    *puVar1 = 0x55441122;
    puVar1[1] = param_2;
    puVar1[2] = uVar4;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[5] = 0;
    if ((int)uVar4 <= param_4) break;
    param_2 = (param_2 - uVar4) + param_4 & 0xfffffffc;
  }
  puVar5 = puVar1;
  puVar6 = param_3;
  for (uVar4 = uVar4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  FUN_007c7250(puVar1);
  return param_3;
}

