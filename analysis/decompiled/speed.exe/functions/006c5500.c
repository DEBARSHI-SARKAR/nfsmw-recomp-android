/* speed.exe 006c5500 FUN_006c5500; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 */

void __fastcall FUN_006c5500(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint unaff_EBP;
  uint uVar5;
  undefined1 local_3c [12];
  int iStack_30;
  
  (**(code **)(**(int **)(param_1 + 0x48) + 0xc))(*(int **)(param_1 + 0x48),local_3c);
  uVar5 = 0;
  if (unaff_EBP != 0) {
    do {
      uVar1 = (**(code **)(**(int **)(param_1 + 0x48) + 0x20))(*(int **)(param_1 + 0x48),0,uVar5);
      (**(code **)(**(int **)(param_1 + 0x48) + 0x10))
                (*(int **)(param_1 + 0x48),uVar1,&stack0xffffffc0);
      if (iStack_30 != 0) {
        iVar2 = FUN_00460bf0(iStack_30);
        iVar3 = 0;
        piVar4 = (int *)(*(int *)(param_1 + 0x44) + 0x20);
        do {
          if (*piVar4 == iVar2) {
            *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x24 + iVar3 * 0x28) = uVar1;
            break;
          }
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 10;
        } while (iVar3 < 0x66);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < unaff_EBP);
  }
  return;
}

