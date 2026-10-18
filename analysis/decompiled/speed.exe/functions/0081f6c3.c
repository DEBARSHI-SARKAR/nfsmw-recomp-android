/* speed.exe 0081f6c3 FUN_0081f6c3; analysis pseudocode, not buildable source.
 */

void FUN_0081f6c3(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int local_c;
  int local_8;
  
  local_c = 0;
  iVar2 = param_1 * 0x90 + DAT_009c21f4;
  iVar5 = -1;
  if (*(char *)(iVar2 + 0x26) != '\0') {
    local_8 = 0;
    if (0 < DAT_009c218c) {
      pcVar3 = (char *)(DAT_009c21f4 + 0x6d);
      do {
        if ((((pcVar3[-0x47] == *(char *)(iVar2 + 0x26)) && (-1 < *(int *)(pcVar3 + -0x6d))) &&
            (*pcVar3 != '\0')) && (local_c = local_c + 1, pcVar3[-0x46] != '\0')) {
          iVar5 = local_8;
        }
        local_8 = local_8 + 1;
        pcVar3 = pcVar3 + 0x90;
      } while (local_8 < DAT_009c218c);
    }
    if (local_c != 1) {
      iVar4 = iVar5 * 0x90;
      pcVar3 = (char *)(iVar4 + 0x6d + DAT_009c21f4);
      cVar1 = *pcVar3;
      if (((cVar1 == '\x02') && (param_1 != iVar5)) && (local_c == 2)) {
        *(undefined1 *)(iVar2 + 0x6d) = 0;
        *(undefined1 *)(iVar2 + 0x26) = 0;
        *(undefined1 *)(iVar2 + 0x27) = 0;
        *(undefined4 *)(iVar2 + 0x2c) = DAT_009c2190;
        *(undefined1 *)(iVar4 + 0x6d + DAT_009c21f4) = 0;
        *(undefined1 *)(iVar4 + 0x26 + DAT_009c21f4) = 0;
        *(undefined1 *)(iVar4 + 0x27 + DAT_009c21f4) = 0;
        *(undefined4 *)(iVar4 + 0x2c + DAT_009c21f4) = DAT_009c2190;
        return;
      }
      if ((cVar1 == '\x01') && (param_1 == iVar5)) {
        *pcVar3 = '\x02';
        return;
      }
    }
  }
  *(undefined1 *)(iVar2 + 0x27) = 0;
  *(undefined1 *)(iVar2 + 0x26) = 0;
  *(undefined1 *)(iVar2 + 0x6d) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = DAT_009c2190;
  return;
}

