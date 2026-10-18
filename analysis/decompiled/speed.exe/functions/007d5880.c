/* speed.exe 007d5880 ___sbh_alloc_block; analysis pseudocode, not buildable source.
 * calls 007d5eb0 ___sbh_alloc_new_group
 * calls 007d5da0 ___sbh_alloc_new_region
 */

/* Library Function - Single Match
    ___sbh_alloc_block
   
   Library: Visual Studio 2003 Debug */

int * ___sbh_alloc_block(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 uVar6;
  int *piVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int local_38;
  uint local_34;
  uint *local_20;
  uint local_1c;
  int local_18;
  int local_14;
  uint local_8;
  
  puVar5 = DAT_009c52ec + DAT_009c52e8 * 5;
  uVar9 = param_1 + 0x17U & 0xfffffff0;
  iVar10 = ((int)(param_1 + 0x17U) >> 4) + -1;
  bVar8 = (byte)iVar10;
  if (iVar10 < 0x20) {
    local_1c = 0xffffffff >> (bVar8 & 0x1f);
    local_34 = 0xffffffff;
  }
  else {
    local_1c = 0;
    local_34 = 0xffffffff >> (bVar8 - 0x20 & 0x1f);
  }
  for (local_20 = DAT_009c52f4;
      (local_20 < puVar5 && ((local_1c & *local_20) == 0 && (local_34 & local_20[1]) == 0));
      local_20 = local_20 + 5) {
  }
  if (local_20 == puVar5) {
    for (local_20 = DAT_009c52ec;
        (local_20 < DAT_009c52f4 && ((local_1c & *local_20) == 0 && (local_34 & local_20[1]) == 0));
        local_20 = local_20 + 5) {
    }
    if (local_20 == DAT_009c52f4) {
      for (; (local_20 < puVar5 && (local_20[2] == 0)); local_20 = local_20 + 5) {
      }
      if (local_20 == puVar5) {
        for (local_20 = DAT_009c52ec; (local_20 < DAT_009c52f4 && (local_20[2] == 0));
            local_20 = local_20 + 5) {
        }
        if ((local_20 == DAT_009c52f4) &&
           (local_20 = (uint *)___sbh_alloc_new_region(), local_20 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      uVar6 = ___sbh_alloc_new_group(local_20);
      *(undefined4 *)local_20[4] = uVar6;
      if (*(int *)local_20[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  DAT_009c52f4 = local_20;
  piVar4 = (int *)local_20[4];
  local_18 = *piVar4;
  if ((local_18 == -1) ||
     ((local_1c & piVar4[local_18 + 0x11]) == 0 && (local_34 & piVar4[local_18 + 0x31]) == 0)) {
    local_18 = 0;
    while ((local_1c & piVar4[local_18 + 0x11]) == 0 && (local_34 & piVar4[local_18 + 0x31]) == 0) {
      local_18 = local_18 + 1;
    }
  }
  piVar2 = piVar4 + local_18 * 0x81 + 0x51;
  local_38 = 0;
  local_8 = local_1c & piVar4[local_18 + 0x11];
  if (local_8 == 0) {
    local_38 = 0x20;
    local_8 = local_34 & piVar4[local_18 + 0x31];
  }
  for (; -1 < (int)local_8; local_8 = local_8 << 1) {
    local_38 = local_38 + 1;
  }
  piVar7 = (int *)piVar2[local_38 * 2 + 1];
  iVar10 = *piVar7 - uVar9;
  local_14 = (iVar10 >> 4) + -1;
  if (0x3f < local_14) {
    local_14 = 0x3f;
  }
  if (local_14 != local_38) {
    if (piVar7[1] == piVar7[2]) {
      bVar8 = (byte)local_38;
      if (local_38 < 0x20) {
        piVar4[local_18 + 0x11] = ~(0x80000000U >> (bVar8 & 0x1f)) & piVar4[local_18 + 0x11];
        *(char *)((int)piVar4 + local_38 + 4) = *(char *)((int)piVar4 + local_38 + 4) + -1;
        if (*(char *)((int)piVar4 + local_38 + 4) == '\0') {
          *local_20 = ~(0x80000000U >> (bVar8 & 0x1f)) & *local_20;
        }
      }
      else {
        piVar4[local_18 + 0x31] = ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & piVar4[local_18 + 0x31];
        *(char *)((int)piVar4 + local_38 + 4) = *(char *)((int)piVar4 + local_38 + 4) + -1;
        if (*(char *)((int)piVar4 + local_38 + 4) == '\0') {
          local_20[1] = ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & local_20[1];
        }
      }
    }
    *(int *)(piVar7[2] + 4) = piVar7[1];
    *(int *)(piVar7[1] + 8) = piVar7[2];
    if (iVar10 != 0) {
      piVar1 = piVar2 + local_14 * 2;
      piVar7[1] = piVar1[1];
      piVar7[2] = (int)piVar1;
      piVar1[1] = (int)piVar7;
      *(int **)(piVar7[1] + 8) = piVar7;
      if (piVar7[1] == piVar7[2]) {
        bVar8 = (byte)local_14;
        if (local_14 < 0x20) {
          cVar3 = *(char *)((int)piVar4 + local_14 + 4);
          *(char *)((int)piVar4 + local_14 + 4) = *(char *)((int)piVar4 + local_14 + 4) + '\x01';
          if (cVar3 == '\0') {
            *local_20 = 0x80000000U >> (bVar8 & 0x1f) | *local_20;
          }
          piVar4[local_18 + 0x11] = 0x80000000U >> (bVar8 & 0x1f) | piVar4[local_18 + 0x11];
        }
        else {
          cVar3 = *(char *)((int)piVar4 + local_14 + 4);
          *(char *)((int)piVar4 + local_14 + 4) = *(char *)((int)piVar4 + local_14 + 4) + '\x01';
          if (cVar3 == '\0') {
            local_20[1] = 0x80000000U >> (bVar8 - 0x20 & 0x1f) | local_20[1];
          }
          piVar4[local_18 + 0x31] = 0x80000000U >> (bVar8 - 0x20 & 0x1f) | piVar4[local_18 + 0x31];
        }
      }
    }
  }
  if (iVar10 != 0) {
    *piVar7 = iVar10;
    *(int *)((int)piVar7 + iVar10 + -4) = iVar10;
  }
  piVar7 = (int *)((int)piVar7 + iVar10);
  *piVar7 = uVar9 + 1;
  *(uint *)((int)piVar7 + (uVar9 - 4)) = uVar9 + 1;
  iVar10 = *piVar2;
  *piVar2 = *piVar2 + 1;
  if (((iVar10 == 0) && (local_20 == DAT_009c52e4)) && (local_18 == DAT_009c52fc)) {
    DAT_009c52e4 = (uint *)0x0;
  }
  *piVar4 = local_18;
  return piVar7 + 1;
}

