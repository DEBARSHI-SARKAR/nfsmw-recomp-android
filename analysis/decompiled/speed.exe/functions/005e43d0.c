/* speed.exe 005e43d0 FUN_005e43d0; analysis pseudocode, not buildable source.
 * calls 00460c50 FUN_00460c50
 * calls 00454640 FUN_00454640
 * calls 005d9ab0 FUN_005d9ab0
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 */

void __thiscall FUN_005e43d0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  uint local_4;
  
  local_4 = 0;
  iVar3 = FUN_005d9ab0();
  if (iVar3 == 0) {
    return;
  }
LAB_005e43f0:
  puVar4 = (uint *)FUN_00454810(0x916e0e78,local_4);
  if (puVar4 == (uint *)0x0) {
    puVar4 = (uint *)FUN_006269b0(4);
  }
  uVar8 = *puVar4 >> ((byte)*(undefined4 *)(param_1 + 0x60) & 0x1f);
  uVar9 = 0;
  uVar5 = uVar8;
  do {
    uVar5 = *(uint *)(param_1 + 0x70) & uVar5;
    if (*(uint *)(*(int *)(param_1 + 0x78) + uVar5 * 8) == uVar8) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x78) + 4 + uVar5 * 8);
      if (iVar3 != 0) {
        pcVar10 = (char *)**(undefined4 **)(iVar3 + 0xc);
        iVar6 = FUN_00460c50(pcVar10);
        pcVar7 = pcVar10 + iVar6 + -1;
        goto joined_r0x005e447a;
      }
      break;
    }
    uVar5 = uVar5 + 1;
    uVar9 = uVar9 + 1;
  } while (uVar9 <= *(uint *)(param_1 + 0x74));
  goto LAB_005e4441;
joined_r0x005e447a:
  if (pcVar7 < pcVar10) goto LAB_005e4496;
  if ((*pcVar7 == '/') || (*pcVar7 == '\\')) {
    pcVar10 = pcVar7 + 1;
    goto LAB_005e4496;
  }
  pcVar7 = pcVar7 + -1;
  goto joined_r0x005e447a;
LAB_005e4496:
  uVar5 = FUN_00454640(pcVar10);
  uVar2 = *(undefined4 *)(DAT_0091e00c + 0x5c);
  piVar1 = (int *)(*(int *)(param_2 + 0x1c) + (uint)*(ushort *)(param_2 + 0x1a) * 8);
  *(ushort *)(param_2 + 0x1a) = *(ushort *)(param_2 + 0x1a) + 1;
  *piVar1 = (uVar5 >> ((byte)uVar2 & 0x1f)) << 8;
  piVar1[1] = iVar3;
LAB_005e4441:
  local_4 = local_4 + 1;
  uVar5 = FUN_005d9ab0();
  if (uVar5 <= local_4) {
    return;
  }
  goto LAB_005e43f0;
}

