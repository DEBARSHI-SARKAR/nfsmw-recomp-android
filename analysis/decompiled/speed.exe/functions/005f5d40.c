/* speed.exe 005f5d40 FUN_005f5d40; analysis pseudocode, not buildable source.
 * calls 005dfa30 FUN_005dfa30
 * calls 00652ad0 _malloc
 * calls 005ef200 FUN_005ef200
 * calls 005ec490 FUN_005ec490
 * calls 00652b10 thunk_FUN_007c7250
 * calls 005f53d0 FUN_005f53d0
 * calls 0045ed50 FUN_0045ed50
 */

void __fastcall FUN_005f5d40(int param_1)

{
  char cVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint *puVar12;
  uint local_418;
  undefined1 *local_414;
  uint local_410;
  uint local_40c;
  int local_408;
  undefined1 local_404 [4];
  undefined1 local_400 [1024];
  
  uVar11 = *(int *)(param_1 + 0x140) + *(int *)(param_1 + 0x134);
  puVar5 = local_400;
  local_40c = uVar11;
  local_408 = param_1;
  if (0x100 < uVar11) {
    local_414 = puVar5;
    puVar5 = _malloc(uVar11 * 4);
  }
  local_418 = **(int **)(param_1 + 0x130);
  iVar9 = 0;
  local_414 = puVar5;
  if ((int *)local_418 != *(int **)(param_1 + 0x130)) {
    do {
      *(undefined4 *)(puVar5 + iVar9 * 4) = *(undefined4 *)(local_418 + 0x10);
      iVar9 = iVar9 + 1;
      FUN_005dfa30();
    } while (local_418 != *(uint *)(param_1 + 0x130));
  }
  piVar6 = (int *)**(int **)(param_1 + 0x13c);
  if (piVar6 != *(int **)(param_1 + 0x13c)) {
    piVar10 = (int *)(puVar5 + iVar9 * 4);
    do {
      *piVar10 = piVar6[4];
      piVar10 = piVar10 + 1;
      if (*(char *)((int)piVar6 + 0x15) == '\0') {
        piVar2 = (int *)piVar6[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar6 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar6 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x15);
          piVar4 = (int *)piVar6[1];
          piVar2 = piVar6;
          while ((piVar6 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0x15);
            piVar4 = (int *)piVar6[1];
            piVar2 = piVar6;
          }
        }
      }
    } while (piVar6 != *(int **)(param_1 + 0x13c));
  }
  FUN_005ef200(puVar5,puVar5 + uVar11 * 4,(int)(puVar5 + uVar11 * 4) - (int)puVar5 >> 2);
  puVar12 = *(uint **)(param_1 + 0x120);
  local_410 = 0;
  if (local_40c != 0) {
    do {
      puVar3 = *(uint **)(puVar5 + local_410 * 4);
      uVar11 = puVar3[1] + 0x17 & 0xfffffff0;
      if (puVar3 != puVar12) {
        FUN_0045ed50(puVar12,puVar3,uVar11);
        local_418 = *puVar12 >> ((byte)*(undefined4 *)(param_1 + 0x60) & 0x1f);
        uVar8 = 0;
        do {
          if (uVar8 == 0) {
            param_1 = param_1 + 0x138;
          }
          else {
            param_1 = param_1 + 300;
          }
          piVar6 = (int *)FUN_005ec490(local_404,&local_418);
          if (*piVar6 != *(int *)(param_1 + 4)) {
            puVar7 = (undefined4 *)FUN_005f53d0(&local_418);
            *puVar7 = puVar12;
          }
          uVar8 = uVar8 + 1;
          param_1 = local_408;
          puVar5 = local_414;
        } while (uVar8 < 2);
      }
      puVar12 = (uint *)((int)puVar12 + uVar11);
      local_410 = local_410 + 1;
    } while (local_410 < local_40c);
  }
  if (puVar5 != local_400) {
    thunk_FUN_007c7250(puVar5);
  }
  *(uint **)(param_1 + 0x124) = puVar12;
  return;
}

