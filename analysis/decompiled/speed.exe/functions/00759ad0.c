/* speed.exe 00759ad0 FUN_00759ad0; analysis pseudocode, not buildable source.
 * calls 00757610 FUN_00757610
 * calls 00752f80 FUN_00752f80
 * calls 00503360 FUN_00503360
 */

char FUN_00759ad0(int param_1,int param_2)

{
  short *psVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined1 local_15c [348];
  
  if (((*(char *)(param_1 + 0xd) != '\x02') || (*(char *)(param_1 + 0xe) == '\0')) && (param_2 == 0)
     ) {
    return '\0';
  }
  iVar3 = *(int *)(param_1 + 0x180);
  if (0 < iVar3) {
    piVar2 = (int *)(param_1 + 0x184);
    do {
      if (*piVar2 != 0) {
        psVar1 = (short *)(*piVar2 + 0xc);
        *psVar1 = *psVar1 + -1;
      }
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = FUN_00757610(local_15c,0x57,param_1 + 0x184,*(undefined4 *)(param_1 + 0x180));
  cVar4 = iVar3 != 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  if ((bool)cVar4) {
    FUN_00503360(local_15c,iVar3);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    psVar1 = (short *)(*(int *)(param_1 + 0x1c) + 0xc);
    *psVar1 = *psVar1 + -1;
    FUN_00752f80(*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    cVar4 = cVar4 + '\x01';
  }
  return cVar4;
}

