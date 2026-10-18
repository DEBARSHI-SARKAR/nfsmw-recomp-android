/* speed.exe 00461c20 FUN_00461c20; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00461c20(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_4;
  bVar1 = false;
LAB_00461c34:
  do {
    if (param_3 <= iVar3) {
LAB_00461c88:
      *param_4 = iVar3;
      return 0;
    }
    cVar2 = *(char *)(iVar3 + param_2);
    if (cVar2 == '\r') {
      iVar3 = iVar3 + 1;
      if (param_3 <= iVar3) goto LAB_00461c88;
      cVar2 = *(char *)(iVar3 + param_2);
    }
    if (cVar2 == '\0') goto LAB_00461c88;
    if (cVar2 != '\n') {
      if (bVar1) {
LAB_00461c85:
        iVar3 = iVar3 + 1;
        goto LAB_00461c34;
      }
      if (cVar2 == '/') {
        if (*(char *)(iVar3 + 1 + param_2) == '/') {
          bVar1 = true;
          iVar3 = iVar3 + 1;
          goto LAB_00461c34;
        }
      }
      else if ((((cVar2 == ' ') || (cVar2 == '\t')) || (cVar2 == '=')) ||
              ((cVar2 == ',' || (cVar2 == '\r')))) goto LAB_00461c85;
      bVar1 = false;
      iVar4 = 0;
      break;
    }
    bVar1 = false;
    *param_5 = *param_5 + 1;
    iVar3 = iVar3 + 1;
  } while( true );
  while( true ) {
    if (cVar2 == '\"') {
      if ((bVar1) && (*(char *)(iVar3 + 1 + param_2) == '\"')) {
        *(undefined1 *)(iVar4 + param_1) = 0x22;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 1;
      }
      else {
        bVar1 = !bVar1;
      }
    }
    else {
      *(char *)(iVar4 + param_1) = cVar2;
      iVar4 = iVar4 + 1;
    }
    iVar3 = iVar3 + 1;
    if (param_3 <= iVar3) break;
    cVar2 = *(char *)(iVar3 + param_2);
    if ((cVar2 == '\0') ||
       ((!bVar1 &&
        (((cVar2 == ' ' || (cVar2 == '\n')) ||
         ((cVar2 == '\t' || (((cVar2 == '=' || (cVar2 == ',')) || (cVar2 == '\r')))))))))) break;
  }
  *(undefined1 *)(iVar4 + param_1) = 0;
  *param_4 = iVar3;
  return 1;
}

