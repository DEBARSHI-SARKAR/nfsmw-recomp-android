/* speed.exe 005c8010 FUN_005c8010; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 00460af0 FUN_00460af0
 * calls 00465a70 FUN_00465a70
 */

int __fastcall FUN_005c8010(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0;
    if (DAT_0091dd7c != 0) {
      uVar1 = 0x40;
    }
    uVar1 = FUN_00465a70(0x40,uVar1);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
  }
  iVar2 = FUN_00460af0(*(undefined4 *)(param_1 + 0xc));
  uVar4 = (*(uint *)(param_1 + 4) >> 5) + *(int *)(param_1 + 8);
  if (iVar2 + uVar4 * -0x10 < 0x10) {
    uVar1 = 0;
    if (DAT_0091dd7c != 0) {
      uVar1 = 0x40;
    }
    puVar3 = (undefined4 *)FUN_00465a70(iVar2 + 0x40,uVar1);
    puVar5 = *(undefined4 **)(param_1 + 0xc);
    puVar6 = puVar3;
    for (iVar2 = (uVar4 & 0xfffffff) << 2; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    FUN_004655f0(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 **)(param_1 + 0xc) = puVar3;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff7;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return *(int *)(param_1 + 0xc) + uVar4 * 0x10;
}

