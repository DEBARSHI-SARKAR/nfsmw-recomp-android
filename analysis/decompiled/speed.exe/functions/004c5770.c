/* speed.exe 004c5770 FUN_004c5770; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 * calls 004647c0 FUN_004647c0
 */

void FUN_004c5770(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 extraout_ECX;
  char *pcVar6;
  undefined1 auStack_20 [32];
  
  if ((DAT_009885c8 != (int *)0x0) && (cVar1 = (**(code **)(*DAT_009885c8 + 0x3c))(), cVar1 != '\0')
     ) {
    iVar2 = 0;
    if (0 < DAT_00913dbc) {
      do {
        *(undefined4 *)(DAT_00913db4[iVar2] + 0x250) = 0xffffffff;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_00913dbc);
    }
    iVar2 = 0;
    do {
      if (iVar2 < 8) {
        iVar5 = iVar2 + 1;
        pcVar6 = "car%d";
      }
      else {
        iVar5 = iVar2 + -7;
        pcVar6 = "cop%d";
      }
      FUN_004647c0(auStack_20,pcVar6,iVar5);
      piVar4 = DAT_009885c8;
      uVar3 = FUN_005cc240(auStack_20,extraout_ECX);
      piVar4 = (int *)(**(code **)(*piVar4 + 8))(uVar3);
      if ((piVar4 != (int *)0x0) &&
         (piVar4 = (int *)(**(code **)(*piVar4 + 4))(), piVar4 != (int *)0x0)) {
        iVar5 = (**(code **)(*piVar4 + 0x70))();
        for (piVar4 = DAT_00913db4; piVar4 != DAT_00913db4 + DAT_00913dbc; piVar4 = piVar4 + 1) {
          if (*(int *)(*piVar4 + 0x230) == iVar5) {
            *(int *)(*piVar4 + 0x250) = iVar2;
            break;
          }
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x10);
  }
  return;
}

