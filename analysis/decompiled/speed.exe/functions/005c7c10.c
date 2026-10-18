/* speed.exe 005c7c10 FUN_005c7c10; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 00465a70 FUN_00465a70
 */

void __thiscall FUN_005c7c10(int param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  uVar1 = *(uint *)(param_1 + 4) >> 8;
  if ((uVar1 < param_3) || (0x100 < uVar1 - param_3)) {
    if (((*(uint *)(param_1 + 4) & 4) != 0) && (*(int *)(param_1 + 0xc) != 0)) {
      FUN_004655f0(*(int *)(param_1 + 0xc));
    }
    uVar2 = 0;
    bVar4 = DAT_0091dd7c != 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 4;
    if (bVar4) {
      uVar2 = 0x40;
    }
    uVar2 = FUN_00465a70(param_3,uVar2);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
  }
  puVar3 = *(undefined4 **)(param_1 + 0xc);
  for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xff | param_3 << 8;
  *(undefined4 *)(param_1 + 8) = param_4;
  return;
}

