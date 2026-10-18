/* speed.exe 005f9270 FUN_005f9270; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 005f2190 FUN_005f2190
 * calls 005e16c0 FUN_005e16c0
 * calls 005f8f30 FUN_005f8f30
 * calls 005e2d70 FUN_005e2d70
 * calls 005f5b90 FUN_005f5b90
 * calls 005f2530 FUN_005f2530
 */

void __fastcall FUN_005f9270(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int local_c;
  int local_8;
  uint local_4;
  
  FUN_005f2530(*(undefined4 *)(*(int *)(param_1 + 0x34) + 4));
  *(int *)(*(int *)(param_1 + 0x34) + 4) = *(int *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(int *)(*(int *)(param_1 + 0x34) + 8) = *(int *)(param_1 + 0x34);
  local_4 = 0xffffffff;
  local_8 = DAT_0091dff4;
  if (DAT_0091dff4 != 0) {
    if (*(short *)(DAT_0091dff4 + 0x18) == 0) {
      FUN_005e16c0();
    }
    uVar7 = local_4;
    iVar8 = local_8;
    if (local_8 != 0) {
      do {
        local_c = iVar8;
        cVar4 = FUN_005e2d70(iVar8);
        if (cVar4 != '\0') {
          iVar5 = FUN_005f8f30(&local_c);
          iVar1 = *(int *)(iVar5 + 4);
          if (iVar1 != 0) {
            FUN_005d0370(iVar1,(*(int *)(iVar5 + 0xc) - iVar1 >> 2) << 2,0);
          }
          *(undefined4 *)(iVar5 + 4) = 0;
          *(undefined4 *)(iVar5 + 8) = 0;
          *(undefined4 *)(iVar5 + 0xc) = 0;
          uVar7 = local_4;
        }
        iVar8 = *(int *)(iVar8 + 0x24);
        while( true ) {
          if (iVar8 == DAT_0091dff4) goto LAB_005f9340;
          if ((uVar7 & *(ushort *)(iVar8 + 0x18)) != 0) break;
          iVar8 = *(int *)(iVar8 + 0x24);
        }
      } while( true );
    }
  }
LAB_005f9340:
  piVar9 = (int *)**(int **)(param_1 + 0x34);
  if (piVar9 != *(int **)(param_1 + 0x34)) {
    do {
      iVar8 = piVar9[3];
      uVar6 = FUN_005f5b90(iVar8,0);
      FUN_005f2190(uVar6);
      FUN_005f5b90(iVar8,piVar9 + 4);
      if (*(char *)((int)piVar9 + 0x21) == '\0') {
        piVar2 = (int *)piVar9[2];
        if (*(char *)((int)piVar2 + 0x21) == '\0') {
          cVar4 = *(char *)(*piVar2 + 0x21);
          piVar9 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar4 == '\0') {
            cVar4 = *(char *)(*piVar2 + 0x21);
            piVar9 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar4 = *(char *)(piVar9[1] + 0x21);
          piVar3 = (int *)piVar9[1];
          piVar2 = piVar9;
          while ((piVar9 = piVar3, cVar4 == '\0' && (piVar2 == (int *)piVar9[2]))) {
            cVar4 = *(char *)(piVar9[1] + 0x21);
            piVar3 = (int *)piVar9[1];
            piVar2 = piVar9;
          }
        }
      }
    } while (piVar9 != *(int **)(param_1 + 0x34));
  }
  return;
}

