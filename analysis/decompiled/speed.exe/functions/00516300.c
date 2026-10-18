/* speed.exe 00516300 FUN_00516300; analysis pseudocode, not buildable source.
 */

void FUN_00516300(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined1 *in_EAX;
  int iVar4;
  int iVar5;
  char *unaff_ESI;
  int iVar6;
  
  iVar4 = 0;
  iVar5 = 0;
  cVar2 = *unaff_ESI;
  while (iVar3 = iVar4, cVar2 != '\0') {
    pcVar1 = unaff_ESI + iVar4;
    iVar4 = iVar4 + 1;
    if ((*pcVar1 == '\\') || (*pcVar1 == '/')) {
      iVar5 = iVar4;
    }
    cVar2 = unaff_ESI[iVar4];
  }
  for (; (iVar6 = iVar4, iVar3 != 0 && (iVar6 = iVar3, unaff_ESI[iVar3] != '.')); iVar3 = iVar3 + -1
      ) {
  }
  if (iVar6 <= iVar5) {
    *in_EAX = 0;
    return;
  }
  iVar4 = iVar5;
  do {
    in_EAX[iVar4 - iVar5] = unaff_ESI[iVar4];
    iVar4 = iVar4 + 1;
  } while (iVar4 < iVar6);
  in_EAX[iVar6 - iVar5] = 0;
  return;
}

