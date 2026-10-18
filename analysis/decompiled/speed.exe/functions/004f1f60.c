/* speed.exe 004f1f60 FUN_004f1f60; analysis pseudocode, not buildable source.
 * calls 004e9960 FUN_004e9960
 * calls 004f16f0 FUN_004f16f0
 * calls 004e90f0 FUN_004e90f0
 * calls 004e3520 FUN_004e3520
 * calls 004e9ab0 FUN_004e9ab0
 * calls 004e33b0 FUN_004e33b0
 * calls 004e9420 FUN_004e9420
 */

void __fastcall FUN_004f1f60(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  (**(code **)(**(int **)(param_1 + 0x28) + 4))
            (*(undefined4 *)(param_1 + 0x20),*(int **)(param_1 + 0x28));
  FUN_004e90f0();
  piVar3 = (int *)(param_1 + 0x38);
  iVar1 = 0;
  piVar2 = piVar3;
  do {
    if (iVar1 < *(int *)(*(int *)(*(int *)(param_1 + 0x28) + 0x38) + 4)) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x28) + 4 + iVar1 * 4);
    }
    else {
      iVar4 = 0;
    }
    *piVar2 = iVar4;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 0xd);
  iVar1 = 0;
  do {
    iVar4 = *piVar3;
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        FUN_004f16f0(iVar1,iVar4,iVar5);
        iVar4 = *piVar3;
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
    }
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar1 < 0xd);
  FUN_004e9420();
  iVar1 = 0;
  do {
    iVar4 = 0;
    if (0 < *(int *)(iVar1 + 4 + *(int *)(param_1 + 0x28))) {
      do {
        FUN_004e33b0();
        FUN_004e3520();
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(iVar1 + 4 + *(int *)(param_1 + 0x28)));
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x34);
  FUN_004e9ab0();
  FUN_004e9960();
  *(undefined1 *)(param_1 + 0x34) = 1;
  (*DAT_00914410)();
  return;
}

