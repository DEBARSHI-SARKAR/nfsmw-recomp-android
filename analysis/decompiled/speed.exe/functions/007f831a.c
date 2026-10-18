/* speed.exe 007f831a FUN_007f831a; analysis pseudocode, not buildable source.
 * calls 0081d535 FUN_0081d535
 * calls 0081e5ff FUN_0081e5ff
 * calls 0081d582 FUN_0081d582
 * calls 00862d24 FUN_00862d24
 * calls 0081e618 FUN_0081e618
 * calls 0081b92f FUN_0081b92f
 */

undefined4 * __thiscall FUN_007f831a(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_1c [24];
  
  cVar1 = FUN_0081b92f();
  if (cVar1 == '\0') {
    FUN_00862d24();
  }
  else {
    param_1[4] = 0xffffffff;
    param_1[1] = 0;
    param_1[3] = 0xffffffff;
    FUN_0081d582(local_1c);
    uVar2 = FUN_0081d535(1,0x1e);
    uVar3 = (*DAT_00909e54)("AV::audiobuff",uVar2,0,0,DAT_00909e5c);
    param_1[1] = uVar3;
    uVar2 = FUN_0081e618(param_2,local_1c,1,0x1e,uVar3,uVar2);
    param_1[3] = uVar2;
    uVar2 = FUN_0081e5ff(uVar2,0xffffffff,param_3);
    *param_1 = 0x3f800000;
    param_1[4] = uVar2;
  }
  return param_1;
}

