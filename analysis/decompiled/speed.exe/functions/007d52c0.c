/* speed.exe 007d52c0 ___sbh_free_block; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 * calls EXTERNAL:00000071 VirtualFree
 * calls EXTERNAL:00000070 HeapFree
 */

/* Library Function - Single Match
    ___sbh_free_block
   
   Library: Visual Studio 2003 Debug */

void ___sbh_free_block(uint *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  byte bVar8;
  uint uVar9;
  uint local_40;
  uint local_3c;
  uint local_34;
  uint *local_1c;
  uint local_14;
  
  uVar4 = param_1[4];
  uVar9 = param_2 - param_1[3] >> 0xf;
  piVar2 = (int *)(uVar4 + 0x144 + uVar9 * 0x204);
  local_1c = (uint *)(param_2 + -4);
  local_40 = *local_1c - 1;
  if ((local_40 & 1) == 0) {
    puVar7 = (uint *)((int)local_1c + local_40);
    uVar5 = *puVar7;
    uVar6 = *(uint *)(param_2 + -8);
    if ((uVar5 & 1) == 0) {
      local_14 = ((int)uVar5 >> 4) - 1;
      if (0x3f < local_14) {
        local_14 = 0x3f;
      }
      if (puVar7[1] == puVar7[2]) {
        bVar8 = (byte)local_14;
        if (local_14 < 0x20) {
          *(uint *)(uVar4 + 0x44 + uVar9 * 4) =
               ~(0x80000000U >> (bVar8 & 0x1f)) & *(uint *)(uVar4 + 0x44 + uVar9 * 4);
          *(char *)(uVar4 + local_14 + 4) = *(char *)(uVar4 + local_14 + 4) + -1;
          if (*(char *)(uVar4 + local_14 + 4) == '\0') {
            *param_1 = ~(0x80000000U >> (bVar8 & 0x1f)) & *param_1;
          }
        }
        else {
          *(uint *)(uVar4 + 0xc4 + uVar9 * 4) =
               ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & *(uint *)(uVar4 + 0xc4 + uVar9 * 4);
          *(char *)(uVar4 + local_14 + 4) = *(char *)(uVar4 + local_14 + 4) + -1;
          if (*(char *)(uVar4 + local_14 + 4) == '\0') {
            param_1[1] = ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & param_1[1];
          }
        }
      }
      *(uint *)(puVar7[2] + 4) = puVar7[1];
      *(uint *)(puVar7[1] + 8) = puVar7[2];
      local_40 = local_40 + uVar5;
    }
    local_3c = ((int)local_40 >> 4) - 1;
    if (0x3f < local_3c) {
      local_3c = 0x3f;
    }
    if ((uVar6 & 1) == 0) {
      local_1c = (uint *)((int)local_1c - uVar6);
      local_34 = ((int)uVar6 >> 4) - 1;
      if (0x3f < local_34) {
        local_34 = 0x3f;
      }
      local_40 = local_40 + uVar6;
      local_3c = ((int)local_40 >> 4) - 1;
      if (0x3f < local_3c) {
        local_3c = 0x3f;
      }
      if (local_34 != local_3c) {
        if (local_1c[1] == local_1c[2]) {
          bVar8 = (byte)local_34;
          if (local_34 < 0x20) {
            *(uint *)(uVar4 + 0x44 + uVar9 * 4) =
                 ~(0x80000000U >> (bVar8 & 0x1f)) & *(uint *)(uVar4 + 0x44 + uVar9 * 4);
            *(char *)(uVar4 + local_34 + 4) = *(char *)(uVar4 + local_34 + 4) + -1;
            if (*(char *)(uVar4 + local_34 + 4) == '\0') {
              *param_1 = ~(0x80000000U >> (bVar8 & 0x1f)) & *param_1;
            }
          }
          else {
            *(uint *)(uVar4 + 0xc4 + uVar9 * 4) =
                 ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & *(uint *)(uVar4 + 0xc4 + uVar9 * 4);
            *(char *)(uVar4 + local_34 + 4) = *(char *)(uVar4 + local_34 + 4) + -1;
            if (*(char *)(uVar4 + local_34 + 4) == '\0') {
              param_1[1] = ~(0x80000000U >> (bVar8 - 0x20 & 0x1f)) & param_1[1];
            }
          }
        }
        *(uint *)(local_1c[2] + 4) = local_1c[1];
        *(uint *)(local_1c[1] + 8) = local_1c[2];
      }
    }
    if (((uVar6 & 1) != 0) || (local_34 != local_3c)) {
      piVar1 = piVar2 + local_3c * 2;
      local_1c[1] = piVar1[1];
      local_1c[2] = (uint)piVar1;
      piVar1[1] = (int)local_1c;
      *(uint **)(local_1c[1] + 8) = local_1c;
      if (local_1c[1] == local_1c[2]) {
        bVar8 = (byte)local_3c;
        if (local_3c < 0x20) {
          cVar3 = *(char *)(uVar4 + local_3c + 4);
          *(char *)(uVar4 + local_3c + 4) = *(char *)(uVar4 + local_3c + 4) + '\x01';
          if (cVar3 == '\0') {
            *param_1 = 0x80000000U >> (bVar8 & 0x1f) | *param_1;
          }
          *(uint *)(uVar4 + 0x44 + uVar9 * 4) =
               0x80000000U >> (bVar8 & 0x1f) | *(uint *)(uVar4 + 0x44 + uVar9 * 4);
        }
        else {
          cVar3 = *(char *)(uVar4 + local_3c + 4);
          *(char *)(uVar4 + local_3c + 4) = *(char *)(uVar4 + local_3c + 4) + '\x01';
          if (cVar3 == '\0') {
            param_1[1] = 0x80000000U >> (bVar8 - 0x20 & 0x1f) | param_1[1];
          }
          *(uint *)(uVar4 + 0xc4 + uVar9 * 4) =
               0x80000000U >> (bVar8 - 0x20 & 0x1f) | *(uint *)(uVar4 + 0xc4 + uVar9 * 4);
        }
      }
    }
    *local_1c = local_40;
    *(uint *)((int)local_1c + (local_40 - 4)) = local_40;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      if (DAT_009c52e4 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_009c52fc * 0x8000 + DAT_009c52e4[3]),0x8000,0x4000);
        DAT_009c52e4[2] = 0x80000000U >> ((byte)DAT_009c52fc & 0x1f) | DAT_009c52e4[2];
        *(undefined4 *)(DAT_009c52e4[4] + 0xc4 + DAT_009c52fc * 4) = 0;
        *(char *)(DAT_009c52e4[4] + 0x43) = *(char *)(DAT_009c52e4[4] + 0x43) + -1;
        if (*(char *)(DAT_009c52e4[4] + 0x43) == '\0') {
          DAT_009c52e4[1] = DAT_009c52e4[1] & 0xfffffffe;
        }
        if (DAT_009c52e4[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_009c52e4[3],0,0x8000);
          HeapFree(DAT_009c5318,0,(LPVOID)DAT_009c52e4[4]);
          FID_conflict__memcpy
                    (DAT_009c52e4,DAT_009c52e4 + 5,
                     (DAT_009c52e8 * 0x14 + DAT_009c52ec) - (int)(DAT_009c52e4 + 5));
          DAT_009c52e8 = DAT_009c52e8 + -1;
          if (DAT_009c52e4 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_009c52f4 = DAT_009c52ec;
        }
      }
      DAT_009c52e4 = param_1;
      DAT_009c52fc = uVar9;
    }
  }
  return;
}

