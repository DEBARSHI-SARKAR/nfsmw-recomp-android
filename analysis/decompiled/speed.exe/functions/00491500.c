/* speed.exe 00491500 FUN_00491500; analysis pseudocode, not buildable source.
 */

uint __fastcall FUN_00491500(undefined4 param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    uVar2 = uVar2 * 0x10 + (int)cVar1;
    param_2 = param_2 + 1;
    uVar3 = uVar2 & 0xf0000000;
    if (uVar3 != 0) {
      uVar2 = uVar2 ^ uVar3 >> 0x18;
    }
    uVar2 = uVar2 & ~uVar3;
    cVar1 = *param_2;
  }
  return uVar2 & 0xff;
}

