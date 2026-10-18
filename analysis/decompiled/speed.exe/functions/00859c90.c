/* speed.exe 00859c90 FUN_00859c90; analysis pseudocode, not buildable source.
 * calls 00858780 FUN_00858780
 * calls 0084ae70 FUN_0084ae70
 * calls 0083f890 FUN_0083f890
 * calls 0084b650 FUN_0084b650
 * calls 007c6380 _atoi
 */

int FUN_00859c90(int *param_1,undefined4 param_2,char *param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_00858780(param_1,param_2);
  if (iVar2 == 0) {
    iVar2 = FUN_0084ae70(2,1,0);
    *param_1 = iVar2;
    if (iVar2 == 0) {
      return -9;
    }
    *(undefined2 *)(param_1 + 0x42) = 2;
    *(undefined2 *)((int)param_1 + 0x10a) = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    if (param_3 == (char *)0x0) {
      param_3 = "";
    }
    if (param_5 < 1) {
      param_5 = (-(uint)(param_1[0x48] != 0) & 0x16b) + 0x50;
    }
    cVar1 = *param_3;
    for (uVar3 = 0; ((cVar1 != '\0' && (cVar1 != ':')) && (uVar3 < 0xff)); uVar3 = uVar3 + 1) {
      *(char *)(uVar3 + 8 + (int)param_1) = cVar1;
      cVar1 = param_3[uVar3 + 1];
    }
    *(undefined1 *)(uVar3 + 8 + (int)param_1) = 0;
    FUN_0083f890(param_1 + 0x42,param_1 + 2);
    if (CONCAT21(CONCAT11((char)param_1[0x43],*(undefined1 *)((int)param_1 + 0x10d)),
                 *(undefined1 *)((int)param_1 + 0x10e)) == 0 &&
        *(char *)((int)param_1 + 0x10f) == '\0') {
      *(char *)((int)param_1 + 0x10f) = (char)param_4;
      *(char *)((int)param_1 + 0x10e) = (char)((uint)param_4 >> 8);
      *(char *)((int)param_1 + 0x10d) = (char)((uint)param_4 >> 0x10);
      *(char *)(param_1 + 0x43) = (char)((uint)param_4 >> 0x18);
    }
    if (param_3[uVar3] == ':') {
      iVar2 = _atoi(param_3 + uVar3 + 1);
      *(char *)((int)param_1 + 0x10a) = (char)((uint)iVar2 >> 8);
      param_5 = _atoi(param_3 + uVar3 + 1);
    }
    else {
      *(char *)((int)param_1 + 0x10a) = (char)((uint)param_5 >> 8);
    }
    *(char *)((int)param_1 + 0x10b) = (char)param_5;
    if (CONCAT21(CONCAT11((char)param_1[0x43],*(undefined1 *)((int)param_1 + 0x10d)),
                 *(undefined1 *)((int)param_1 + 0x10e)) == 0 &&
        *(char *)((int)param_1 + 0x10f) == '\0') {
      iVar2 = FUN_0084b650(param_1 + 2,30000);
      param_1[1] = iVar2;
      param_1[0x46] = 1;
      return 0;
    }
    param_1[0x46] = 2;
    iVar2 = 0;
  }
  return iVar2;
}

