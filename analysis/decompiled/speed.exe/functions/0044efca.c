/* speed.exe 0044efca FUN_0044efca; analysis pseudocode, not buildable source.
 * calls 00447cc0 FUN_00447cc0
 * calls 0044bee0 FUN_0044bee0
 * calls 0044ee40 FUN_0044ee40
 * calls 00466330 FUN_00466330
 */

void __thiscall FUN_0044efca(int *param_1,undefined4 param_2,char param_3,char param_4)

{
  char cVar1;
  int unaff_EBX;
  bool in_ZF;
  
  if (((in_ZF) && (cVar1 = (char)unaff_EBX, DAT_0090d9ec == cVar1)) && (param_3 != cVar1)) {
    *(undefined1 *)((int)param_1 + 0x15) = 1;
    FUN_00447cc0(param_1 + 6);
    if (param_4 == cVar1) {
      FUN_0044bee0();
      FUN_0044ee40();
    }
    if (param_1[3] != unaff_EBX) {
      FUN_00466330(param_1[3]);
      param_1[3] = unaff_EBX;
    }
    if (*param_1 != unaff_EBX) {
      FUN_00466330(*param_1);
      *param_1 = unaff_EBX;
    }
    if (param_1[2] != unaff_EBX) {
      FUN_00466330(param_1[2]);
      param_1[2] = unaff_EBX;
    }
    if (param_1[1] != unaff_EBX) {
      FUN_00466330(param_1[1]);
      param_1[1] = unaff_EBX;
    }
    if (param_1[4] != unaff_EBX) {
      FUN_00466330(param_1[4]);
      param_1[4] = unaff_EBX;
    }
    *(char *)(param_1 + 5) = cVar1;
    *(char *)((int)param_1 + 0x15) = cVar1;
  }
  return;
}

