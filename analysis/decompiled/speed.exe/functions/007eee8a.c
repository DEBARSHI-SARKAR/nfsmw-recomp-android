/* speed.exe 007eee8a FUN_007eee8a; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000008f SetFilePointer
 * calls 007edab2 FUN_007edab2
 * calls 007ed9a6 FUN_007ed9a6
 * calls 007f1042 FUN_007f1042
 * calls 007edb85 FUN_007edb85
 * calls 007eda45 FUN_007eda45
 * calls EXTERNAL:00000072 WriteFile
 * calls 007c94b0 __chkstk
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

DWORD FUN_007eee8a(undefined4 param_1,undefined4 param_2,undefined4 param_3,ushort *param_4)

{
  int iVar1;
  ushort uVar2;
  DWORD DVar3;
  undefined1 *puVar4;
  int iVar5;
  BOOL BVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  LONG aLStack_40 [5];
  undefined1 *local_20 [4];
  undefined1 local_10 [4];
  undefined1 *local_c;
  int local_8;
  
  aLStack_40[4] = 0x7eeea8;
  iVar5 = -(DAT_00907700 + 3U & 0xfffffffc);
  local_20[2] = &stack0xffffffd4 + iVar5;
  *(undefined4 *)((int)aLStack_40 + iVar5 + 0x10) = 0x7eeeb8;
  iVar1 = -(DAT_00907700 + 3U & 0xfffffffc);
  local_20[3] = &stack0xffffffd4 + iVar1 + iVar5;
  *(undefined4 *)((int)aLStack_40 + iVar1 + iVar5 + 0x10) = 1;
  *(undefined4 *)((int)aLStack_40 + iVar1 + iVar5 + 0xc) = 0;
  *(undefined4 *)((int)aLStack_40 + iVar1 + iVar5 + 8) = 0;
  *(undefined4 *)((int)aLStack_40 + iVar1 + iVar5 + 4) = param_2;
  puVar7 = (undefined1 *)((int)aLStack_40 + iVar1 + iVar5);
  *(undefined4 *)((int)aLStack_40 + iVar1 + iVar5) = 0x7eeec8;
  DVar3 = SetFilePointer(*(HANDLE *)((int)aLStack_40 + iVar1 + iVar5 + 4),
                         *(LONG *)((int)aLStack_40 + iVar1 + iVar5 + 8),
                         *(PLONG *)((int)aLStack_40 + iVar1 + iVar5 + 0xc),
                         *(DWORD *)((int)aLStack_40 + iVar1 + iVar5 + 0x10));
  *(undefined4 *)(puVar7 + -4) = 0;
  *(undefined4 *)(puVar7 + -8) = param_3;
  *(int *)(puVar7 + -0xc) = DAT_00907700;
  *(undefined1 **)(puVar7 + -0x10) = local_20[2];
  *(DWORD *)(puVar7 + -0x14) = DVar3;
  *(undefined4 *)(puVar7 + -0x18) = param_1;
  *(undefined4 *)(puVar7 + -0x1c) = 0x7eeee0;
  local_20[0] = (undefined1 *)FUN_007edb85();
  puVar8 = puVar7;
  uVar10 = 0;
  while( true ) {
    uVar11 = uVar10;
    *(undefined4 *)(puVar8 + -4) = 0;
    *(undefined4 *)(puVar8 + -8) = param_3;
    *(int *)(puVar8 + -0xc) = DAT_00907700;
    uVar10 = uVar11 ^ 1;
    *(undefined1 **)(puVar8 + -0x10) = local_20[uVar10 + 2];
    *(DWORD *)(puVar8 + -0x14) = DAT_00907700 + DVar3;
    *(undefined4 *)(puVar8 + -0x18) = param_1;
    *(undefined4 *)(puVar8 + -0x1c) = 0x7eef05;
    puVar4 = (undefined1 *)FUN_007edb85();
    local_20[uVar10] = puVar4;
    *(undefined1 **)(puVar8 + -0x1c) = local_20[uVar11];
    *(undefined4 *)(puVar8 + -0x20) = 0x7eef12;
    FUN_007ed9a6();
    *(undefined1 **)(puVar8 + -0x20) = local_20[uVar11];
    *(undefined4 *)(puVar8 + -0x24) = 0x7eef1b;
    iVar5 = FUN_007eda45();
    *(undefined4 *)(puVar8 + -4) = 0;
    *(undefined1 **)(puVar8 + -8) = local_10;
    local_8 = iVar5;
    *(int *)(puVar8 + -0xc) = iVar5;
    puVar4 = local_20[uVar11 + 2];
    *(undefined1 **)(puVar8 + -0x10) = puVar4;
    *(undefined4 *)(puVar8 + -0x14) = param_2;
    local_c = puVar4;
    puVar9 = puVar8 + -0x18;
    *(undefined4 *)(puVar8 + -0x18) = 0x7eef3b;
    BVar6 = WriteFile(*(HANDLE *)(puVar8 + -0x14),*(LPCVOID *)(puVar8 + -0x10),
                      *(DWORD *)(puVar8 + -0xc),*(LPDWORD *)(puVar8 + -8),
                      *(LPOVERLAPPED *)(puVar8 + -4));
    if (BVar6 == 0) break;
    *(uint *)(puVar9 + -4) = (uint)*param_4;
    *(int *)(puVar9 + -8) = local_8;
    *(undefined1 **)(puVar9 + -0xc) = local_c;
    *(undefined4 *)(puVar9 + -0x10) = 0x7eef53;
    uVar2 = FUN_007f1042();
    DVar3 = DVar3 + local_8;
    *param_4 = uVar2;
    if ((local_8 != DAT_00907700) || (puVar8 = puVar9, DAT_009bb158 != '\0')) goto LAB_007eef7d;
  }
  DVar3 = 0xffffffff;
LAB_007eef7d:
  *(undefined1 **)(puVar9 + -4) = local_20[uVar11 ^ 1];
  *(undefined4 *)(puVar9 + -8) = 0x7eef86;
  FUN_007edab2();
  return DVar3;
}

