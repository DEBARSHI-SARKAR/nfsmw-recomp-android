/* speed.exe 007b3a30 FUN_007b3a30; analysis pseudocode, not buildable source.
 * calls 005252d0 FUN_005252d0
 * calls 00739ff0 FUN_00739ff0
 * calls 0056ecc0 FUN_0056ecc0
 * calls 00739860 FUN_00739860
 * calls 00739940 FUN_00739940
 * calls 0045d3a0 FUN_0045d3a0
 * calls 00739850 FUN_00739850
 * calls 00581bf0 FUN_00581bf0
 */

void __fastcall FUN_007b3a30(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x36db742,"CarName");
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x36db743,"LookupSlotID");
  iVar2 = FUN_0056ecc0(*(undefined4 *)(*(int *)(param_1 + 0x34) + 8));
  if (iVar2 == 0) {
    puVar3 = &DAT_0089424c;
  }
  else {
    puVar3 = (undefined *)FUN_00581bf0();
  }
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x3e40712,puVar3);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x3e40713,*(int *)(param_1 + 0x4c) + 8);
  if (((*(int *)(param_1 + 0x70) != param_1 + 0x68) && (iVar2 != 0)) &&
     (*(char *)(iVar2 + 0x10) != -1)) {
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x70) + 8);
    uVar4 = FUN_00739860();
    uVar4 = FUN_00739940(uVar4);
    FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xd6d32016,&DAT_008941f8,uVar4);
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    uVar5 = FUN_00739ff0((int)*(char *)(puVar1 + 1));
    FUN_005252d0(uVar4,0xeffe7224,&DAT_008941f8,uVar5);
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    uVar5 = FUN_00739850();
    FUN_005252d0(uVar4,0xb1027477,&DAT_008941f8,uVar5);
    FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x6a81554,&DAT_008b7b08,*puVar1);
    uVar5 = FUN_0045d3a0(*(undefined4 *)(param_1 + 0x70));
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    uVar6 = FUN_0045d3a0(0);
    FUN_005252d0(uVar4,0x36db746,"Part Info (%d/%d)",uVar5,uVar6);
    return;
  }
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xd6d32016,&DAT_008b7aec);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xeffe7224,&DAT_008b7aec);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xb1027477,&DAT_008b7aec);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x6a81554,&DAT_008b7aec);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x36db746,"Part Info (NONE)");
  return;
}

