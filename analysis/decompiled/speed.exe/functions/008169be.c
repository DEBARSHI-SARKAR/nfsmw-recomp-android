/* speed.exe 008169be FUN_008169be; analysis pseudocode, not buildable source.
 */

void FUN_008169be(undefined1 *param_1,short *param_2,int param_3,int param_4)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 8;
  do {
    sVar1 = *param_2;
    if (sVar1 < 0) {
      sVar1 = 0;
    }
    else if (0xff < sVar1) {
      sVar1 = 0xff;
    }
    *param_1 = (char)sVar1;
    sVar1 = param_2[1];
    if (sVar1 < 0) {
      sVar1 = 0;
    }
    else if (0xff < sVar1) {
      sVar1 = 0xff;
    }
    param_1[1] = (char)sVar1;
    sVar1 = param_2[2];
    if (sVar1 < 0) {
      sVar1 = 0;
    }
    else if (0xff < sVar1) {
      sVar1 = 0xff;
    }
    param_1[2] = (char)sVar1;
    sVar1 = param_2[3];
    if (sVar1 < 0) {
      sVar1 = 0;
    }
    else if (0xff < sVar1) {
      sVar1 = 0xff;
    }
    param_1[3] = (char)sVar1;
    sVar1 = param_2[4];
    if (sVar1 < 0) {
      sVar1 = 0;
    }
    else if (0xff < sVar1) {
      sVar1 = 0xff;
    }
    param_1[4] = (char)sVar1;
    sVar1 = param_2[5];
    if (sVar1 < 0) {
      sVar1 = 0;
    }
    else if (0xff < sVar1) {
      sVar1 = 0xff;
    }
    param_1[5] = (char)sVar1;
    sVar1 = param_2[6];
    if (sVar1 < 0) {
      sVar1 = 0;
    }
    else if (0xff < sVar1) {
      sVar1 = 0xff;
    }
    param_1[6] = (char)sVar1;
    sVar1 = param_2[7];
    if (sVar1 < 0) {
      sVar1 = 0;
    }
    else if (0xff < sVar1) {
      sVar1 = 0xff;
    }
    param_1[7] = (char)sVar1;
    param_1 = param_1 + param_3;
    param_2 = param_2 + param_4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

