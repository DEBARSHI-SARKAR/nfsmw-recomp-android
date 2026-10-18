/* speed.exe 00603d90 FUN_00603d90; analysis pseudocode, not buildable source.
 */

int FUN_00603d90(char *param_1,undefined1 *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = 0;
  uVar6 = 0;
  iVar3 = 0;
  do {
    cVar1 = *param_1;
    iVar4 = 0;
    param_1 = param_1 + 1;
    if (cVar1 != '\0') {
      iVar4 = (int)cVar1;
      if ((iVar4 + -0x61 < 0) || (0x19 < iVar4 + -0x61)) {
        if ((iVar4 + -0x41 < 0) || (0x19 < iVar4 + -0x41)) {
          if (cVar1 != '_') {
            return 0;
          }
          iVar4 = 0x1b;
        }
        else {
          iVar4 = iVar4 + -0x40;
          uVar6 = uVar6 | 0x1c << ((byte)iVar3 & 0x1f);
          iVar3 = iVar3 + 5;
        }
      }
      else {
        iVar4 = iVar4 + -0x60;
      }
    }
    bVar2 = (byte)iVar3;
    iVar3 = iVar3 + 5;
    uVar6 = uVar6 | iVar4 << (bVar2 & 0x1f);
    uVar5 = -(uint)(cVar1 != '\0') & 7;
    if ((int)uVar5 < iVar3) {
      iVar4 = ((iVar3 - uVar5) - 1 >> 3) + 1;
      iVar7 = iVar7 + iVar4;
      iVar3 = iVar3 + iVar4 * -8;
      do {
        if (param_2 != (undefined1 *)0x0) {
          *param_2 = (char)uVar6;
          param_2 = param_2 + 1;
        }
        uVar6 = (int)uVar6 >> 8;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  } while (cVar1 != '\0');
  return iVar7;
}

