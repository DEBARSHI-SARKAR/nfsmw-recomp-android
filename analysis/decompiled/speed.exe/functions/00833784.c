/* speed.exe 00833784 FUN_00833784; analysis pseudocode, not buildable source.
 * calls 008349d8 FUN_008349d8
 * calls 00833706 FUN_00833706
 * calls 00832f5b FUN_00832f5b
 */

undefined4 FUN_00833784(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int unaff_EBX;
  char *pcVar10;
  char *pcVar11;
  int local_c;
  int local_8;
  
  iVar3 = FUN_00832f5b();
  FUN_00833706();
  puVar4 = (undefined1 *)(param_1 + 0xb);
  iVar8 = 0xc;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 0xc;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  uVar5 = (uint)(*(byte *)(unaff_EBX + 2) >> 2);
  do {
    local_c = 0;
    bVar2 = true;
    if (uVar5 == 0) {
      return 1;
    }
    pcVar11 = (char *)(param_1 + 0xb);
    do {
      if (*pcVar11 == '\0') {
        *pcVar11 = '\x01';
        iVar8 = unaff_EBX + (uint)*(byte *)(local_c + 8 + unaff_EBX) * 4;
        iVar6 = (int)*(char *)(iVar8 + 4);
        iVar7 = FUN_008349d8(*(undefined4 *)(DAT_009c2c10 + 4 + *(short *)(pcVar11 + -7) * 8),
                             *(undefined1 *)((byte)pcVar11[-1] + 0x92 + param_1));
        if (iVar7 == 0) {
          return 0;
        }
        local_8 = 0;
        if (0 < iVar6) {
          pcVar10 = (char *)(iVar8 + 0xc);
          do {
            bVar1 = pcVar10[2];
            if ((bVar1 != 0xff) && ((char)bVar1 < '\0')) {
              uVar9 = bVar1 & 0x7f;
              if (*pcVar10 == -1) {
                uVar9 = *(uint *)(iVar3 + uVar9 * 4);
                if (uVar9 == 0) {
                  bVar2 = false;
                  *pcVar11 = '\0';
                }
                else if ((uVar9 & 1 << (*(byte *)(local_8 + iVar7) & 0x1f)) == 0) {
                  return 0;
                }
              }
              else if (*pcVar10 == -2) {
                *(int *)(iVar3 + uVar9 * 4) = 1 << (*(byte *)(local_8 + iVar7) & 0x1f);
              }
            }
            local_8 = local_8 + 1;
            pcVar10 = pcVar10 + 8;
          } while (local_8 < iVar6);
        }
      }
      local_c = local_c + 1;
      pcVar11 = pcVar11 + 0xc;
    } while (local_c < (int)uVar5);
  } while (!bVar2);
  return 1;
}

