/* speed.exe 00759e20 FUN_00759e20; analysis pseudocode, not buildable source.
 * calls 00757610 FUN_00757610
 * calls 00752f80 FUN_00752f80
 * calls 00503360 FUN_00503360
 * calls 00759ad0 FUN_00759ad0
 */

void __fastcall FUN_00759e20(int param_1)

{
  short *psVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_15c [348];
  
  piVar5 = *(int **)(param_1 + 0x58);
  if (piVar5 != (int *)(param_1 + 0x58)) {
    do {
      iVar2 = piVar5[0xd4];
      if (((*(char *)(iVar2 + 0xc) == '\x02') && (*(char *)(iVar2 + 0xd) == '\x02')) &&
         (*(char *)(iVar2 + 0xe) != '\0')) {
        iVar4 = *(int *)(iVar2 + 0x180);
        if (0 < iVar4) {
          piVar3 = (int *)(iVar2 + 0x184);
          do {
            if (*piVar3 != 0) {
              psVar1 = (short *)(*piVar3 + 0xc);
              *psVar1 = *psVar1 + -1;
            }
            piVar3 = piVar3 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        iVar4 = FUN_00757610(local_15c,0x57,iVar2 + 0x184,*(undefined4 *)(iVar2 + 0x180));
        *(undefined4 *)(iVar2 + 0x180) = 0;
        if (iVar4 != 0) {
          FUN_00503360(local_15c,iVar4);
        }
        if (*(int *)(iVar2 + 0x1c) != 0) {
          psVar1 = (short *)(*(int *)(iVar2 + 0x1c) + 0xc);
          *psVar1 = *psVar1 + -1;
          FUN_00752f80(*(undefined4 *)(iVar2 + 0x1c));
          *(undefined4 *)(iVar2 + 0x1c) = 0;
        }
      }
      else if ((piVar5[2] == 0) && (*(char *)(iVar2 + 0xd) == '\x02')) {
        FUN_00759ad0(iVar2,1);
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)(param_1 + 0x58));
  }
  return;
}

