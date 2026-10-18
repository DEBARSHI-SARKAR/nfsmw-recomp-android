/* speed.exe 0082a720 FUN_0082a720; analysis pseudocode, not buildable source.
 * calls 0081bccb FUN_0081bccb
 * calls 00862f00 FUN_00862f00
 * calls 0082a1d0 FUN_0082a1d0
 * calls 00862fbb FUN_00862fbb
 * calls 007c4b80 FUN_007c4b80
 * calls 0081bcd9 FUN_0081bcd9
 * calls 00862eb8 FUN_00862eb8
 */

void __fastcall FUN_0082a720(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_98 [104];
  undefined4 local_30 [7];
  ushort local_14 [2];
  int local_10;
  uint local_c;
  int local_8;
  
  puVar5 = (undefined4 *)(param_1 + 0x28);
  for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  iVar3 = 0;
  local_8 = -8;
  local_10 = 0;
  *(undefined4 *)(param_1 + 0x3c) = 1;
  if (*(int *)(param_1 + 4) < 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = 1;
  FUN_0081bccb();
  if ((-1 < *(int *)(param_1 + 0x108)) && (-1 < *(int *)(param_1 + 0x114))) {
    local_8 = FUN_00862fbb(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 0x108),local_14,local_98,
                           local_30);
    if (local_8 < 0) {
      *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
      *(undefined4 *)(param_1 + 4) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x114) = 0xffffffff;
    }
    else {
      iVar3 = FUN_00862f00(*(undefined4 *)(param_1 + 0x114));
      if (iVar3 < 0) {
        *(undefined4 *)(param_1 + 4) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x114) = 0xffffffff;
        goto LAB_0082a8a6;
      }
      iVar3 = iVar3 * 10;
      local_c = (uint)local_14[0];
      iVar4 = FUN_007c4b80();
      iVar1 = 0;
      if (-1 < *(int *)(param_1 + 0x11c)) {
        iVar1 = FUN_0082a1d0(*(int *)(param_1 + 0x11c));
      }
      if ((*(byte *)(iVar1 + 0xc) & 2) == 0) {
        *(int *)(param_1 + 0x40) = iVar4;
      }
      else {
        uVar2 = *(uint *)(iVar1 + 4) >> 0x14 & 0xf;
        local_10 = (uVar2 - *(int *)(param_1 + 0x120)) + -1;
        *(uint *)(param_1 + 0x40) = uVar2 * iVar4;
      }
      iVar1 = FUN_00862eb8(*(undefined4 *)(param_1 + 0x114));
      if (iVar1 < 0) {
        *(int *)(param_1 + 0x14) = iVar1;
      }
    }
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x11c);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x11c);
    *(int *)(param_1 + 0x110) = iVar4;
    *(int *)(param_1 + 0x118) = iVar3;
    *(int *)(param_1 + 0x5c) = iVar3;
    *(int *)(param_1 + 0x4c) = iVar4 * local_10 + iVar3;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x120);
    *(int *)(param_1 + 0x58) = iVar4;
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x114);
  }
LAB_0082a8a6:
  *(int *)(param_1 + 8) = local_8;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_0081bcd9();
  return;
}

