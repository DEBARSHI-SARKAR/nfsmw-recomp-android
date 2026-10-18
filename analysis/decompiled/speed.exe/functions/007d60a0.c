/* speed.exe 007d60a0 ___sbh_resize_block; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    ___sbh_resize_block
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug */

undefined4 ___sbh_resize_block(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int local_34;
  uint local_30;
  uint local_c;
  
  uVar5 = param_3 + 0x17U & 0xfffffff0;
  uVar3 = param_1[4];
  uVar10 = param_2 - param_1[3] >> 0xf;
  iVar1 = uVar3 + 0x144 + uVar10 * 0x204;
  piVar6 = (int *)(param_2 + -4);
  local_34 = *piVar6 + -1;
  puVar7 = (uint *)((int)piVar6 + local_34);
  uVar4 = *puVar7;
  if (local_34 < (int)uVar5) {
    if (((uVar4 & 1) != 0) || ((int)(local_34 + uVar4) < (int)uVar5)) {
      return 0;
    }
    local_c = ((int)uVar4 >> 4) - 1;
    if (0x3f < local_c) {
      local_c = 0x3f;
    }
    if (puVar7[1] == puVar7[2]) {
      bVar8 = (byte)local_c;
      if (local_c < 0x20) {
        *(uint *)(uVar3 + 0x44 + uVar10 * 4) =
             ~(0x80000000U >> (bVar8 & 0x1f)) & *(uint *)(uVar3 + 0x44 + uVar10 * 4);
        *(char *)(uVar3 + local_c + 4) = *(char *)(uVar3 + local_c + 4) + -1;
        if (*(char *)(uVar3 + local_c + 4) == '\0') {
          *param_1 = ~(0x80000000U >> (bVar8 & 0x1f)) & *param_1;
        }
      }
      else {
        *(uint *)(uVar3 + 0xc4 + uVar10 * 4) =
             ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & *(uint *)(uVar3 + 0xc4 + uVar10 * 4);
        *(char *)(uVar3 + local_c + 4) = *(char *)(uVar3 + local_c + 4) + -1;
        if (*(char *)(uVar3 + local_c + 4) == '\0') {
          param_1[1] = ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & param_1[1];
        }
      }
    }
    *(uint *)(puVar7[2] + 4) = puVar7[1];
    *(uint *)(puVar7[1] + 8) = puVar7[2];
    iVar9 = (local_34 + uVar4) - uVar5;
    if (0 < iVar9) {
      piVar11 = (int *)((int)piVar6 + uVar5);
      local_c = (iVar9 >> 4) - 1;
      if (0x3f < local_c) {
        local_c = 0x3f;
      }
      iVar1 = iVar1 + local_c * 8;
      piVar11[1] = *(int *)(iVar1 + 4);
      piVar11[2] = iVar1;
      *(int **)(iVar1 + 4) = piVar11;
      *(int **)(piVar11[1] + 8) = piVar11;
      if (piVar11[1] == piVar11[2]) {
        bVar8 = (byte)local_c;
        if (local_c < 0x20) {
          cVar2 = *(char *)(uVar3 + local_c + 4);
          *(char *)(uVar3 + local_c + 4) = *(char *)(uVar3 + local_c + 4) + '\x01';
          if (cVar2 == '\0') {
            *param_1 = 0x80000000U >> (bVar8 & 0x1f) | *param_1;
          }
          *(uint *)(uVar3 + 0x44 + uVar10 * 4) =
               0x80000000U >> (bVar8 & 0x1f) | *(uint *)(uVar3 + 0x44 + uVar10 * 4);
        }
        else {
          cVar2 = *(char *)(uVar3 + local_c + 4);
          *(char *)(uVar3 + local_c + 4) = *(char *)(uVar3 + local_c + 4) + '\x01';
          if (cVar2 == '\0') {
            param_1[1] = 0x80000000U >> (bVar8 - 0x20 & 0x1f) | param_1[1];
          }
          *(uint *)(uVar3 + 0xc4 + uVar10 * 4) =
               0x80000000U >> (bVar8 - 0x20 & 0x1f) | *(uint *)(uVar3 + 0xc4 + uVar10 * 4);
        }
      }
      *piVar11 = iVar9;
      *(int *)((int)piVar11 + iVar9 + -4) = iVar9;
    }
    *piVar6 = uVar5 + 1;
    *(uint *)((int)piVar6 + (uVar5 - 4)) = uVar5 + 1;
  }
  else if ((int)uVar5 < local_34) {
    *piVar6 = uVar5 + 1;
    *(uint *)((int)piVar6 + (uVar5 - 4)) = uVar5 + 1;
    piVar6 = (int *)((int)piVar6 + uVar5);
    local_34 = local_34 - uVar5;
    local_30 = (local_34 >> 4) - 1;
    if (0x3f < local_30) {
      local_30 = 0x3f;
    }
    if ((uVar4 & 1) == 0) {
      local_c = ((int)uVar4 >> 4) - 1;
      if (0x3f < local_c) {
        local_c = 0x3f;
      }
      if (puVar7[1] == puVar7[2]) {
        bVar8 = (byte)local_c;
        if (local_c < 0x20) {
          *(uint *)(uVar3 + 0x44 + uVar10 * 4) =
               ~(0x80000000U >> (bVar8 & 0x1f)) & *(uint *)(uVar3 + 0x44 + uVar10 * 4);
          *(char *)(uVar3 + local_c + 4) = *(char *)(uVar3 + local_c + 4) + -1;
          if (*(char *)(uVar3 + local_c + 4) == '\0') {
            *param_1 = ~(0x80000000U >> (bVar8 & 0x1f)) & *param_1;
          }
        }
        else {
          *(uint *)(uVar3 + 0xc4 + uVar10 * 4) =
               ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & *(uint *)(uVar3 + 0xc4 + uVar10 * 4);
          *(char *)(uVar3 + local_c + 4) = *(char *)(uVar3 + local_c + 4) + -1;
          if (*(char *)(uVar3 + local_c + 4) == '\0') {
            param_1[1] = ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & param_1[1];
          }
        }
      }
      *(uint *)(puVar7[2] + 4) = puVar7[1];
      *(uint *)(puVar7[1] + 8) = puVar7[2];
      local_34 = local_34 + uVar4;
      local_30 = (local_34 >> 4) - 1;
      if (0x3f < local_30) {
        local_30 = 0x3f;
      }
    }
    iVar1 = iVar1 + local_30 * 8;
    piVar6[1] = *(int *)(iVar1 + 4);
    piVar6[2] = iVar1;
    *(int **)(iVar1 + 4) = piVar6;
    *(int **)(piVar6[1] + 8) = piVar6;
    if (piVar6[1] == piVar6[2]) {
      bVar8 = (byte)local_30;
      if (local_30 < 0x20) {
        cVar2 = *(char *)(uVar3 + local_30 + 4);
        *(char *)(uVar3 + local_30 + 4) = *(char *)(uVar3 + local_30 + 4) + '\x01';
        if (cVar2 == '\0') {
          *param_1 = 0x80000000U >> (bVar8 & 0x1f) | *param_1;
        }
        *(uint *)(uVar3 + 0x44 + uVar10 * 4) =
             0x80000000U >> (bVar8 & 0x1f) | *(uint *)(uVar3 + 0x44 + uVar10 * 4);
      }
      else {
        cVar2 = *(char *)(uVar3 + local_30 + 4);
        *(char *)(uVar3 + local_30 + 4) = *(char *)(uVar3 + local_30 + 4) + '\x01';
        if (cVar2 == '\0') {
          param_1[1] = 0x80000000U >> (bVar8 - 0x20 & 0x1f) | param_1[1];
        }
        *(uint *)(uVar3 + 0xc4 + uVar10 * 4) =
             0x80000000U >> (bVar8 - 0x20 & 0x1f) | *(uint *)(uVar3 + 0xc4 + uVar10 * 4);
      }
    }
    *piVar6 = local_34;
    *(int *)((int)piVar6 + local_34 + -4) = local_34;
  }
  return 1;
}

