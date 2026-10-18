/* speed.exe 006178b0 FUN_006178b0; analysis pseudocode, not buildable source.
 * calls 00605f40 FUN_00605f40
 * calls 00605950 FUN_00605950
 * calls 00614060 FUN_00614060
 * calls 00607570 FUN_00607570
 * calls 006178b0 FUN_006178b0
 * calls 00607d80 FUN_00607d80
 * calls 00614c50 FUN_00614c50
 */

void FUN_006178b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  
  iVar2 = param_1;
  **(undefined4 **)(param_1 + 8) = 0;
  iVar3 = *(int *)(param_1 + 8) + 8;
  do {
    *(int *)(iVar2 + 8) = iVar3;
    iVar3 = FUN_00614060(iVar2,*(undefined4 *)(iVar3 + -0xc),iVar3 + -8);
    if (iVar3 == 0) {
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -8;
      return;
    }
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 8;
    iVar3 = -2;
    do {
      if (iVar3 < 1) {
        if (iVar3 < -9999) {
          if (iVar3 == -0x2711) {
            puVar4 = (undefined4 *)(iVar2 + 0x40);
          }
          else if (iVar3 == -10000) {
            puVar4 = (undefined4 *)(*(int *)(iVar2 + 0x10) + 0x2c);
          }
          else {
            iVar1 = *(int *)(*(int *)(iVar2 + 0xc) + -4);
            if ((int)(uint)*(byte *)(iVar1 + 7) < -0x2711 - iVar3) {
              puVar4 = (undefined4 *)0x0;
            }
            else {
              puVar4 = (undefined4 *)(iVar1 + 8 + (-0x2711 - iVar3) * 8);
            }
          }
        }
        else {
          puVar4 = (undefined4 *)(*(int *)(iVar2 + 8) + iVar3 * 8);
        }
LAB_00617955:
        if (puVar4 != (undefined4 *)0x0) {
          switch(*puVar4) {
          case 3:
            if (iVar3 < 1) {
              piVar6 = (int *)FUN_00605950();
            }
            else {
              piVar6 = (int *)(*(int *)(iVar2 + 0xc) + -8 + iVar3 * 8);
              if (*(int **)(iVar2 + 8) <= piVar6) break;
            }
            if (((piVar6 != (int *)0x0) && (*piVar6 != 3)) && (*piVar6 == 4)) {
              FUN_00607570(piVar6[1] + 0x10,&param_1);
            }
            break;
          case 5:
            FUN_006178b0(iVar2,&DAT_00890978);
            break;
          case 7:
            FUN_00605f40(iVar2,iVar3);
            iVar1 = *(int *)(iVar2 + 8);
            piVar6 = (int *)(iVar1 + -8);
            if ((piVar6 != (int *)0x0) && (*piVar6 == 5)) {
              piVar5 = (int *)FUN_00607d80(*(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x30),piVar6);
              *piVar6 = *piVar5;
              *(int *)(iVar1 + -4) = piVar5[1];
              piVar6 = (int *)(*(int *)(iVar2 + 8) + -8);
              if (((piVar6 != (int *)0x0) &&
                  (((*piVar6 == 4 || (*piVar6 == 3)) && (piVar6 != (int *)0x0)))) && (*piVar6 != 4))
              {
                FUN_00614c50(iVar2,piVar6);
              }
            }
            *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -8;
          }
        }
      }
      else {
        puVar4 = (undefined4 *)(*(int *)(iVar2 + 0xc) + -8 + iVar3 * 8);
        if (puVar4 < *(undefined4 **)(iVar2 + 8)) goto LAB_00617955;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0);
    iVar3 = *(int *)(iVar2 + 8) + -8;
  } while( true );
}

