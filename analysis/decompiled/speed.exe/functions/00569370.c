/* speed.exe 00569370 FUN_00569370; analysis pseudocode, not buildable source.
 * calls 00514da0 FUN_00514da0
 * calls 00569190 FUN_00569190
 * calls 00514d10 FUN_00514d10
 * calls 00524850 FUN_00524850
 * calls 004ae8f0 FUN_004ae8f0
 */

void __thiscall FUN_00569370(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_00569190();
  if (((param_3 != 0) && (cVar1 = FUN_00514da0(param_3,0x5079c8f8), cVar1 == '\0')) &&
     (cVar1 = FUN_00514da0(param_3,0x280164f), cVar1 == '\0')) {
    FUN_00514d10(param_3,0x5079c8f8,1);
  }
  if (param_2 == 0) {
    cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0x38),0x5079c8f8);
    if (cVar1 != '\0') {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x38);
  }
  else {
    uVar2 = 0;
    switch(param_2) {
    case 1:
      uVar2 = 0xa729b1b;
      break;
    case 2:
      uVar2 = 0x717c82ae;
      break;
    case 3:
      uVar2 = 0x7180b901;
      break;
    case 4:
      uVar2 = 0xa206a0b4;
    }
    iVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),uVar2);
    if (iVar3 == 0) {
      return;
    }
    cVar1 = FUN_00514da0(iVar3,0x5079c8f8);
    if (cVar1 != '\0') {
      return;
    }
  }
  FUN_00514d10(iVar3,0x5079c8f8,1);
  FUN_004ae8f0(0x13);
  return;
}

