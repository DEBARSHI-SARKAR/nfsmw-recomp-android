/* speed.exe 007f1b3f FUN_007f1b3f; analysis pseudocode, not buildable source.
 * calls 007f1e60 FUN_007f1e60
 * calls 00404db0 FUN_00404db0
 * calls 00652ac0 _malloc
 * calls EXTERNAL:0000000b GetModuleHandleA
 * calls 007e87f0 DirectInput8Create
 * calls 007f19ce FUN_007f19ce
 * calls 007f1b26 FUN_007f1b26
 */

undefined4 * __thiscall FUN_007f1b3f(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  HMODULE pHVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  
  FUN_007f1e60(param_2);
  iVar4 = param_1[6];
  *param_1 = &PTR_LAB_008c2220;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  if (iVar4 != 0) {
    if (iVar4 == 0) {
      piVar1 = _malloc(4);
    }
    else {
      piVar1 = (int *)FUN_007f19ce(iVar4 * 0x7c + 4);
    }
    if (piVar1 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = piVar1 + 1;
      *piVar1 = iVar4;
      FUN_00404db0(piVar2,0x7c,iVar4,FUN_007f2bd1);
    }
    param_1[0x2e] = piVar2;
  }
  uVar8 = 0;
  puVar7 = param_1 + 0x2d;
  puVar6 = &DAT_008c065c;
  uVar5 = 0x800;
  pHVar3 = GetModuleHandleA((LPCSTR)0x0);
  iVar4 = DirectInput8Create(pHVar3,uVar5,puVar6,puVar7,uVar8);
  if (iVar4 == 0) {
    FUN_007f1b26();
  }
  DAT_009bb418 = 0;
  return param_1;
}

