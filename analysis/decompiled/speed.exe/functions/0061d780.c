/* speed.exe 0061d780 FUN_0061d780; analysis pseudocode, not buildable source.
 * calls 0061d5d0 FUN_0061d5d0
 * calls 0061d6d0 FUN_0061d6d0
 */

undefined4 * FUN_0061d780(undefined4 param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar2 = (undefined4 *)0x0;
  if (param_4 != 0) {
    puVar2 = (undefined4 *)FUN_0061d5d0(param_4);
    if (param_2 == (undefined4 *)0x0) {
      return puVar2;
    }
    if (param_3 < param_4) {
      param_4 = param_3;
    }
    puVar3 = param_2;
    puVar4 = puVar2;
    for (uVar1 = param_4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (param_4 = param_4 & 3; param_4 != 0; param_4 = param_4 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    FUN_0061d6d0(param_2,param_3);
  }
  return puVar2;
}

