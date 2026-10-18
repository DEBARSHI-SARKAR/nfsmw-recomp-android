/* speed.exe 00569190 FUN_00569190; analysis pseudocode, not buildable source.
 * calls 00514da0 FUN_00514da0
 * calls 00514d10 FUN_00514d10
 * calls 00524850 FUN_00524850
 */

void __fastcall FUN_00569190(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0x3c),0x33113ac);
  if (cVar1 == '\0') {
    cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0x3c),0x16a259);
    if (cVar1 == '\0') {
      FUN_00514d10(*(undefined4 *)(param_1 + 0x3c),0x33113ac,1);
    }
  }
  cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0x40),0x33113ac);
  if (cVar1 == '\0') {
    cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0x40),0x16a259);
    if (cVar1 == '\0') {
      FUN_00514d10(*(undefined4 *)(param_1 + 0x40),0x33113ac,1);
    }
  }
  iVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xa729b1b);
  if (iVar2 != 0) {
    cVar1 = FUN_00514da0(iVar2,0x33113ac);
    if (cVar1 == '\0') {
      cVar1 = FUN_00514da0(iVar2,0x1744b3);
      if (cVar1 == '\0') {
        FUN_00514d10(iVar2,0x33113ac,1);
      }
    }
  }
  iVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x717c82ae);
  if (iVar2 != 0) {
    cVar1 = FUN_00514da0(iVar2,0x33113ac);
    if (cVar1 == '\0') {
      cVar1 = FUN_00514da0(iVar2,0x1744b3);
      if (cVar1 == '\0') {
        FUN_00514d10(iVar2,0x33113ac,1);
      }
    }
  }
  iVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xa206a0b4);
  if (iVar2 != 0) {
    cVar1 = FUN_00514da0(iVar2,0x33113ac);
    if (cVar1 == '\0') {
      cVar1 = FUN_00514da0(iVar2,0x1744b3);
      if (cVar1 == '\0') {
        FUN_00514d10(iVar2,0x33113ac,1);
      }
    }
  }
  iVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x7180b901);
  if (iVar2 != 0) {
    cVar1 = FUN_00514da0(iVar2,0x33113ac);
    if (cVar1 == '\0') {
      cVar1 = FUN_00514da0(iVar2,0x1744b3);
      if (cVar1 == '\0') {
        FUN_00514d10(iVar2,0x33113ac,1);
      }
    }
  }
  cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0x38),0x5079c8f8);
  if (cVar1 != '\0') {
    FUN_00514d10(*(undefined4 *)(param_1 + 0x38),0x33113ac,1);
  }
  return;
}

