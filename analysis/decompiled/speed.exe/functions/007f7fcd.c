/* speed.exe 007f7fcd FUN_007f7fcd; analysis pseudocode, not buildable source.
 * calls 007f823d FUN_007f823d
 * calls 007f8267 FUN_007f8267
 * calls 007f9b6e FUN_007f9b6e
 * calls 007f831a FUN_007f831a
 * calls 007f83f1 FUN_007f83f1
 * calls 007f7c24 FUN_007f7c24
 * calls 007f788e FUN_007f788e
 * calls 007f9b8e FUN_007f9b8e
 * calls 007f8286 FUN_007f8286
 * calls 004b2f80 FUN_004b2f80
 * calls 007f9ad3 FUN_007f9ad3
 * calls 007f7865 FUN_007f7865
 * calls 004b2e10 FUN_004b2e10
 * calls 00862905 FUN_00862905
 */

int __thiscall FUN_007f7fcd(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 local_18 [16];
  undefined4 local_8;
  
  FUN_004b2e10(param_1[0xd],0x97,0x33);
  FUN_004b2e10(param_1[0xc],0x97,0x33);
  if (param_1[9] != 0) {
    FUN_00862905(param_1[9],param_1 + 8,&local_8);
    iVar1 = FUN_004b2f80(param_1[0xc],param_1[8],local_8,0);
    param_1[0xe] = iVar1;
  }
  if (param_1[0xb] != 0) {
    FUN_00862905(param_1[0xb],param_1 + 10,&local_8);
    iVar1 = FUN_004b2f80(param_1[0xd],param_1[10],local_8,0);
    param_1[0xf] = iVar1;
  }
  if ((char)param_1[5] == '\0') {
    param_1[0xf] = param_1[0xe];
  }
  if (param_1[7] == 0) {
    iVar1 = FUN_007f788e(0x14);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_007f831a(param_1[0xd],param_1[0xf]);
    }
    *param_1 = iVar1;
    param_1[0x15] = (uint)(-1 < *(int *)(iVar1 + 0xc));
  }
  else {
    param_1[0x15] = 0;
  }
  param_1[0x19] = 0;
  if ((DAT_00909e54 != 0) && (DAT_00909e58 != 0)) {
    param_1[0x18] = (int)param_1;
    FUN_007f9b6e(param_1 + 0x18,FUN_007f7d8e,FUN_007f7db9,param_2);
    iVar1 = FUN_007f7865(0x1c);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_007f9b8e(local_18);
    }
    param_1[0x19] = iVar1;
  }
  iVar1 = FUN_007f9ad3(0);
  param_1[0x1d] = iVar1;
  iVar1 = FUN_007f823d(0x18);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_007f8267();
  }
  param_1[0x17] = iVar1;
  FUN_007f8286();
  param_1[0x13] = *(int *)(iVar1 + 8);
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x10] = param_3;
  if (*param_1 != 0) {
    FUN_007f83f1();
  }
  FUN_007f7c24(0x1000);
  return param_1[0x1d];
}

