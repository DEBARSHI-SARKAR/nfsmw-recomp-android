/* speed.exe 00609f20 FUN_00609f20; analysis pseudocode, not buildable source.
 * calls 00464080 FUN_00464080
 * calls 0065b350 FUN_0065b350
 * calls 004655f0 FUN_004655f0
 * calls 00465a70 FUN_00465a70
 * calls 006502f0 FUN_006502f0
 */

void __fastcall FUN_00609f20(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_004655f0(*(int *)(param_1 + 0x68));
  }
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  uVar3 = FUN_00464080(0);
  uVar4 = FUN_006502f0(*(undefined4 *)(param_1 + 8));
  puVar5 = (undefined4 *)0x0;
  puVar6 = (undefined4 *)0x0;
  if ((uint)(iVar2 - iVar1) < uVar4) {
    if (uVar4 <= uVar3) {
      puVar5 = (undefined4 *)FUN_00465a70(uVar4,0x40);
      puVar6 = puVar5;
    }
  }
  else {
    puVar5 = (undefined4 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 8));
  }
  puVar7 = *(undefined4 **)(param_1 + 0xc);
  uVar3 = *(uint *)(param_1 + 8);
  if (puVar5 == (undefined4 *)0x0) {
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x70) = 1;
    uVar3 = FUN_0065b350(puVar7,uVar3,puVar5);
    puVar7 = puVar5;
  }
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 8);
  puVar5 = (undefined4 *)FUN_00465a70(uVar3,0);
  *(undefined4 **)(param_1 + 0x68) = puVar5;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar5 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  if (puVar6 != (undefined4 *)0x0) {
    FUN_004655f0(puVar6);
  }
  return;
}

