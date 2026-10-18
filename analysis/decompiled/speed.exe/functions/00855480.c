/* speed.exe 00855480 FUN_00855480; analysis pseudocode, not buildable source.
 * calls 0085a6f0 FUN_0085a6f0
 */

uint FUN_00855480(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0x73717565) {
    if (*param_1 != 0) {
      uVar2 = FUN_0085a6f0(*param_1,0x73717565,0,0);
      return uVar2;
    }
  }
  else if (param_2 == 0x646f6e65) {
    if (param_1[0x183] != 7) {
      return (uint)(param_1[0x183] == 6);
    }
  }
  else if (param_2 == 0x64617461) {
    iVar1 = param_1[0x183];
    if (iVar1 != 7) {
      if ((iVar1 != 5) && (iVar1 != 6)) {
        return 0;
      }
      return param_1[0x18d];
    }
  }
  else {
    if (param_2 == 0x636f6465) {
      return param_1[0x185];
    }
    if (param_2 == 0x74696d65) {
      return param_1[0x193];
    }
    iVar1 = param_1[0x183];
    if (iVar1 != 7) {
      if ((iVar1 != 5) && (iVar1 != 6)) {
        return 0xfffffffe;
      }
      if (param_2 == 0x68656164) {
        return param_1[0x188];
      }
      if (param_2 != 0x626f6479) {
        if (param_2 != 0x64617465) {
          return 0;
        }
        return param_1[0x186];
      }
      return param_1[0x189];
    }
  }
  return 0xffffffff;
}

