/* speed.exe 00701540 FUN_00701540; analysis pseudocode, not buildable source.
 */

uint FUN_00701540(int param_1,int *param_2)

{
  char cVar1;
  uint in_EAX;
  int iVar2;
  sbyte sVar3;
  
  if ((param_1 < 10) || (0x10 < param_1)) {
    if ((param_1 < 0x11) || (0x16 < param_1)) {
      if ((param_1 < 0x17) || (0x1d < param_1)) {
        if ((param_1 < 0x1e) || (0x24 < param_1)) {
          if ((param_1 < 0x25) || (0x29 < param_1)) {
            if ((param_1 < 0x2a) || (0x2e < param_1)) {
              if ((param_1 < 0x2f) || (0x34 < param_1)) {
                if ((param_1 < 0x35) || (0x39 < param_1)) {
                  if ((param_1 < 0x3a) || (0x3f < param_1)) {
                    if ((param_1 < 0x40) || (0x45 < param_1)) {
                      if ((param_1 < 0x46) || (0x48 < param_1)) {
                        if ((param_1 < 0x49) || (0x4c < param_1)) {
                          if ((param_1 < 0x4d) || (0x4f < param_1)) {
                            if ((param_1 < 0x50) || (0x54 < param_1)) {
                              if ((param_1 < 0x55) || (0x58 < param_1)) {
                                if ((param_1 < 0x59) || (0x60 < param_1)) {
                                  if ((param_1 < 0x61) || (0x69 < param_1)) {
                                    return in_EAX & 0xffffff00;
                                  }
                                  sVar3 = 0;
                                  cVar1 = 'a';
                                }
                                else {
                                  sVar3 = 1;
                                  cVar1 = 'Y';
                                }
                              }
                              else {
                                sVar3 = 2;
                                cVar1 = 'U';
                              }
                            }
                            else {
                              sVar3 = 3;
                              cVar1 = 'P';
                            }
                          }
                          else {
                            sVar3 = 4;
                            cVar1 = 'M';
                          }
                        }
                        else {
                          sVar3 = 5;
                          cVar1 = 'I';
                        }
                      }
                      else {
                        sVar3 = 6;
                        cVar1 = 'F';
                      }
                    }
                    else {
                      sVar3 = 7;
                      cVar1 = '\0';
                    }
                  }
                  else {
                    sVar3 = 8;
                    cVar1 = ':';
                  }
                }
                else {
                  sVar3 = 9;
                  cVar1 = '5';
                }
              }
              else {
                sVar3 = 10;
                cVar1 = '/';
              }
            }
            else {
              sVar3 = 0xb;
              cVar1 = '*';
            }
          }
          else {
            sVar3 = 0xc;
            cVar1 = '%';
          }
        }
        else {
          sVar3 = 0xd;
          cVar1 = '\x1e';
        }
      }
      else {
        sVar3 = 0xe;
        cVar1 = '\x17';
      }
    }
    else {
      sVar3 = 0xf;
      cVar1 = '\x11';
    }
  }
  else {
    sVar3 = 0x10;
    cVar1 = '\n';
  }
  iVar2 = 1 << ((char)param_1 - cVar1 & 0x1fU);
  *param_2 = 1 << sVar3;
  param_2[1] = iVar2;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}

