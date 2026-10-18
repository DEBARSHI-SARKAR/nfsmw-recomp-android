/* speed.exe 005bc710 FUN_005bc710; analysis pseudocode, not buildable source.
 * calls 005b1480 FUN_005b1480
 * calls 00652ac0 _malloc
 * calls 005bc240 FUN_005bc240
 * calls 005b59c0 FUN_005b59c0
 */

undefined4 __fastcall FUN_005bc710(int *param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  
  piVar1 = (int *)param_1[1];
  if (((*piVar1 == -0x1891baba) && (piVar1[2] == 0x64486b50)) && (0x1ffff < (uint)piVar1[4])) {
    pvVar2 = _malloc(0xb8);
    if (pvVar2 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_005bc240();
    }
    *param_1 = iVar3;
    *(undefined4 *)(iVar3 + 0x8c) = 0;
    param_1[0x10] = piVar1[6];
    param_1[0x11] = piVar1[7];
    iVar3 = piVar1[8];
    FUN_005b59c0(piVar1 + 10);
    FUN_005b1480(iVar3 + (int)(piVar1 + 10));
    return 1;
  }
  return 0;
}

