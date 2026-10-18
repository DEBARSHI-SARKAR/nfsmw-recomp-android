/* speed.exe 00603e40 FUN_00603e40; analysis pseudocode, not buildable source.
 */

int FUN_00603e40(byte *param_1,char *param_2)

{
  bool bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar3 = 0;
  pbVar2 = param_1;
  do {
    bVar1 = false;
    while( true ) {
      while( true ) {
        if (iVar3 < 5) {
          uVar5 = uVar5 | (uint)*pbVar2 << ((byte)iVar3 & 0x1f);
          pbVar2 = pbVar2 + 1;
          iVar3 = iVar3 + 8;
        }
        uVar4 = uVar5 & 0x1f;
        uVar5 = (int)uVar5 >> 5;
        iVar3 = iVar3 + -5;
        if (uVar4 == 0) {
          *param_2 = '\0';
          return (int)pbVar2 - (int)param_1;
        }
        if (uVar4 < 0x1b) break;
        if (uVar4 == 0x1b) {
          *param_2 = '_';
          param_2 = param_2 + 1;
        }
        else if (uVar4 == 0x1c) {
          bVar1 = true;
        }
      }
      if (bVar1) break;
      *param_2 = (char)uVar4 + '`';
      param_2 = param_2 + 1;
    }
    *param_2 = (char)uVar4 + '@';
    param_2 = param_2 + 1;
  } while( true );
}

