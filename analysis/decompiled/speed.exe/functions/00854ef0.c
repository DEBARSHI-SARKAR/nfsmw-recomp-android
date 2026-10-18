/* speed.exe 00854ef0 FUN_00854ef0; analysis pseudocode, not buildable source.
 * calls 0085e770 _strtol
 */

int FUN_00854ef0(int param_1)

{
  char *_Str;
  char *pcVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int unaff_ESI;
  char *pcVar5;
  
  if (*(int *)(unaff_ESI + 0x634) == *(int *)(unaff_ESI + 0x630)) {
    return 0;
  }
  if (*(int *)(unaff_ESI + 0x63c) == 0) {
    pcVar1 = (char *)(*(int *)(unaff_ESI + 0x628) + -1 + *(int *)(unaff_ESI + 0x634));
    _Str = (char *)(*(int *)(unaff_ESI + 0x628) + *(int *)(unaff_ESI + 0x630));
    for (pcVar5 = _Str; (pcVar5 < pcVar1 && ((*pcVar5 != '\r' || (pcVar5[1] != '\n'))));
        pcVar5 = pcVar5 + 1) {
    }
    if (pcVar5 != pcVar1) {
      lVar3 = _strtol(_Str,(char **)0x0,0x10);
      *(long *)(unaff_ESI + 0x63c) = lVar3;
      if (lVar3 != 0) {
        *(char **)(unaff_ESI + 0x630) = pcVar5 + *(int *)(unaff_ESI + 0x630) + (2 - (int)_Str);
        goto LAB_00854f7f;
      }
      *(undefined4 *)(unaff_ESI + 0x630) = *(undefined4 *)(unaff_ESI + 0x634);
    }
    return 0;
  }
LAB_00854f7f:
  iVar4 = *(int *)(unaff_ESI + 0x634) - *(int *)(unaff_ESI + 0x630);
  if (param_1 < iVar4) {
    iVar4 = param_1;
  }
  iVar2 = *(int *)(unaff_ESI + 0x63c);
  if (iVar2 + 2 <= iVar4) {
    *(undefined4 *)(unaff_ESI + 0x63c) = 0;
    return iVar2;
  }
  *(int *)(unaff_ESI + 0x63c) = iVar2 - iVar4;
  return iVar4;
}

