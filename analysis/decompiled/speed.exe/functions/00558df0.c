/* speed.exe 00558df0 FUN_00558df0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0083ecf0 FUN_0083ecf0
 * calls 0056c6e0 FUN_0056c6e0
 * calls 0054e560 FUN_0054e560
 * calls 00460ca0 FUN_00460ca0
 * calls 00652ad0 _malloc
 * calls 0083eca0 FUN_0083eca0
 * calls 007c97c0 FUN_007c97c0
 * calls 00460f80 FUN_00460f80
 */

void __fastcall FUN_00558df0(int param_1)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 uVar5;
  int *piVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  char *pcVar12;
  char *pcVar13;
  undefined4 *puVar14;
  bool bVar15;
  uint local_81c;
  undefined1 local_818;
  undefined4 local_817;
  undefined4 local_813;
  undefined4 local_80f;
  undefined2 local_80b;
  undefined1 local_809;
  undefined4 local_808;
  
  uVar3 = *(undefined4 *)(param_1 + 0xe4);
  puVar11 = &local_808;
  for (iVar8 = 0x200; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  iVar8 = FUN_0083ecf0(uVar3,param_1 + 0x900,&local_808,0x800);
  if (iVar8 == *(int *)(param_1 + 0x8fc)) {
    iVar9 = 0x200;
    bVar15 = true;
    piVar10 = (int *)(param_1 + 0xe8);
    piVar6 = &local_808;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      bVar15 = *piVar10 == *piVar6;
      piVar10 = piVar10 + 1;
      piVar6 = piVar6 + 1;
    } while (bVar15);
    if (bVar15) {
      return;
    }
  }
  puVar11 = &local_808;
  puVar14 = (undefined4 *)(param_1 + 0xe8);
  for (iVar9 = 0x200; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar14 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar14 = puVar14 + 1;
  }
  piVar10 = (int *)(param_1 + 0x8f0);
  *(int *)(param_1 + 0x8fc) = iVar8;
  piVar6 = (int *)*piVar10;
  while (piVar6 != piVar10) {
    iVar8 = *piVar6;
    piVar4 = (int *)piVar6[1];
    *piVar4 = iVar8;
    *(int **)(iVar8 + 4) = piVar4;
    if (piVar6 != (int *)0x0) {
      thunk_FUN_007c7250(piVar6);
    }
    piVar6 = (int *)*piVar10;
  }
  pcVar13 = (char *)&local_808;
  local_81c = 0;
  if (*(int *)(param_1 + 0x8fc) != 0) {
    do {
      cVar2 = *pcVar13;
      pcVar12 = pcVar13;
      while (cVar2 != '\t') {
        pcVar1 = pcVar12 + 1;
        pcVar12 = pcVar12 + 1;
        cVar2 = *pcVar1;
      }
      piVar6 = _malloc(0x24);
      piVar10 = (int *)0x0;
      if (piVar6 != (int *)0x0) {
        piVar6[6] = 0;
        *(undefined2 *)(piVar6 + 7) = 0;
        piVar6[8] = 0;
        *(undefined1 *)(piVar6 + 2) = 0;
        piVar10 = piVar6;
      }
      iVar8 = (int)pcVar12 - (int)pcVar13;
      if (0xb < iVar8) {
        iVar8 = 0xc;
      }
      FUN_00460ca0(piVar10 + 2,pcVar13,iVar8);
      pcVar12 = pcVar12 + 1;
      *(undefined1 *)((int)piVar10 + iVar8 + 8) = 0;
      cVar2 = *pcVar12;
      pcVar13 = pcVar12;
      while (cVar2 != '\t') {
        pcVar1 = pcVar13 + 1;
        pcVar13 = pcVar13 + 1;
        cVar2 = *pcVar1;
      }
      local_817 = 0;
      local_813 = 0;
      local_80f = 0;
      local_80b = 0;
      local_818 = 0;
      local_809 = 0;
      FUN_00460ca0(&local_818,pcVar12,(int)pcVar13 - (int)pcVar12);
      (&local_818)[(int)pcVar13 - (int)pcVar12] = 0;
      puVar7 = (undefined1 *)FUN_007c97c0(&local_818,0x7c);
      *puVar7 = 0;
      uVar5 = FUN_00460f80(&local_818);
      *(undefined2 *)(piVar10 + 7) = uVar5;
      iVar8 = FUN_00460f80(puVar7 + 1);
      piVar10[8] = iVar8;
      iVar8 = FUN_0083eca0(*(undefined4 *)(param_1 + 0xe4),param_1 + 0x900,piVar10 + 2);
      piVar10[6] = iVar8;
      if (iVar8 == 0) {
        thunk_FUN_007c7250(piVar10);
      }
      else {
        puVar11 = *(undefined4 **)(param_1 + 0x8f4);
        *puVar11 = piVar10;
        *(int **)(param_1 + 0x8f4) = piVar10;
        piVar10[1] = (int)puVar11;
        *piVar10 = param_1 + 0x8f0;
      }
      cVar2 = *pcVar13;
      while (cVar2 != '\n') {
        pcVar12 = pcVar13 + 1;
        pcVar13 = pcVar13 + 1;
        cVar2 = *pcVar12;
      }
      pcVar13 = pcVar13 + 1;
      local_81c = local_81c + 1;
    } while (local_81c < *(uint *)(param_1 + 0x8fc));
  }
  FUN_0054e560();
  if (*(int *)(param_1 + 0x8ec) != 0) {
    FUN_0056c6e0(*(int *)(param_1 + 0x8ec));
    *(undefined4 *)(param_1 + 0x8ec) = 0;
    *(undefined4 *)(param_1 + 0x8e8) = 0;
  }
  return;
}

