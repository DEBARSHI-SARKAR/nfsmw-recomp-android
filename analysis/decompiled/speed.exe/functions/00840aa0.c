/* speed.exe 00840aa0 FUN_00840aa0; analysis pseudocode, not buildable source.
 * calls 0083e390 FUN_0083e390
 * calls 00852430 GetTickCount
 * calls 00844a10 FUN_00844a10
 * calls 0083e3b0 FUN_0083e3b0
 * calls 008519e0 FUN_008519e0
 */

uint FUN_00840aa0(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0x6578746e) {
    return param_1[0x622];
  }
  if (param_2 == 0x686f7374) {
    uVar1 = 0;
    if (*param_1 != 0) {
      uVar1 = FUN_008519e0();
      return uVar1;
    }
  }
  else {
    if (param_2 == 0x696e6174) {
      if ((param_1[0x622] != 0) && (param_1[0x623] != 0)) {
        return (uint)(param_1[0x622] != param_1[0x623]);
      }
      return 0;
    }
    if (param_2 == 0x6c636e74) {
      if (param_1[0x826] == 0) {
        uVar1 = 0xffffffff;
        iVar2 = FUN_00844a10(param_1,0);
        if (iVar2 != 0) {
          iVar4 = 0;
          uVar1 = 0;
          iVar3 = FUN_0083e390(iVar2);
          if (0 < iVar3) {
            do {
              iVar3 = FUN_0083e3b0(iVar2,iVar4);
              uVar1 = uVar1 + *(int *)(iVar3 + 0x10);
              iVar4 = iVar4 + 1;
              iVar3 = FUN_0083e390(iVar2);
            } while (iVar4 < iVar3);
          }
        }
        return uVar1;
      }
      return param_1[0x829] + param_1[0x828];
    }
    if (param_2 == 0x6c6f636c) {
      return param_1[0x623];
    }
    if (param_2 == 0x6c6f676e) {
      return (uint)((char)param_1[0x56a] != '\0');
    }
    if (param_2 == 0x6d6f7265) {
      return param_1[0x624];
    }
    if (param_2 == 0x72666c67) {
      return param_1[0x5fa];
    }
    if (param_2 == 0x726f6f6d) {
      return param_1[0x5f9];
    }
    if (param_2 == 0x73656375) {
      uVar1 = 0;
      if (*param_1 != 0) {
        uVar1 = FUN_008519e0();
        return uVar1;
      }
    }
    else {
      if (param_2 == 0x736c6f74) {
        return param_1[0x627];
      }
      if (param_2 == 0x73746174) {
        return param_1[2];
      }
      if (param_2 == 0x7374696d) {
        return param_1[0x74f];
      }
      if (param_2 == 0x73757370) {
        return param_1[3];
      }
      if (param_2 == 0x7469636b) {
        uVar1 = GetTickCount();
        return uVar1;
      }
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

