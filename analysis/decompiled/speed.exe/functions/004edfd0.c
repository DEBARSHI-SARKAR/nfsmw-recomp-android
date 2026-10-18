/* speed.exe 004edfd0 FUN_004edfd0; analysis pseudocode, not buildable source.
 * calls 004e1c10 FUN_004e1c10
 * calls 0081dafd FUN_0081dafd
 * calls 004e8be0 FUN_004e8be0
 * calls 004af470 FUN_004af470
 * calls 004519d0 FUN_004519d0
 * calls 004522f0 FUN_004522f0
 * calls 004e1280 FUN_004e1280
 * calls 004e8ca0 FUN_004e8ca0
 * calls 004ac040 FUN_004ac040
 */

void __fastcall FUN_004edfd0(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  int local_18;
  
  local_18 = 0;
  do {
    iVar4 = *(int *)(param_1 + 0x18);
    if (((*(int *)(iVar4 + 0xa8) != 1) || (0 < local_18)) &&
       ((*(int *)(iVar4 + 0xa8) != 2 || (1 < local_18)))) {
      *(undefined1 *)(param_1 + 0x4c) = 1;
      return;
    }
    puVar8 = (undefined1 *)0x0;
    if (local_18 == 0) {
      puVar8 = *(undefined1 **)(*(int *)(iVar4 + 0xd8) + 0x2c);
joined_r0x004ee03d:
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &DAT_00890978;
      }
    }
    else if (local_18 == 1) {
      puVar8 = *(undefined1 **)(*(int *)(iVar4 + 0xd8) + 0xc);
      goto joined_r0x004ee03d;
    }
    puVar10 = puVar8;
    uVar9 = FUN_004522f0(puVar8);
    uVar3 = FUN_004519d0(puVar8,puVar10,uVar9);
    iVar4 = FUN_004af470(uVar9,uVar3,puVar8);
    if (iVar4 == -1) {
      return;
    }
    if (*(int *)(&DAT_0091287c + iVar4 * 0x68) == 0) {
      iVar4 = *(int *)(&DAT_00912880 + iVar4 * 0x68);
    }
    else {
      iVar4 = *(int *)(*(int *)(&DAT_0091287c + iVar4 * 0x68) + 8);
    }
    if (iVar4 == 0) {
      return;
    }
    piVar1 = (int *)(param_1 + 0x54 + local_18 * 0x18);
    if (*piVar1 == 0) {
      puVar5 = (undefined4 *)FUN_004ac040(0xb0,"AUD: Ginsu synth data",0);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = &PTR_FUN_00898b94;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[6] = 0;
      }
      *piVar1 = (int)puVar5;
    }
    iVar6 = FUN_0081dafd(8);
    if (piVar1[2] == 0) {
      iVar7 = FUN_004ac040(iVar6 + 0x8a4,"AUD: Ginsu synth workspace",0);
      piVar1[2] = iVar7;
    }
    if (piVar1[1] == 0) {
      iVar7 = FUN_004ac040(0x44,"AUD: Ginsu synth object",0);
      if (iVar7 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_004e8be0(piVar1[2],iVar6 + 0x8a4);
      }
      piVar1[1] = iVar6;
    }
    cVar2 = FUN_004e1280(iVar4);
    if (cVar2 != '\0') {
      FUN_004e1c10(*piVar1);
      piVar1[3] = *(int *)(*piVar1 + 8);
      iVar4 = *(int *)(*piVar1 + 4);
      piVar1[4] = iVar4;
      if (piVar1[5] < 0) {
        iVar4 = FUN_004e8ca0(iVar4);
        piVar1[5] = iVar4;
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}

