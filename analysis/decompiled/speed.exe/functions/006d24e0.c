/* speed.exe 006d24e0 FUN_006d24e0; analysis pseudocode, not buildable source.
 * calls 006c2290 FUN_006c2290
 * calls 00652b10 thunk_FUN_007c7250
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00652ad0 _malloc
 */

void FUN_006d24e0(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  
  if ((DAT_00982c24 != 0) &&
     ((cVar4 = (char)param_1, DAT_00982c2c == '\0' || (DAT_00982c2c = '\0', cVar4 != '\r')))) {
    switch(cVar4) {
    case '\b':
      if (DAT_00982c20 != 0) {
        pcVar2 = _malloc(DAT_00982c28);
        pcVar3 = (char *)(DAT_00982c20 + DAT_00982c18);
        pcVar5 = pcVar2;
        do {
          cVar4 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          *pcVar5 = cVar4;
          pcVar5 = pcVar5 + 1;
        } while (cVar4 != '\0');
        DAT_00982c1c = DAT_00982c1c - 1;
        DAT_00982c20 = DAT_00982c20 + -1;
        pcVar5 = (char *)(DAT_00982c18 + DAT_00982c20);
        do {
          cVar4 = *pcVar2;
          pcVar2 = pcVar2 + 1;
          *pcVar5 = cVar4;
          pcVar5 = pcVar5 + 1;
        } while (cVar4 != '\0');
        thunk_FUN_007c7250();
        return;
      }
      break;
    case '\t':
    case '\r':
      DAT_008f9459 = '\n';
      if (DAT_00982c1c < DAT_00982c28) {
        pcVar2 = _malloc(DAT_00982c28);
        pcVar3 = (char *)(DAT_00982c20 + DAT_00982c18);
        pcVar5 = pcVar2;
        do {
          cVar4 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          *pcVar5 = cVar4;
          pcVar5 = pcVar5 + 1;
        } while (cVar4 != '\0');
        *(undefined1 *)(DAT_00982c18 + DAT_00982c20) = 10;
        DAT_008f9459 = *(undefined1 *)(DAT_00982c18 + DAT_00982c20);
        DAT_00982c1c = DAT_00982c1c + 1;
        DAT_00982c20 = DAT_00982c20 + 1;
        pcVar5 = (char *)(DAT_00982c18 + DAT_00982c20);
        do {
          cVar4 = *pcVar2;
          pcVar2 = pcVar2 + 1;
          *pcVar5 = cVar4;
          pcVar5 = pcVar5 + 1;
        } while (cVar4 != '\0');
        thunk_FUN_007c7250();
        return;
      }
      break;
    case '\n':
      break;
    default:
      DAT_008f9459 = cVar4;
      if (((((('`' < cVar4) && (cVar4 < '{')) || (('@' < cVar4 && (cVar4 < '[')))) ||
           ((('/' < cVar4 && (cVar4 < ':')) ||
            ((DAT_008f945a == '\0' &&
             ((((cVar4 == '_' || (cVar4 == '@')) || (cVar4 == '.')) || (cVar4 == '-')))))))) ||
          ((DAT_00982c2f == '\x01' && (cVar1 = FUN_006c2290(param_1), cVar1 != '\0')))) &&
         (DAT_00982c2d = 0, DAT_00982c1c < DAT_00982c28)) {
        pcVar2 = _malloc(DAT_00982c28);
        pcVar3 = (char *)(DAT_00982c18 + DAT_00982c20);
        pcVar5 = pcVar2;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          *pcVar5 = cVar1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        *(char *)(DAT_00982c18 + DAT_00982c20) = cVar4;
        DAT_00982c1c = DAT_00982c1c + 1;
        DAT_00982c20 = DAT_00982c20 + 1;
        pcVar5 = (char *)(DAT_00982c18 + DAT_00982c20);
        do {
          cVar4 = *pcVar2;
          pcVar2 = pcVar2 + 1;
          *pcVar5 = cVar4;
          pcVar5 = pcVar5 + 1;
        } while (cVar4 != '\0');
        thunk_FUN_007c7250();
        return;
      }
      break;
    case '\x1b':
      DAT_008f9459 = '\0';
      if (DAT_00982c1c < DAT_00982c28) {
        pcVar2 = _malloc(DAT_00982c28);
        pcVar3 = (char *)(DAT_00982c20 + DAT_00982c18);
        pcVar5 = pcVar2;
        do {
          cVar4 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          *pcVar5 = cVar4;
          pcVar5 = pcVar5 + 1;
        } while (cVar4 != '\0');
        *(undefined1 *)(DAT_00982c18 + DAT_00982c20) = 0;
        DAT_00982c1c = DAT_00982c1c + 1;
        DAT_00982c20 = DAT_00982c20 + 1;
        pcVar5 = (char *)(DAT_00982c18 + DAT_00982c20);
        do {
          cVar4 = *pcVar2;
          pcVar2 = pcVar2 + 1;
          *pcVar5 = cVar4;
          pcVar5 = pcVar5 + 1;
        } while (cVar4 != '\0');
        thunk_FUN_007c7250();
        return;
      }
    }
  }
  return;
}

