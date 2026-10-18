/* speed.exe 007f78e6 FUN_007f78e6; analysis pseudocode, not buildable source.
 * calls 004b2da0 FUN_004b2da0
 * calls 007f0fe0 FUN_007f0fe0
 * calls 004b2e10 FUN_004b2e10
 * calls 00862d24 FUN_00862d24
 * calls 004b2ba0 FUN_004b2ba0
 * calls 004b2ed0 FUN_004b2ed0
 * calls 00862731 FUN_00862731
 * calls 0081b92f FUN_0081b92f
 * calls 004b2f80 FUN_004b2f80
 * calls 004b2e80 FUN_004b2e80
 */

void __thiscall
FUN_007f78e6(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_0081b92f();
  if (cVar1 == '\0') {
    param_11 = 1;
  }
  FUN_007f0fe0(param_1,0,0x94);
  param_1[6] = param_10;
  param_1[3] = param_2;
  param_1[7] = param_11;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0x11] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  *param_1 = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[4] = param_6;
  param_1[0x24] = 0;
  if ((DAT_00909e54 == (code *)0x0) || (DAT_00909e58 == 0)) {
    FUN_00862d24();
  }
  else if (param_6 == 0) {
    *(undefined1 *)(param_1 + 5) = 0;
    uVar2 = (*DAT_00909e54)("AV::VideoStreamBuffer",param_4,0,0,DAT_00909e5c);
    param_1[1] = uVar2;
    param_1[2] = 0;
    uVar2 = FUN_004b2ba0(2,3,2,uVar2,param_4);
    param_1[0xc] = uVar2;
    uVar2 = FUN_004b2e80(uVar2,2);
    param_1[0xd] = uVar2;
    FUN_004b2e10(uVar2,0x98,0x34);
    FUN_004b2e10(param_1[0xc],0x98,0x34);
    FUN_004b2da0(param_1[0xc],1,0xff,0x4d,1);
    FUN_004b2da0(param_1[0xc],3,0,0,0xfffffffe);
    if (param_1[7] == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 0xffffffff;
    }
    FUN_004b2da0(param_1[0xc],2,0xffff,0x4353,uVar2);
    if (param_1[6] == 1) {
      uVar2 = FUN_00862731(param_2,DAT_00909e5c);
      param_1[9] = uVar2;
    }
    else {
      if (param_1[6] == 0) {
        uVar2 = FUN_004b2ed0(param_1[0xc],param_2,param_5);
      }
      else {
        uVar2 = FUN_004b2f80(param_1[0xc],param_1[3],param_3,0);
      }
      param_1[0xe] = uVar2;
    }
  }
  else {
    *(undefined1 *)(param_1 + 5) = 1;
    uVar2 = (*DAT_00909e54)("AV::VideoStreamBuffer",param_4,0,0,DAT_00909e5c);
    param_1[1] = uVar2;
    uVar2 = (*DAT_00909e54)("AV::AudioStreamBuffer",param_8,0,0,DAT_00909e5c);
    param_1[2] = uVar2;
    uVar2 = FUN_004b2ba0(2,2,1,param_1[1],param_4);
    param_1[0xc] = uVar2;
    uVar2 = FUN_004b2ba0(2,2,1,param_1[2],param_8);
    param_1[0xd] = uVar2;
    FUN_004b2e10(uVar2,0x98,0x34);
    FUN_004b2e10(param_1[0xc],0x98,0x34);
    FUN_004b2da0(param_1[0xc],1,0xff,0x4d,1);
    FUN_004b2da0(param_1[0xc],2,0,0,0xfffffffe);
    if (param_1[7] == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0xffffffff;
    }
    FUN_004b2da0(param_1[0xd],1,0xffff,0x4353,uVar2);
    FUN_004b2da0(param_1[0xd],2,0,0,0xfffffffe);
    if (param_1[6] == 1) {
      uVar2 = FUN_00862731(param_6,DAT_00909e5c);
      param_1[0xb] = uVar2;
      uVar2 = FUN_00862731(param_2,DAT_00909e5c);
      param_1[9] = uVar2;
    }
    else if (param_1[6] == 0) {
      uVar2 = FUN_004b2ed0(param_1[0xd],param_6,param_9);
      param_1[0xf] = uVar2;
      uVar2 = FUN_004b2ed0(param_1[0xc],param_2,param_5,0);
      param_1[0xe] = uVar2;
    }
    else {
      uVar2 = FUN_004b2f80(param_1[0xc],param_1[3],param_3,0);
      param_1[0xe] = uVar2;
      uVar2 = FUN_004b2f80(param_1[0xd],param_1[4],param_7,0);
      param_1[0xf] = uVar2;
    }
  }
  return;
}

