/* speed.exe 004250f3 FUN_004250f3; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_004250f3(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar2 = *(uint *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = 0;
  if (uVar2 != 0) {
    if (*(uint *)(unaff_ESI + 0x18) < 0x10) {
      puVar4 = (undefined4 *)(unaff_ESI + 4);
    }
    else {
      puVar4 = *(undefined4 **)(unaff_ESI + 4);
    }
    puVar5 = param_2;
    for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    unaff_ESI = *(int *)(unaff_EBP + -0x14);
    iVar3 = *(int *)(unaff_EBP + 0xc);
  }
  if ((0xf < *(uint *)(unaff_ESI + 0x18)) && (*(int *)(unaff_ESI + 4) != 0)) {
    FUN_005d0370(*(int *)(unaff_ESI + 4),*(uint *)(unaff_ESI + 0x18) + 1,
                 &PTR_LAB_004c5452_1_00890f10);
    param_2 = *(undefined4 **)(unaff_EBP + 8);
    iVar3 = *(int *)(unaff_EBP + 0xc);
  }
  puVar4 = (undefined4 *)(unaff_ESI + 4);
  *(undefined1 *)puVar4 = 0;
  *puVar4 = param_2;
  *(uint *)(unaff_ESI + 0x18) = unaff_EBX;
  *(int *)(unaff_ESI + 0x14) = iVar3;
  if (0xf < unaff_EBX) {
    puVar4 = param_2;
  }
  *(undefined1 *)((int)puVar4 + iVar3) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

