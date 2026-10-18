/* speed.exe 005f6ba0 FUN_005f6ba0; analysis pseudocode, not buildable source.
 * calls 0060e370 FUN_0060e370
 * calls 00452430 FUN_00452430
 * calls 00454810 FUN_00454810
 * calls 00605bd0 FUN_00605bd0
 * calls 00605eb0 FUN_00605eb0
 * calls 00460c50 FUN_00460c50
 * calls 00605a60 FUN_00605a60
 * calls 00617a80 FUN_00617a80
 * calls 00605a50 FUN_00605a50
 * calls 0060e250 FUN_0060e250
 * calls 005f5f10 FUN_005f5f10
 * calls 006269b0 FUN_006269b0
 * calls 00614e00 FUN_00614e00
 * calls 00460d20 FUN_00460d20
 * calls 005cc240 FUN_005cc240
 */

void __thiscall FUN_005f6ba0(int param_1,char param_2)

{
  undefined4 uVar1;
  bool bVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  byte *pbVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(char *)(param_1 + 0x3d) != '\0') {
    puVar12 = &DAT_00890978;
    if (*(int *)(param_1 + 0x28) != 0) {
      puVar4 = (undefined4 *)FUN_00454810(0x3e225ec1,0);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)FUN_006269b0(4);
      }
      puVar12 = (undefined1 *)*puVar4;
    }
    iVar5 = FUN_00460c50(puVar12);
    bVar2 = false;
    if (*(int *)(param_1 + 0x28) != 0) {
      puVar4 = (undefined4 *)FUN_00454810(0x3e225ec1,0);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)FUN_006269b0(4);
      }
      iVar6 = FUN_00460d20(*puVar4,&DAT_008a3878);
      if (iVar6 == 0) {
        bVar2 = true;
      }
    }
    if (iVar5 == 0) {
      local_8 = 0;
    }
    else {
      local_8 = FUN_005cc240(puVar12);
    }
    local_4 = (uint)(*(char *)(param_1 + 0x3c) != '\0');
    if (bVar2) {
      local_4 = local_4 | 2;
    }
    uVar1 = *DAT_0091e0c8;
    uVar7 = FUN_00605a50(uVar1);
    if (!bVar2) {
      FUN_00614e00(uVar1,**(undefined4 **)(param_1 + 0xc));
      FUN_0060e250(uVar1,0xffffd8f0);
      iVar5 = FUN_00605bd0(uVar1,0xffffffff);
      if (iVar5 == 5) {
        pcVar8 = (char *)FUN_00454810(0xe4542e9b,0);
        if (pcVar8 == (char *)0x0) {
          pcVar8 = (char *)FUN_006269b0(1);
        }
        uVar3 = FUN_00617a80(uVar1,0,*pcVar8 == '\0');
        local_4 = CONCAT22(uVar3,(undefined2)local_4);
      }
    }
    iVar5 = local_4._2_2_ + 8;
    pbVar9 = (byte *)FUN_00454810(0xe4542e9b,0);
    if (pbVar9 == (byte *)0x0) {
      pbVar9 = (byte *)FUN_006269b0(1);
    }
    uVar11 = (uint)*pbVar9;
    uVar10 = FUN_00452430(iVar5,uVar11);
    puVar4 = (undefined4 *)FUN_005f5f10(uVar10,iVar5,uVar11);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = local_8;
      puVar4[1] = local_4;
      if (local_4._2_2_ != 0) {
        pcVar8 = (char *)FUN_00454810(0xe4542e9b,0);
        if (pcVar8 == (char *)0x0) {
          pcVar8 = (char *)FUN_006269b0(1);
        }
        FUN_00617a80(uVar1,puVar4 + 2,*pcVar8 == '\0');
      }
    }
    FUN_00605a60(uVar1,uVar7);
    if (param_2 != '\0') {
      FUN_00614e00(uVar1,**(undefined4 **)(param_1 + 0xc));
      FUN_00605eb0(uVar1);
      FUN_0060e370(uVar1,0xffffd8f0);
      *(undefined1 *)(param_1 + 0x3d) = 0;
    }
  }
  return;
}

