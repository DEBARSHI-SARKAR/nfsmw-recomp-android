/* speed.exe 0064ff50 FUN_0064ff50; analysis pseudocode, not buildable source.
 * calls 0064e940 FUN_0064e940
 * calls 0064efd0 FUN_0064efd0
 * calls 0064fa00 FUN_0064fa00
 * calls 0064eea0 FUN_0064eea0
 */

undefined4 __thiscall FUN_0064ff50(int param_1,int param_2)

{
  int in_EAX;
  int *piVar1;
  int iVar2;
  undefined4 *unaff_EDI;
  
  *(undefined4 *)(param_1 + 0x2da8) = 0;
  *(undefined4 *)(param_1 + 0x2dac) = 0;
  *(undefined4 *)(param_1 + 0x2d64) = 0;
  piVar1 = (int *)(param_1 + 0x2d68);
  iVar2 = 0x10;
  do {
    *piVar1 = piVar1[-1] * 2 + 1;
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_0064eea0();
  *(undefined4 *)(param_1 + 0x2db0) = *unaff_EDI;
  iVar2 = unaff_EDI[1];
  *(int *)(param_1 + 0x2db8) = iVar2;
  *(int *)(param_1 + 0x2de8) = iVar2;
  *(int *)(param_1 + 0x2db4) = iVar2 + *(int *)(param_1 + 0x2db0);
  *(undefined4 *)(in_EAX + 4) = 0;
  *(undefined4 *)(param_1 + 0x2da8) = 0;
  *(undefined4 *)(param_1 + 0x2dac) = 0;
  *(undefined4 *)(param_1 + 0x2de4) = 0;
  FUN_0064efd0(0x39,0xf);
  if (param_2 < 0x1000000) {
    if (param_2 == unaff_EDI[1]) {
      FUN_0064e940(param_1);
      FUN_0064e940(param_1);
      FUN_0064fa00();
      return *(undefined4 *)(in_EAX + 4);
    }
    FUN_0064e940(param_1);
    FUN_0064e940(param_1);
  }
  else {
    if (param_2 == unaff_EDI[1]) {
      FUN_0064e940(param_1);
      FUN_0064e940(param_1);
      FUN_0064fa00();
      return *(undefined4 *)(in_EAX + 4);
    }
    FUN_0064e940(param_1);
    FUN_0064e940(param_1);
  }
  FUN_0064e940(param_1);
  FUN_0064fa00();
  return *(undefined4 *)(in_EAX + 4);
}

