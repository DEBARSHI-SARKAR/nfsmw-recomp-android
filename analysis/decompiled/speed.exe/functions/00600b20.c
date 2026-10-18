/* speed.exe 00600b20 FUN_00600b20; analysis pseudocode, not buildable source.
 * calls 005fbd90 FUN_005fbd90
 * calls 005fbcb0 FUN_005fbcb0
 * calls 005fbbd0 FUN_005fbbd0
 * calls 005fbd20 FUN_005fbd20
 * calls 005fab40 FUN_005fab40
 * calls 005fbc40 FUN_005fbc40
 */

void __fastcall FUN_00600b20(uint *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint local_4;
  
  if ((undefined4 *)param_1[0xf] != (undefined4 *)0x0) {
    puVar8 = (undefined4 *)param_1[0xf];
    for (iVar5 = (*param_1 & 0xfffffff) << 2; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar8 = 0;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    local_4 = 0;
    if (*param_1 != 0) {
      do {
        cVar1 = FUN_005fbd20();
        if (cVar1 == '\0') {
          cVar1 = FUN_005fbbd0();
          cVar2 = FUN_005fbc40();
          cVar3 = FUN_005fbcb0();
          cVar4 = FUN_005fbd90();
          if (cVar4 != '\0') {
            cVar3 = '\0';
          }
          if (((cVar1 != '\0') || (cVar2 != '\0')) || (cVar3 != '\0')) {
            iVar5 = FUN_005fab40();
            piVar6 = (int *)param_1[0xf];
            uVar7 = 0;
            if (*param_1 != 0) {
              do {
                if (*piVar6 == 0) break;
                if (*piVar6 == iVar5) goto LAB_00600be4;
                piVar6 = piVar6 + 4;
                uVar7 = uVar7 + 1;
              } while (uVar7 < *param_1);
            }
            *piVar6 = iVar5;
LAB_00600be4:
            if ((cVar1 != '\0') || (cVar3 != '\0')) {
              piVar6[1] = piVar6[1] | 4;
            }
            if (cVar2 != '\0') {
              piVar6[1] = piVar6[1] | 0x10;
            }
          }
        }
        local_4 = local_4 + 1;
      } while (local_4 < *param_1);
    }
  }
  return;
}

