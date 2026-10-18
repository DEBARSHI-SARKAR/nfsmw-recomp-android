/* speed.exe 0083f5d0 FUN_0083f5d0; analysis pseudocode, not buildable source.
 * calls 0084bd60 FUN_0084bd60
 * calls 0083edb0 FUN_0083edb0
 * calls 0084bdf0 FUN_0084bdf0
 * calls 0083f200 FUN_0083f200
 */

int FUN_0083f5d0(int *param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  FUN_0084bd60(param_1 + 0x68);
  for (; 0 < param_3; param_3 = param_3 - uVar2) {
    if (*(char *)((int)param_2 + 6) == '\x03') {
      (**(code **)(*param_1 + 0x1c))(*param_1);
    }
    else {
      iVar1 = FUN_0083edb0();
      if (iVar1 < 1) break;
    }
    uVar2 = (ushort)param_2[1] + 0x1b & 0x7ffc;
    iVar3 = iVar3 + uVar2;
    *param_2 = uVar2;
    if (param_3 == 1) break;
    param_2 = (uint *)((int)param_2 + uVar2);
  }
  if (0 < param_1[0x71]) {
    FUN_0083f200();
  }
  FUN_0084bdf0(param_1 + 0x68);
  return iVar3;
}

