/* speed.exe 00791700 FUN_00791700; analysis pseudocode, not buildable source.
 * calls 00842b40 FUN_00842b40
 * calls 0078d2b0 FUN_0078d2b0
 * calls 00842b10 FUN_00842b10
 * calls 0078d330 FUN_0078d330
 * calls 0078d2f0 FUN_0078d2f0
 * calls 0078d3c0 FUN_0078d3c0
 * calls 0078d370 FUN_0078d370
 */

void __fastcall FUN_00791700(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = (int *)FUN_00842b40(param_1[1]);
  param_1[2] = (int)piVar2;
  if (piVar2 == (int *)0x0) {
    uVar3 = FUN_00842b10(param_1[1],0,0);
    (**(code **)(*param_1 + 0x48))(uVar3);
  }
  else {
    iVar1 = *piVar2;
    if (iVar1 < 0x68747471) {
      if (iVar1 == 0x68747470) {
        FUN_0078d370();
        return;
      }
      if (iVar1 == 0x616c7274) {
        FUN_0078d2b0();
        return;
      }
      if (iVar1 == 0x63617264) {
        FUN_0078d330();
        return;
      }
    }
    else {
      if (iVar1 == 0x6e657773) {
        FUN_0078d3c0();
        return;
      }
      if (iVar1 == 0x70726f6d) {
        FUN_0078d2f0();
        return;
      }
    }
  }
  return;
}

