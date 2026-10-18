/* speed.exe 007dc550 __isindst_lk; analysis pseudocode, not buildable source.
 * calls 007dc820 cvtdate
 */

/* Library Function - Single Match
    __isindst_lk
   
   Library: Visual Studio 2003 Debug */

undefined4 __thiscall __isindst_lk(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_009070b4 == 0) {
    return 0;
  }
  if ((param_2[5] != DAT_00907148) || (param_2[5] != DAT_00907154)) {
    if (DAT_009bae64 == 0) {
      cvtdate(1,1,param_2[5],4,1,0,0,2,0,0,0,param_1);
      cvtdate(0,1,param_2[5],10,5,0,0,2,0,0,0);
    }
    else {
      if (DAT_009bae50 == 0) {
        cvtdate(1,1,param_2[5],DAT_009bae52,DAT_009bae56,DAT_009bae54,0,DAT_009bae58,DAT_009bae5a,
                DAT_009bae5c,DAT_009bae5e,param_1);
      }
      else {
        cvtdate(1,0,param_2[5],DAT_009bae52,0,0,DAT_009bae56,DAT_009bae58,DAT_009bae5a,DAT_009bae5c,
                DAT_009bae5e,param_1);
      }
      if (DAT_009badfc == 0) {
        cvtdate(0,1,param_2[5],DAT_009badfe,DAT_009bae02,DAT_009bae00,0,DAT_009bae04,DAT_009bae06,
                DAT_009bae08,DAT_009bae0a,param_1);
      }
      else {
        cvtdate(0,0,param_2[5],DAT_009badfe,0,0,DAT_009bae02,DAT_009bae04,DAT_009bae06,DAT_009bae08,
                DAT_009bae0a,param_1);
      }
    }
  }
  if (DAT_0090714c < DAT_00907158) {
    if ((param_2[7] < DAT_0090714c) || (DAT_00907158 < param_2[7])) {
      return 0;
    }
    if ((DAT_0090714c < param_2[7]) && (param_2[7] < DAT_00907158)) {
      return 1;
    }
  }
  else {
    if ((param_2[7] < DAT_00907158) || (DAT_0090714c < param_2[7])) {
      return 1;
    }
    if ((DAT_00907158 < param_2[7]) && (param_2[7] < DAT_0090714c)) {
      return 0;
    }
  }
  iVar2 = (*param_2 + param_2[1] * 0x3c + param_2[2] * 0xe10) * 1000;
  if (param_2[7] == DAT_0090714c) {
    if (iVar2 < DAT_00907150) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else if (iVar2 < DAT_0090715c) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

