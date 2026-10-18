/* speed.exe 005c7880 FUN_005c7880; analysis pseudocode, not buildable source.
 * calls 007c6100 _sprintf
 */

void FUN_005c7880(uint param_1,char param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *_Dest;
  
  *param_3 = 0x7b;
  if (param_2 == '\0') {
    iVar3 = 4;
    uVar1 = param_1;
  }
  else {
    iVar3 = 2;
    uVar1 = param_1 >> 0x10;
  }
  iVar2 = iVar3 * 8;
  _Dest = param_3 + 1;
  do {
    pcVar4 = _Dest;
    iVar2 = iVar2 + -8;
    _Dest = pcVar4 + 1;
    iVar3 = iVar3 + -1;
    *pcVar4 = (char)(uVar1 >> ((byte)iVar2 & 0x1f));
  } while (iVar3 != 0);
  if (param_2 != '\0') {
    _sprintf(_Dest,"%04x",param_1 & 0xffff);
    _Dest = pcVar4 + 5;
  }
  *_Dest = '}';
  _Dest[1] = '\0';
  return;
}

