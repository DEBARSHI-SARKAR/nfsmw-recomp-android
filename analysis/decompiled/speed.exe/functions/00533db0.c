/* speed.exe 00533db0 FUN_00533db0; analysis pseudocode, not buildable source.
 * calls 0056e360 FUN_0056e360
 * calls 00652ad0 _malloc
 * calls 005868e0 FUN_005868e0
 * calls 0056bc10 FUN_0056bc10
 * calls 00515e20 FUN_00515e20
 * calls 005a5790 FUN_005a5790
 * calls 00592710 FUN_00592710
 * calls 0051dcf0 FUN_0051dcf0
 * calls 00586d40 FUN_00586d40
 * calls 005af1c0 FUN_005af1c0
 * calls 0056e320 FUN_0056e320
 * calls 005252d0 FUN_005252d0
 */

void __fastcall FUN_00533db0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  bool bVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  char local_48 [36];
  undefined1 local_24 [36];
  
  pcVar5 = (char *)FUN_0056e320();
  pcVar6 = (char *)FUN_0056e360();
  FUN_00586d40();
  if ((*pcVar5 == '\0') || (bVar4 = true, *pcVar6 == '\0')) {
    bVar4 = false;
  }
  iVar11 = 0;
  do {
    iVar1 = iVar11 + 1;
    FUN_00515e20(local_24,0x21,"option_%d",iVar1);
    puVar7 = _malloc(0x1c);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar2 = puVar7 + 3;
      *puVar2 = puVar2;
      puVar7[4] = puVar2;
      *(undefined1 *)(puVar7 + 5) = 1;
      *puVar7 = &PTR_FUN_0089db74;
      puVar7[6] = 0xffffffff;
    }
    if (iVar11 == 0) {
      if (bVar4) {
        uVar9 = FUN_0056bc10(0x3d0447aa,pcVar5);
        FUN_00515e20(local_48,0x21,uVar9);
        puVar7[6] = 2;
      }
      else {
        pcVar8 = (char *)FUN_0056bc10(0xed21b47f);
        pcVar6 = local_48;
        do {
          cVar3 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          *pcVar6 = cVar3;
          pcVar6 = pcVar6 + 1;
        } while (cVar3 != '\0');
LAB_00533f2f:
        puVar7[6] = 0;
      }
    }
    else if (iVar11 == 1) {
      if (bVar4) {
        pcVar8 = (char *)FUN_0056bc10(0xed21b47f);
        pcVar6 = local_48;
        do {
          cVar3 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          *pcVar6 = cVar3;
          pcVar6 = pcVar6 + 1;
        } while (cVar3 != '\0');
        goto LAB_00533f2f;
      }
      pcVar8 = (char *)FUN_0056bc10(0x36e79b9);
      pcVar6 = local_48;
      do {
        cVar3 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        *pcVar6 = cVar3;
        pcVar6 = pcVar6 + 1;
      } while (cVar3 != '\0');
      puVar7[6] = 1;
    }
    else if (iVar11 == 2) {
      if (bVar4) {
        pcVar8 = (char *)FUN_0056bc10(0x36e79b9);
        pcVar6 = local_48;
        do {
          cVar3 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          *pcVar6 = cVar3;
          pcVar6 = pcVar6 + 1;
        } while (cVar3 != '\0');
        puVar7[6] = 1;
      }
      else {
        local_48[0] = '\0';
        puVar7[6] = 0xffffffff;
      }
    }
    uVar9 = *(undefined4 *)(param_1 + 0x10);
    uVar10 = FUN_005af1c0(local_24,&DAT_008941f8,local_48);
    FUN_005252d0(uVar9,uVar10);
    FUN_0051dcf0(local_48,0);
    FUN_005868e0(puVar7);
    if (puVar7[6] == -1) {
      FUN_005a5790(puVar7);
    }
    else {
      FUN_00592710(puVar7);
    }
    iVar11 = iVar1;
    if (2 < iVar1) {
      return;
    }
  } while( true );
}

