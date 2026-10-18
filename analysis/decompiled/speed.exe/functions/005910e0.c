/* speed.exe 005910e0 FUN_005910e0; analysis pseudocode, not buildable source.
 * calls 00739a70 FUN_00739a70
 * calls 005816b0 FUN_005816b0
 * calls 0056f2b0 FUN_0056f2b0
 * calls 00759800 FUN_00759800
 * calls 007594a0 FUN_007594a0
 */

void __thiscall FUN_005910e0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = 0;
  piVar3 = param_1;
  do {
    if (*piVar3 == param_2) {
      piVar3 = param_1 + iVar1 * 5;
      goto LAB_00591101;
    }
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 5;
  } while (iVar1 < 200);
  piVar3 = (int *)0x0;
LAB_00591101:
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar2 = FUN_005816b0(0,0,0);
  FUN_00739a70(uVar2,uVar4,uVar5,uVar6);
  if ((*(byte *)(piVar3 + 4) < 0x4c) &&
     (param_1 + (uint)*(byte *)(piVar3 + 4) * 0x66 + 1000 != (int *)0x0)) {
    FUN_0056f2b0(param_4);
    return;
  }
  FUN_00759800();
  FUN_007594a0();
  return;
}

