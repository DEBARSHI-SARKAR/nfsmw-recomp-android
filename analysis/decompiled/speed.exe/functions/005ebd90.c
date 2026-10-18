/* speed.exe 005ebd90 FUN_005ebd90; analysis pseudocode, not buildable source.
 * calls 00503c50 FUN_00503c50
 * calls 005ea190 FUN_005ea190
 * calls 005e1780 FUN_005e1780
 * calls 005db520 FUN_005db520
 * calls 005e2b10 FUN_005e2b10
 * calls 00503c30 FUN_00503c30
 */

void __fastcall FUN_005ebd90(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  iVar3 = DAT_0091dff8;
  if (DAT_0091dff8 != 0) {
    if (*(short *)(DAT_0091dff8 + 0x18) == 0) {
      FUN_005e1780();
    }
    if (iVar3 != 0) {
      do {
        FUN_005db520();
        FUN_005e2b10();
        cVar1 = *(char *)(iVar3 + 0xc4);
        piVar5 = (int *)(iVar3 + 0xb8);
        iVar2 = 2;
        do {
          if (*piVar5 != 0) {
            if (cVar1 == '\0') {
              FUN_00503c50();
            }
            else {
              FUN_00503c30();
            }
          }
          piVar5 = piVar5 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        iVar3 = *(int *)(iVar3 + 0x24);
        while( true ) {
          if (iVar3 == DAT_0091dff8) goto LAB_005ebe39;
          if (*(short *)(iVar3 + 0x18) != 0) break;
          iVar3 = *(int *)(iVar3 + 0x24);
        }
      } while( true );
    }
  }
LAB_005ebe39:
  uVar4 = 0;
  if (*(int *)(param_1 + 700) != 0) {
    do {
      FUN_005ea190();
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 700));
  }
  return;
}

