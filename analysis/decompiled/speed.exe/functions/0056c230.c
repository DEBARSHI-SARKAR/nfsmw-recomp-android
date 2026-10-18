/* speed.exe 0056c230 FUN_0056c230; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 0045da30 FUN_0045da30
 * calls 00652b10 thunk_FUN_007c7250
 */

void FUN_0056c230(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar1 = _malloc(0xc0);
  puVar4 = puVar1;
  for (iVar3 = 0x30; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar5 = 0;
      do {
        iVar2 = FUN_0045da30(0x30);
        if (puVar1[iVar2] == 0) {
          *(undefined **)(param_1 + iVar3 * 4) = (&PTR_DAT_008f41f8)[iVar2];
          puVar1[iVar2] = 1;
          break;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 100);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_2);
  }
  thunk_FUN_007c7250(puVar1);
  return;
}

