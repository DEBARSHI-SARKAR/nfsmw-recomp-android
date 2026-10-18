/* speed.exe 00759c60 FUN_00759c60; analysis pseudocode, not buildable source.
 * calls 00752fe0 FUN_00752fe0
 * calls 00463ca0 FUN_00463ca0
 * calls 0073a760 FUN_0073a760
 * calls 00759ba0 FUN_00759ba0
 * calls 00757610 FUN_00757610
 * calls 00752f80 FUN_00752f80
 * calls 00503360 FUN_00503360
 * calls 00759ad0 FUN_00759ad0
 * calls 00759990 FUN_00759990
 */

undefined4 __thiscall FUN_00759c60(int param_1,int *param_2,int param_3)

{
  short *psVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 local_15c [348];
  
  if (0 < param_2[2]) {
    return 0;
  }
  iVar2 = param_2[0xd4];
  if ((((iVar2 != 0) && (*(char *)(iVar2 + 0xc) == '\x02')) && (*(char *)(iVar2 + 0xd) == '\x02'))
     && (((*(char *)(iVar2 + 0xe) != '\0' && (*(char *)(iVar2 + 0xd) == '\x02')) &&
         (*(char *)(iVar2 + 0xe) != '\0')))) {
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
  if (param_3 != 0) {
    iVar2 = FUN_0073a760(param_2);
    if (iVar2 != 0) {
      return 0;
    }
  }
  iVar2 = param_2[0xd4];
  FUN_00759ad0(iVar2,1);
  FUN_00759ba0(iVar2);
  psVar1 = (short *)(*(int *)(iVar2 + 0x18) + 0xc);
  *psVar1 = *psVar1 + -1;
  FUN_00752f80(*(undefined4 *)(iVar2 + 0x18));
  *(undefined4 *)(iVar2 + 0x18) = 0;
  FUN_00759990(param_2[0xd3]);
  FUN_00752fe0(param_2[0xd2]);
  iVar2 = *param_2;
  piVar3 = (int *)param_2[1];
  *piVar3 = iVar2;
  *(int **)(iVar2 + 4) = piVar3;
  FUN_00463ca0(DAT_009b0a0c,param_2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  return 1;
}

