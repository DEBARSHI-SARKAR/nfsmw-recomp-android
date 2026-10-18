/* speed.exe 0064cef0 thunk_FUN_007ec59c; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_007ec59c(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  cVar1 = FUN_007ec2d0(0);
  if (cVar1 != '\0') {
    _DAT_009bb0bc = DAT_009bb134;
    piVar3 = &DAT_009baf84;
    do {
      if ((((code *)piVar3[-3] != (code *)0x0) && (*piVar3 <= DAT_009bb134)) && (piVar3[1] == 0)) {
        iVar2 = DAT_009bb134 - *piVar3;
        piVar3[1] = 1;
        (*(code *)piVar3[-3])(piVar3[-2],iVar2);
        iVar2 = DAT_009bb134 + piVar3[-1];
        piVar3[1] = 0;
        *piVar3 = iVar2;
      }
      piVar3 = piVar3 + 5;
    } while ((int)piVar3 < 0x9bb0c4);
  }
  return;
}

