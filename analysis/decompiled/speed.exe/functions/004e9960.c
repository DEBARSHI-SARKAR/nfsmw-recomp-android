/* speed.exe 004e9960 FUN_004e9960; analysis pseudocode, not buildable source.
 * calls 004e9780 FUN_004e9780
 */

void __fastcall FUN_004e9960(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  iVar3 = 0;
  puVar4 = *(undefined4 **)(param_1 + 0x130);
  if (0 < *(int *)(param_1 + 0x7c)) {
    do {
      uVar2 = FUN_004e9780(*puVar4,0,0);
      puVar4[1] = uVar2;
      puVar4 = puVar4 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x7c));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x80)) {
    do {
      uVar2 = FUN_004e9780(*(undefined4 *)(*(int *)(param_1 + 300) + iVar3 * 4),0,0);
      *(undefined4 *)(*(int *)(param_1 + 300) + iVar3 * 4) = uVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x80));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x180)) {
    piVar5 = (int *)(*(int *)(param_1 + 0x14c) + 4);
    do {
      uVar2 = FUN_004e9780(*(undefined4 *)(*piVar5 + 4),0,0);
      iVar1 = *piVar5;
      piVar5 = piVar5 + 2;
      *(undefined4 *)(iVar1 + 4) = uVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x180));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x18c)) {
    piVar5 = (int *)(*(int *)(param_1 + 0x140) + 4);
    do {
      uVar2 = FUN_004e9780(*(undefined4 *)(*piVar5 + 0x10),0,0);
      iVar1 = *piVar5;
      piVar5 = piVar5 + 2;
      *(undefined4 *)(iVar1 + 0x10) = uVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x18c));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x19c)) {
    do {
      iVar1 = *(int *)(param_1 + 0x1b4);
      uVar2 = FUN_004e9780(*(undefined4 *)(iVar1 + iVar3 * 4),1,0);
      *(undefined4 *)(iVar1 + iVar3 * 4) = uVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x19c));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x194)) {
    do {
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0x1b0) + iVar3 * 4);
      uVar2 = FUN_004e9780(*puVar4,1,1);
      *puVar4 = uVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x194));
  }
  return;
}

