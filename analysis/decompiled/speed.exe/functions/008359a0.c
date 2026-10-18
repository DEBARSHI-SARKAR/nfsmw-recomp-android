/* speed.exe 008359a0 FUN_008359a0; analysis pseudocode, not buildable source.
 * calls 0083fcf0 FUN_0083fcf0
 * calls 0083c880 FUN_0083c880
 * calls 007c9470 _strncmp
 * calls 00840c60 FUN_00840c60
 * calls 008406c0 FUN_008406c0
 */

void FUN_008359a0(void)

{
  char *_Str1;
  int iVar1;
  undefined4 uVar2;
  int unaff_EBX;
  undefined4 *unaff_ESI;
  
  FUN_0083fcf0();
  FUN_0083c880();
  if (unaff_EBX == 0x70657273) {
    _Str1 = (char *)FUN_00840c60(*unaff_ESI,0x76657273);
    iVar1 = _strncmp(_Str1,"FLM/",4);
    if (iVar1 != 0) {
      FUN_0083c880(unaff_ESI + 0x172,0x300,&DAT_008c6254,unaff_ESI + 0x232);
    }
  }
  uVar2 = FUN_008406c0(*unaff_ESI);
  unaff_ESI[0x1b] = uVar2;
  unaff_ESI[0x17] = 1;
  return;
}

