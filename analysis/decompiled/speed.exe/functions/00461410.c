/* speed.exe 00461410 FUN_00461410; analysis pseudocode, not buildable source.
 */

bool FUN_00461410(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  bVar2 = *param_2;
  pbVar5 = (byte *)0x0;
  pbVar4 = (byte *)0x0;
  while( true ) {
    if (bVar2 == 0) goto LAB_00461458;
    bVar1 = *param_1;
    if (bVar1 == 0x2a) break;
    bVar3 = bVar1;
    if (('`' < (char)bVar1) && ((char)bVar1 < '{')) {
      bVar3 = bVar1 & 0x5f;
    }
    if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
      bVar2 = bVar2 & 0x5f;
    }
    if ((bVar3 != bVar2) && (bVar1 != 0x3f)) {
      return false;
    }
    bVar2 = param_2[1];
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  bVar2 = *param_2;
  while (bVar2 != 0) {
    bVar1 = *param_1;
    if (bVar1 == 0x2a) {
      pbVar4 = param_1 + 1;
      if (param_1[1] == 0) {
        return true;
      }
      param_1 = pbVar4;
      pbVar5 = param_2 + 1;
    }
    else {
      bVar3 = bVar1;
      if (('`' < (char)bVar1) && ((char)bVar1 < '{')) {
        bVar3 = bVar1 & 0x5f;
      }
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 & 0x5f;
      }
      if ((bVar3 == bVar2) || (bVar1 == 0x3f)) {
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
      }
      else {
        param_1 = pbVar4;
        param_2 = pbVar5;
        pbVar5 = pbVar5 + 1;
      }
    }
    bVar2 = *param_2;
  }
LAB_00461458:
  bVar2 = *param_1;
  while (bVar2 == 0x2a) {
    pbVar5 = param_1 + 1;
    param_1 = param_1 + 1;
    bVar2 = *pbVar5;
  }
  return *param_1 == 0;
}

