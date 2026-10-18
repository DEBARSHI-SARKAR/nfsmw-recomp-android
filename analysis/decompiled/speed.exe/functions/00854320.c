/* speed.exe 00854320 FUN_00854320; analysis pseudocode, not buildable source.
 */

undefined4 * FUN_00854320(undefined4 *param_1)

{
  int iVar1;
  ulonglong uVar2;
  uint in_EAX;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  
  uVar3 = in_EAX / 0x15180;
  uVar2 = ((ulonglong)in_EAX % 0x15180) / 0x3c;
  *param_1 = (int)(((ulonglong)in_EAX % 0x15180) % 0x3c);
  param_1[1] = (int)(uVar2 % 0x3c);
  param_1[2] = (int)(uVar2 / 0x3c);
  uVar7 = 0x7b2;
  while( true ) {
    if (((uVar7 & 3) == 0) && (((int)uVar7 % 100 != 0 || ((int)uVar7 % 400 == 0)))) {
      uVar4 = 0x16e;
    }
    else {
      uVar4 = 0x16d;
    }
    if ((int)uVar3 < (int)uVar4) break;
    uVar4 = (int)uVar3 / 0x16e + uVar7;
    if (uVar4 == uVar7) {
      uVar4 = uVar4 + 1;
    }
    iVar6 = uVar7 - 1;
    iVar1 = uVar4 - 1;
    uVar3 = uVar3 + ((((((uVar7 - uVar4) * 0x16d + iVar6 / 400) - iVar1 / 400) - iVar6 / 100) +
                      iVar1 / 100 + ((int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2)) -
                    ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2));
    uVar7 = uVar4;
  }
  piVar5 = &DAT_008c74d0 + (uVar4 & 1) * 0xc;
  param_1[5] = uVar7 - 0x76c;
  param_1[7] = uVar3;
  param_1[4] = 0;
  iVar6 = *piVar5;
  if (iVar6 <= (int)uVar3) {
    do {
      uVar3 = uVar3 - iVar6;
      piVar5 = piVar5 + 1;
      param_1[4] = param_1[4] + 1;
      iVar6 = *piVar5;
    } while (iVar6 <= (int)uVar3);
  }
  param_1[8] = 0;
  param_1[3] = uVar3 + 1;
  return param_1;
}

