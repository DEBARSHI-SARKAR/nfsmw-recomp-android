/* speed.exe 00795290 FUN_00795290; analysis pseudocode, not buildable source.
 * calls 00840c60 FUN_00840c60
 * calls 004647c0 FUN_004647c0
 * calls 00794f80 FUN_00794f80
 * calls 00460c50 FUN_00460c50
 * calls 00460f80 FUN_00460f80
 * calls 0083b210 FUN_0083b210
 * calls 0083a670 FUN_0083a670
 */

undefined4 FUN_00795290(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined1 local_88;
  undefined4 local_87;
  undefined4 local_83;
  undefined4 local_7f;
  undefined4 local_7b;
  undefined4 local_77;
  undefined4 local_73;
  undefined4 local_6f;
  undefined2 local_6b;
  undefined1 local_69;
  char local_68;
  undefined4 local_67;
  
  iVar2 = FUN_00794f80();
  if ((*(int *)(iVar2 + 0x38) == 0) ||
     (iVar2 = FUN_00840c60(*(int *)(iVar2 + 0x38),0x636f6e66), iVar2 == 0)) {
    return 0xffffffff;
  }
  iVar5 = 0;
  do {
    local_87 = 0;
    local_83 = 0;
    local_7f = 0;
    local_7b = 0;
    local_77 = 0;
    local_73 = 0;
    local_6f = 0;
    local_6b = 0;
    local_88 = 0;
    local_69 = 0;
    if (iVar5 == 0) {
      pcVar8 = "CIRCUIT_TIER_POINTS";
LAB_0079532d:
      FUN_004647c0(&local_88,pcVar8);
    }
    else {
      if (iVar5 == 1) {
        pcVar8 = "SPRINT_TIER_POINTS";
        goto LAB_0079532d;
      }
      if (iVar5 == 2) {
        pcVar8 = "DRAG_TIER_POINTS";
        goto LAB_0079532d;
      }
    }
    puVar7 = &local_67;
    for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined2 *)puVar7 = 0;
    *(undefined1 *)((int)puVar7 + 2) = 0;
    local_68 = '\0';
    uVar3 = FUN_0083a670(iVar2,&local_88,&local_68,0x60,&DAT_00890978);
    FUN_0083b210(uVar3);
    iVar4 = FUN_00460c50(&local_68);
    if (iVar4 != 0) {
      pcVar8 = &local_68;
      puVar7 = &DAT_009b3e20 + iVar5 * 10;
      iVar4 = 10;
      do {
        cVar1 = *pcVar8;
        for (pcVar6 = pcVar8; (cVar1 != ',' && (*pcVar6 != '\0')); pcVar6 = pcVar6 + 1) {
          cVar1 = pcVar6[1];
        }
        *pcVar6 = '\0';
        uVar3 = FUN_00460f80(pcVar8);
        *puVar7 = uVar3;
        pcVar8 = pcVar6 + 1;
        puVar7 = puVar7 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      return 0;
    }
  } while( true );
}

